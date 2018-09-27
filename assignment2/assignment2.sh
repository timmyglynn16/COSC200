#!/bin/bash

students=$(cat students.txt | wc -l)
echo number of students: $students
percent=10


n=$(( students / percent ))
#n=$(echo "scale=4; $num_of_lines*$percent" | bc)
echo $n students to be removed from program
echo

sort -n students.txt > newstudents.txt
sed -i -e "1,${n}d" newstudents.txt 
echo New Eligible Students:
echo
cat newstudents.txt



