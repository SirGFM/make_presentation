SRC := src/main.c src/subdir/helper.c
OBJS := $(SRC:src/%.c=obj/%.o)

bin/main: $(OBJS) | bin/.mkdir
	$(CC) $^ -o $@

obj/%.o: src/%.c | obj/%.mkdir
	$(CC) -c $< -o $@

%.mkdir:
	mkdir -p $(@D)
	touch $@

clean:
	rm -rf bin/ obj/
