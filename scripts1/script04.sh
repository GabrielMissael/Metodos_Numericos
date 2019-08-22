#!/bin/bash
#############################
#Scriptcuatro.sh
# IFS es una variable de entorno que determina el delimitador de campos
IFS=" "
read -p "Introduzca su nombre,primer apellido,segundo apellido:" nombre apellido1 apellido2
echo "Su nombre es $nombre"
echo "Su primer apellido es $apellido1"
echo "Su segundo apellido es $apellido2"
