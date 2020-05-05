default: sort

account.o:
	g++ -c account.cpp

sort: account.o
	g++ -o account main.cpp account.o

	test-integration-watch: sort
	clean: 

		rm -f account.o account