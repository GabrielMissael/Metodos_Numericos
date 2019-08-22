#!/bin/bash
#############################
#Scripttres.sh
echo -p "Introduzca nombre de fichero a borrar:"
read fichero
rm -i $fichero
echo "Fichero $fichero borrado!"
