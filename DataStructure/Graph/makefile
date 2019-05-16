OBJ = main.o queue.o graph.o
TARGET = main.out
${TARGET}:${OBJ}
	gcc -o ${TARGET} ${OBJ}
main.o:main.c	
	gcc -c main.c	
queue.o:queue.c
	gcc -c queue.c	
graph.o:graph.c	
	gcc -c graph.c	
clean:
	rm -rf ${TARGET} 
