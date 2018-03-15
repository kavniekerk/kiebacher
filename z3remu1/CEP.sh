#!/bin/bash

PAR=$1
N_PLOT=$2
cd ../
make
cd ./z3remu1
make
mkdir lastdata

./main $PAR
cp -u data ./lastdata/data
plo="lastdata/gnu.g"	
touch ./$plo
> ./$plo
echo "reset" >> $plo
echo "set grid mxtics mytics" >> $plo
echo "set logscale xy" >> $plo
echo "set format y \"10^{%L}\"" >> $plo
echo "set ytics" >> $plo
echo "set xtics" >> $plo
echo "set samples 1000000" >> $plo
plotcomm="p "
let i=1
while [ $i -le $N_PLOT ]
do
	let i++
	plotcomm="$plotcomm \"data\" u 1:$i w l"
	if [ ! $i -eq $((N_PLOT+1)) ]
	then
		plotcomm="$plotcomm, "
	fi
done
echo "$plotcomm" >> $plo

gnuplot -p -e "load '$plo'"
