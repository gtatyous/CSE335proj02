EXE = out
SOURCES = main.cpp drink.cpp barista.cpp orderlist.cpp
OBJECTS := $(SOURCES:%.cpp=%.o)
CXXFLAGS = -Wall -std=c++11
CXX = g++

$(EXE) : $(OBJECTS)
	$(CXX) &^ -o $@
