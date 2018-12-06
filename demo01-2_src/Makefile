# $@ == The file name of the target of the rule
# $^ == The names of all the prerequisites, with spaces between them
demo01-2: demo01-2_src/data.o demo01-2_src/main.o
	gcc -o $@ $^

demo01-2_src/data.o: demo01_src/data.c
	gcc -o $@ -c $^

demo01-2_src/main.o: demo01_src/main.c
	gcc -o $@ -c $^
