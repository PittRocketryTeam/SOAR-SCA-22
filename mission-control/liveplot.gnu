#set xrange [0:20]
#set yrange [0:100]
plot ".datastream" using 1:2 with lines
pause 1
reread