reset
set grid mxtics mytics
set logscale xy
set format y "10^{%L}"
set ytics
set xtics
set samples 1000000
p  "data" u 1:2 w l,  "data" u 1:3 w l,  "data" u 1:4 w l,  "data" u 1:5 w l,  "data" u 1:6 w l
