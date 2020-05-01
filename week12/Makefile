default: sort

sorter.o:
	g++ -c sorter.cpp

sort: sorter.o
	g++ -o sorter main.cpp sorter.o

test-integration-watch: sort

clean:
	rm -f sorter.o sorter
