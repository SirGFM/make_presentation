# $@ == The file name of the target of the rule
# $^ == The names of all the prerequisites, with spaces between them
demo01-2: data.o main.o
	gcc -o $@ $^

data.o: data.c
	gcc -o $@ -c $^

main.o: main.c
	gcc -o $@ -c $^

clean:
	rm -f *.o demo01-2
