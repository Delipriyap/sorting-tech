all: main
	@echo "Build Done"
main: main.o Bubble.o Insertion.o Selection.o Quick.o Merge.o
	gcc  main.o Bubble.o Insertion.o Selection.o Quick.o Merge.o -o main
main.o: main.c
	gcc -c main.c -o main.o
Bubble.o: Bubble.c
	gcc -c Bubble.c -o Bubble.o
Insertion.o: Insertion.c
	gcc -c Insertion.c -o Insertion.o
Selection.o: Selection.c
	gcc -c Selection.c -o Selection.o
Quick.o: Quick.c
	gcc -c Quick.c -o Quick.o
Merge.o: Merge.c
	gcc -c Merge.c -o Merge.o

clean: 
	rm -rf *.o
