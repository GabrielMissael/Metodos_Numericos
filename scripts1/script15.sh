#!/bin/bash
#############################
read -p "Introduzca un numero:" x
until [ "$x" -le 0 ]; do
echo $x
x=$(($x - 1))
echo $x
done
echo FIN
