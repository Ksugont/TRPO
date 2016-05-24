function: ./obj/main.o ./obj/equation.o ./obj/discriminant.o 
	gcc -o function ./obj/main.o ./obj/discriminant.o ./obj/equation.o -lm

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o
	
./obj/equation.o: ./src/equation.c
	gcc -c ./src/equation.c -o ./obj/equation.o 

./obj/discriminant.o: ./src/discrimimant.c
	gcc -c ./src/discrimimant.c -o ./obj/discriminant.o
