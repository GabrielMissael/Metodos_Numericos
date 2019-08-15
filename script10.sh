#!/bin/bash
###############################
#script10.sh

read -p "Pulsa una tecla " tecla

case $tecla in
	[a-z,A-Z]) 
		echo "Has introducido una letra" ;;
	
	[0-9])
		echo "Has introducido un numero" ;;
	
	*)
		echo "Ha introducido un caracter especial" ;;

esac 
