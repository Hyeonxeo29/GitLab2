libcalculation.a : add.o minus.o multi.o divi.o
	ar rcs libcalculation.a add.o minus.o multi.o divi.o
add.o : add.c
	gcc -c add.c
minus.o : minus.c
	gcc -c minus.c
multi.o : multi.c
	gcc -c multi.c
divi.o : divi.c
	gcc -c divi.c
clean : 
	fm -f libcalculation.a add.o minus.o multi.o divi.o

