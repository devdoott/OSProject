echo "" >scull
nice -n 19 cat test.txt >>scull &
nice -n -5 cat test2.txt >>scull &
nice -n 18 cat test.txt >>scull &
nice -n -4 cat test2.txt >>scull &
nice -n 17 cat test.txt >>scull &
nice -n -3 cat test2.txt >>scull &
nice -n 16 cat test.txt >>scull &
nice -n -2 cat test2.txt >>scull &
nice -n 15 cat test.txt >>scull &
nice -n -1 cat test2.txt >>scull &
