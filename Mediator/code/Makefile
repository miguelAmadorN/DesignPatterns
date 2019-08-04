PROJECT=Mediator
CFLAGS=-Wall
LFLAGS=
CC=g++

all: $(PROJECT)

%.o: %.cpp
	$(CC) -c $< $(CFLAGS) 

$(PROJECT) : $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	$(CC) $^ -o $@ $(LFLAGS) 

.PHONY: clean

clean:
	rm -f *.o $(PROJECT)
	


