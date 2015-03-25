#Make File

CC        = g++
CCFLAGS   = -std=c++11  -I./src/lc -L./src/lc -lcairo -llcviewernoqt	
SOURCES   = src/main.cc src/arc.cc src/line.cc src/circle.cc
EXEC      = build/tcad

all:
	$(CC) $(SOURCES) -o $(EXEC) $(CCFLAGS) $(pkg)

clean:
	rm -f ./build/tcad

install:
	cp build/tcad /usr/bin
	cp src/lc/liblcviewernoqt.so /usr/lib/x86_64-linux-gnu
