#!/bin/bash
###############################
#script9a.sh

#Leemos dos numeros
read -p "Introduzca un numero x < 10: " num1
read -p "Introduzca un numero 2 < x: " num2

#En este caso usamos fi
if [ $num1 -lt 10 ] && [ $num2 -gt 1 ] ; then
	echo "$num1*$num2=$[$num1*$num2]"
elif [ $num1 -ge 10 ]; then 
	echo "Numero 1 fuera de rango !"
elif [ $num2 -lt 2 ]; then 
	echo "Numero 2 fuera de rango !"
fi
