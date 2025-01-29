run: main.o DuplicateNumbersInAnArray.o PrimeNumbersUpToN.o TwoSum.o
	clang++ -std=c++17 main.o TwoSum.o DuplicateNumbersInAnArray.o PrimeNumbersUpToN.o -o run

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp

DuplicateNumbersInAnArray.o: DuplicateNumbersInAnArray.cpp 
	clang++ -std=c++17 -c DuplicateNumbersInAnArray.cpp

PrimeNumbersUpToN.o: PrimeNumbersUpToN.cpp
	clang++ -std=c++17 -c PrimeNumbersUpToN.cpp

TwoSum.o: TwoSum.cpp
	clang++ -std=c++17 -c TwoSum.cpp

clean: 
	rm *.o run

