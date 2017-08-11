# programming101examples
A set of basic examples in C++


*Las preguntas que se omiten fueron contestadas correctamente en el examen.*

* [Pregunta 2](#pregunta-2)
* [Pregunta 5](#pregunta-5)
* [Pregunta 7](#pregunta-7)
* [Pregunta 8](#pregunta-8)
* [Pregunta 9](#pregunta-9)
* [Pregunta 12](#pregunta-12)
* [Pregunta 16](#pregunta-16)
* [Pregunta 17](#pregunta-17)
* [Pregunta 18](#pregunta-18)
* [Pregunta 20](#pregunta-20)

## Pregunta 2
* Sin necesidad de usar paréntesis donde no sea necesario debido a la prioridad de operadores y respetando exactamente lo que indica la operación siguiente, ¿cómo se escribiría en C++?  

![](https://latex.codecogs.com/gif.latex?IMC%3D%5Cfrac%7Bpeso%7D%7Baltura%5E2%7D)


```
a)IMC = peso/(altura)(altura)
b)IMC = peso/(altura*altura)	RESPUESTA CORRECTA
c)IMC = pero/altura*altura
d)IMC = peso/((altura)(altura))
```

### ¿Por qué?

La jerarquía de operaciones es la siguiente:  

![](https://www.cliffsnotes.com/assets/265542.png)

Siempre se empieza a evaluar de izquierda a derecha.  

#### ¿Por qué las demás opciones son incorrectas?
En `a)`, se evalúa peso/altura y se multiplica por la altura, lo cual es incorrecto, en `c)` es el mismo caso.

En `d)` los paréntesis que envuelven a los dos términos "altura" están de más.

## Pregunta 5
* Si el usuario proporciona `15` a la entrada, ¿qué sucede con el siguiente código de C++?
```c++
float x;
cin >> x;
y = x+2;
cout << y;
```

```
a) Nada, hay un error de sintaxis.		RESPUESTA CORRECTA
b) Se imprime en pantalla 17.0
c) Nada, puesto que hay un error semántico.
d) Un flotante no puede almacenar un entero, es una operación inválida.
```

### ¿Por qué?
El compilador se va a quejar de un error de sintaxis por que se le está pidiendo usar una variable no declarada, en este caso `y`.

 
#### ¿Por qué las demás opciones son incorrectas?
En `a)`, el compilador no logra llegar a evaluar la línea de salida estándar (`cout << y;`).

`c)` no puede ser correcta por que el compilador, de hecho, está reportando un error sintáctico. Un error semántico es un error en la lógica, esto es, la sintaxis es correcta pero tiene resultados no deseados en tiempo de ejecución.

Como podemos ver en la siguiente imagen, no se trata de un error semántico, puesto que el compilador no logra crear un código objeto.
 
`d)` Un flotante puede almacenar un entero, ya que C++ aplica un cast al usar `cin`. Ver más [acá](https://es.wikipedia.org/wiki/Tipado_fuerte)

![](https://github.com/xavrb/programming101/blob/master/pregunta5/p5.png)


**Revisar código en `/pregunta5`**

## Pregunta 7

* ¿Qué se muestra en pantalla al ejecutar el siguiente código?

```c++
num =0;
do{
	cout << num << " ";
	num+=2;
}while(num<=10); 
```


```
a) 2 4 6 8 10
b) 0 2 4 6 8 10		RESPUESTA CORRECTA
c) 12
d) Hay un error de sintaxis.
```

### ¿Por qué?
Dentro del ciclo `do` se imprime `num` cuando vale 0 y desde ahí empieza a incrementar, hasta que la condición `while(num<=10)` es verdadera. Es por eso que la salida de ese código es: `0 2 4 6 8 10`, como se ve en:  

![](https://github.com/xavrb/programming101/blob/master/pregunta7/p7.png)


 
#### ¿Por qué las demás opciones son incorrectas?
En `a)`, no se muestra el primer ciclo cuando se imprime `0`.

`c)` no es correcta. La condición `while(num<=10)` se cumple varias veces antes de llegar a 12.

`d)` No hay ningún error de sintaxis.


**Revisar código en `/pregunta7`**


## Pregunta 8

* Nombre que se le da a un espacio de memoria cuyo valor puede cambiar durante la ejecución de un programa.
```
a) expresión
b) constante
c) identificador
d) variable		RESPUESTA CORRECTA
```
### ¿Por qué?
Cuando el compilador encuentra la declaración de una variable reserva el espacio de memoria apropiado para guardar esa variable con ese exacto tipo de dato, este valor puede cambiar durante la ejecucion del programa.

 

 
#### ¿Por qué las demás opciones son incorrectas?
`b)` se refiere a un valor que, de hecho, no puede cambiar en tiempo de ejecución.  
`c)` no es correcta, un identificador puede ser una variable, un tipo, una función, etc.

Por favor referirse a la documentación de GCC sobre términos de un compilador, [acá](https://gcc.gnu.org/onlinedocs/cpp/Implementation-defined-behavior.html#Implementation-defined-behavior)


Y:
```
Title	Exploring C++ 11
Expert's voice in C++
Author	Ray Lischner
Edition	2
Publisher	Apress, 2014
ISBN	1430261943, 9781430261940
Length	623 pages
```

## Pregunta 9

* ¿Qué se muestra en pantalla al ejecutar el siguiente código?

```c++
int i;
for(i=0;i<=10;i++);
{
	cout << i << " ";
}
```


```
a) Nada puesto que hay un error de sintaxis.
b) Se hace un ciclo infinito.
c) 11		RESPUESTA CORRECTA
d) 1 2 3 4 5 6 7 8 9 10
```

### ¿Por qué?
El ciclo `for` es un for vacío, sólo va a aumentar `i`, pero no hay código dentro. El símbolo `;` "cierra" el for sin indicar código que se repita en el ciclo.

```
{
	cout << i << " ";
}
```
El código anterior `NO` es parte del ciclo for, por lo que solo imprime el valor de `i` cuando termina.  

![](https://github.com/xavrb/programming101/blob/master/pregunta9/p9.png)


 
#### ¿Por qué las demás opciones son incorrectas?
`a)` es incorrecta, el compilador genera el código objeto.  
`b)` no es correcta por que no hay ninguna condición que lo genere, cómo se dijo antes `;` sólo "cierra" el ciclo for, provocando que solo se incremente su variable `i`.  
`d)` Como se dijo, nunca se repite una función de impresión a salida estándar.  


**Revisar código en `/pregunta9`**
 
## Pregunta 12

* Si `a=23` y `3`, ¿cuál es el resultado de `a/b`?


```
a) 1
b) 0.33
c) 7.33	
d) 7
```

**La respuesta depende del tipo de variable en donde se va a almacenar el resultado, ya que C++ es [fuertemente tipado](https://es.wikipedia.org/wiki/Tipado_fuerte).**


## Pregunta 16

* ¿Qué se muestra en pantalla al ejecutar el siguiente código?

```c++
for(num=2;num<=100;num+=10){
	cout << "num ";
}
```


```
a) 100
b) 2 10 20 30 40 50 60 70 80 90 100
c) 2 12 22 32 42 52 62 72 82 92
d) num num num num num num num num num 		RESPUESTA CORRECTA
```

### ¿Por qué?
En la línea `cout << "num ";`, `num` no se refiere a la variable del ciclo for, ya que está entre comillas, es texto simple.



 
## Pregunta 17

* ¿Qué se muestra en pantalla al ejecutar el siguiente código?

```c++
int i;
for(i=1;i<10;i+=2){
	cout << i<< " ";
}
```


```
a) 1 3 5 7 9		RESPUESTA CORRECTA
b) 2 4 6 8
c) Error de sintaxis.
d) Se hace un ciclo infinito, se imprimen solo 1s.
```

### ¿Por qué?
Es un ciclo for normal.

`d)` es incorrecta, no hay condiciones que generen un ciclo infinito.

Se puede ver en:


![](https://github.com/xavrb/programming101/blob/master/pregunta17/p17.png)  


**Revisar código en `/pregunta17`**


## Pregunta 20

* ¿Qué se muestra en pantalla al ejecutar el siguiente código?

```c++
for(x=1;x>=10;x++){
	cout << x<< " ";
}
cout << x<< " ";
```


```
a) 1 2 3 4 5 6 7 8 9 10 11
b) x x x x x x x x x x
c) 11
d) 1
```

### ¿Por qué?
`x` se declara con un valor inicial de 1, pero como la condición `x>=10` no se cumple el ciclo for termina. Así, pues, `x=1`.


Se puede ver en:


![](https://github.com/xavrb/programming101/blob/master/pregunta20/p20.png)

**Revisar código en `/pregunta20`**


