TestRule: main.cpp
	g++ main.cpp Shape.h Shape.cpp Point.h Point.cpp -o main.exe -static-libgcc -static-libstdc++