CFLAGS := $(CFLAGS) -I include
LDFLAGS := $(LDFLAGS) -L ./
LDLIBS := $(LDLIBS) -lcrypto -lclamp

all: main libclamp.so

main: main.o | libclamp.so

libclamp.so: libclamp.o
	$(CC) -shared $^ -o $@

clean:
	rm -f *.o *.so main
