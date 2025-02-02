all: test test1 test2

test: test.cpp
	g++ test.cpp -Wall -o test
test1: test1.cpp
	g++ test1.cpp -Wall -o test1
test2: test2.cpp
	g++ test2.cpp -Wall -o test2

clean:
	rm -f test test1 test2
