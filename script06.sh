#!/bin/bash
###############################
#script6.sh

#Observemos que declarar una variable como numero, en realidad será una cadena de texto
a=(5+2)*3
echo $a

#Para exponentes ponemos doble asterisco, pero igual solo sirve como cadena de texto
b=2**3
echo $a+$b

#Para hacer operaciones matematicas necesitamos usar un comando para ello, "let variable = expresion aritmetica"
let x=(5+2)*3
echo $x

#Otro comando que podemos usar es poner doble signo de dolar
echo $[5*3]

