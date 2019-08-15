#!/bin/bash
###############################
#script7.sh

#Leemos dos variables dadas por el usuario
read -p "Introduzca un primer numero: " x
read -p "Introduzca un segundo numero: " y

#Realizamos todas las operaciones
suma=$(($x + $y))
resta=$(($x - $y))
multi=$[$x * $y]
div=$[$x / $y]
modu=$[$x % $y]
ls
#Imprimimos todas las operaciones
echo "Suma: $suma"
echo "Resta: $resta"
echo "Multiplicacion: $multi"
echo "divicion: $div"
echo "Modulo: $modu"
