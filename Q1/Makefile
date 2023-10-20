libcalculation.a : ./lib/add.o ./lib/minus.o ./lib/multi.o ./lib/divi.o
	  ar rcs ./lib/libcalculation.a ./lib/add.o ./lib/minus.o ./lib/multi.o ./lib/divi.o
add.o : add.c
	  gcc -c ./lib/add.c
minus.o : minus.c
	  gcc -c ./lib/minus.c
multi.o : multi.c
	  gcc -c ./lib/multi.c
divi.o : divi.c
	  gcc -c ./lib/divi.c
clean :
	  fm -f ./lib/libcalculation.a ./lib/add.o ./lib/minus.o ./lib/multi.o ./lib/divi.o
