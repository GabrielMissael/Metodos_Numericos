#!/bin/bash
#############################
#! /bin/bash
clear
contador=0
declare -a usuario=( Alberto John Roberto Laura Sergio Cristian Dani )
for valor in ${usuario[*]}
do
echo "El usuario $contador vale $valor"
contador=$[$contador+1]
done
