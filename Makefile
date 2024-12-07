.PHONY: clean all

test: fs16.cpp fs16.hpp example.cpp
	g++ fs16.cpp -o build/fs16.o -c
	g++ build/fs16.o example.cpp -o build/example

build: fs16.cpp fs16.hpp
	g++ fs16.cpp -o build/fs16.o -c

clean:
	rm -rf build/*
