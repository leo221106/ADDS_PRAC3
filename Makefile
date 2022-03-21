COMPILER = g++ -w
OBJECTS=Computer.o Human.o main.o Referee.o Avalanche.o Bureaucrat.o Crescendo.o FistFullODollars.o PaperDoll.o Player.o RandomComputer.o Toolbox.o Tournament.o 
TARGET=main

$(TARGET): $(OBJECTS)
	$(COMPILER) -o $@ $^ 
$(OBJECTS):%.o:%.cpp
	$(COMPILER) -o $@ -c $<

.PHONY: all clean

all: main

clean: 
	rm $(wildcard *.o) main