#set xrange [0:20]
#set yrange [0:100]
clear 

set size 1,1
set origin 0,0
set multiplot layout 3,2 columnsfirst scale 1.1,0.9

plot ".datastream" using 1:2 with lines
plot ".datastream" using 1:3 with lines

unset multiplot

pause 0.5
reread