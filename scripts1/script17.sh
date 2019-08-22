#!/bin/bash
#############################
###Definimos la función suma
function suma() {
local resultado
resultado=$[$1 + $2]
return $resultado
}

####Cuerpo del script
read -p "Introduce el primer numero: " num1
read -p "Introduce el segundo numero: " num2
echo " Llamo a la funcion suma "
suma $num1 $num2
echo "El resultado es $?"
