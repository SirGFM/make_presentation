CFLAGS := -I demo02_src/include
LDFLAGS := -L demo02_src
LDLIBS := -lcrypto -lclamp

all: demo02_src/main demo02_src/libclamp.so

demo02_src/main: demo02_src/main.o | demo02_src/libclamp.so

demo02_src/libclamp.so: demo02_src/libclamp.o
	$(CC) -shared $^ -o $@
