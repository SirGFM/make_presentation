
ifneq (, $(findstring linux, $(MAKECMDGOALS)))
    include Makefile.linux
else ifneq (, $(findstring win, $(MAKECMDGOALS)))
    include Makefile.win
else
    $(error Unknown target!)
endif

.PHONY: all linux win printcc

all:

linux: printcc
win: printcc

printcc:
	@ echo "Building with CC=$(CC)"

# For extra cross-compiling points, you could do the following:
#
# TARGET := bin/$(OS)/main$(EXT)
#
# linux := bin/linux/main
# win := bin/win/main.exe
#
# bin/$(OS)/main$(EXT): $(OBJS) | $(TARGET).mkdir
# 	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@
