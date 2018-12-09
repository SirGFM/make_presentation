# This does not work, unless there's an explicit rule
demo01-3: demo01-3_src/main.o demo01-3_src/data.o
#	gcc -o $@ $^

# However, this works normally
demo01-3_src/main: demo01-3_src/main.o demo01-3_src/data.o
