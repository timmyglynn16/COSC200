BEGIN {listcount = 0}
$1 >= 3.5 && $1 < 3.75 {laude ++}
$1 >= 3.75 && $1 < 3.9 {magna ++ }
$1 >= 3.9 {summa ++ }
END {print "There are " laude " students on laude" }
    {print "There are " magna " students on magna" }
    {print "There are " summa " students on summa" }