# Recursive wildcard from https://stackoverflow.com/a/18258352
#
# To find every .c file in src:
#   FILES := $(call rwildcard, , *.c)
# To find all the .c and .h files in src:
#   FILES := $(call rwildcard, src/, *.c *.h)
rwildcard=$(foreach d,$(wildcard $1*), \
    $(call rwildcard,$d/,$2) \
    $(filter $(subst *,%,$2),$d))

OBJS := $(call rwildcard, src/, *.c)
OBJS := $(OBJS:src/%.c=obj/%.o)

.PHONY: all

all: $(OBJS)
	@ echo "Done!"

obj/%.o: src/%.c | obj/%.mkdir
	@ echo "'Building' $@ from $<..."
	@ touch $@

%.mkdir:
	@ if [ ! -d $(@D) ]; then echo "Creating dir $(@D)..."; fi
	@ mkdir -p $(@D)
	@ touch $@

clean:
	@ echo "Cleaning everythin up..."
	@ rm -rf obj/
