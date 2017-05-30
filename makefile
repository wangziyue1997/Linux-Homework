edit : zhan.o   duilie.o   shu.o
        cc -o edit zhan.o    duilie.o    shu.o
zhan.o  : zhan.c
    cc -c zhan.c
duilie.o  : duilie.c
   cc -c duilie.c
shu.o  : shu.c
  cc -c shu.c

test :a.out

a.out :test.c
  gcc test.c -L. -mylib
