#!/bin/bash
###############################
#script9b.sh

usuario=paco
read -p "Introduzca su nombre de usuario: " lognom
echo $logmon

if [ $lognom = $usuario ]; then
	echo "Hola, $lognom ¿Como esta hoy?"
else
	echo "Tu no eres $usuario!!!"
fi
