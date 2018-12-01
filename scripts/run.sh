#!/bin/bash
MAIN='src/main.c'
TEST='tests/main.c'
POINTERS='impls/pointers.c' 

gcc -o test1 $TEST $POINTERS -I modules 
./test1

if [ $? -lt 1 ]
then
	gcc -o app $MAIN $POINTERS -I modules 
	./app
	rm app && rm test1
	echo "Completed Successfully"
else
	rm test1
	echo "Run Failure"
fi
