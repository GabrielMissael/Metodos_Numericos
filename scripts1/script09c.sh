#!/bin/bash
###############################
#script9c.sh

#Este script revisa si existe una carpeta con un determinado archivo

if [ -f cosas/cosas2 ]; then

	#Si existe, copia el archivo al directorio actual	
	cp cosas/cosas2 .
	echo "Hecho"

else 

	#En caso contrario, avisa que el archivo no existe
	echo "Archivo /cosas/cosas2 no existe"
fi
