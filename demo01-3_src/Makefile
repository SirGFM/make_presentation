# This does not work, unless there's an explicit rule
demo01-3: main.o data.o
#	gcc -o $@ $^

# However, this works normally
main: main.o data.o

clean:
	rm -f *.o demo01-3 main
