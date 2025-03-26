#Brandtools C++
DEFAULT_GOAL := all
CXX = g++
CXXFLAGS = -static

SOURCE = src
HEADER = $(wildcard $(SOURCE)/*.hpp)
BIN = build

all: brandkurven brandkurven_writer kennwerte_writer
	rm -r $(BIN)
	mkdir $(BIN)
	mv $(wildcard *.exe) $(BIN)

brandkurven brandkurven_writer kennwerte_writer: $(wildcard $(SOURCE)/*.cpp)
	$(CXX) $(CXXFLAGS) -o $@.exe $(SOURCE)/$@.cpp $(HEADER)


clean:
	rm -r $(wildcard $(BIN)/*.exe)

