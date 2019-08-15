#!/bin/bash
###############################
#script8.sh

#Leemos un numero
read -p "Introduzca un numero 1 < x < 10: " num

#Esta es la estructura general de un if. Este ejemplo solo compara el numero para que este dentro del rango
if [[ $num -gt 1 && ($num -lt 10) ]] ; then
echo "$num*$num=$[$num*$num]"

else
echo "Numero fuera de rango !"
echo "Numero fuera de rango !"
fi
