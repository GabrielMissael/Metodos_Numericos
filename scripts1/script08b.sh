#!/bin/bash
###############################
#script8b.sh

#Leemos dos numeros
read -p "Introduzca un numero 1 < x < 10: " num1
read -p "Introduzca un numero 1 < x < 10: " num2

#En este caso tenemos if anidado
if [[ $num1 -gt 1 && ($num1 -lt 10) ]] ; then
	if [[ $num2 -gt 1 && ($num2 -lt 10) ]] ; then
		echo "$num1*$num2=$[$num1*$num2]"
	else
		echo "Numero 2 fuera de rango !"
	fi
else
	echo "Numero 1 fuera de rango !"
fi
