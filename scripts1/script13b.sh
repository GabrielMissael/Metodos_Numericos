#!/bin/bash
#############################
read -p "Introduzca un nUmero:" x
let sum=0
for (( i=1 ; $i<$x ; i=$i+1 )) ; do
let "sum = $sum + $i"
done
salida=$[$x-1]
echo "La suma de los primeros $salida nUmeros es: $sum"
