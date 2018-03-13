#!/bin/bash

path="files"
if [ ! -d files ]
then
	mkdir $path
fi
start=$1
end=$2
i=$start
gcc main.c -lm -o main
./main $start $end
plo="./$path/gnu.g"	
touch ./$plo
> ./$plo
echo "reset" >> $plo
echo "set grid" >> $plo
echo "set xrange [-50:50]" >> $plo
echo "set yrange [-3:3]" >> $plo
echo "set samples 1000000" >> $plo
plotcomm="p "
while [ $i -le $end ]
do
	var="data$i.txt"
#	touch ./$path/$var
#	> ./$path/$var
	let j=0
	while [ $j -le 100 ]
	do
		let f=$((j*j*j*i))
#		echo "$j	$f" >> ./$path/$var
		let j++
	done
	plotcomm="$plotcomm \"./$path/$var\" w l"
	if [ ! $i -eq $end ]
	then
		plotcomm="$plotcomm, "
	fi
	let i++
done
echo "$plotcomm" >> $plo

gnuplot -p -e "load '$plo'"
