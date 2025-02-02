run: main.o SpiralMatrix.o NumbersSmallerThanTheCurrentNumber.o AllMissingNumbers.o DuplicateNumbersInAnArray.o MissingNumber.o PrimeNumbersUpToN.o TwoSum.o
	clang++ -std=c++17 main.o SpiralMatrix.o NumbersSmallerThanTheCurrentNumber.o AllMissingNumbers.o TwoSum.o MissingNumber.o DuplicateNumbersInAnArray.o PrimeNumbersUpToN.o -o run

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp

DuplicateNumbersInAnArray.o: DuplicateNumbersInAnArray.cpp 
	clang++ -std=c++17 -c DuplicateNumbersInAnArray.cpp

PrimeNumbersUpToN.o: PrimeNumbersUpToN.cpp
	clang++ -std=c++17 -c PrimeNumbersUpToN.cpp

TwoSum.o: TwoSum.cpp
	clang++ -std=c++17 -c TwoSum.cpp

MissingNumber.o: MissingNumber.cpp
	clang++ -std=c++17 -c MissingNumber.cpp

AllMissingNumbers.o: AllMissingNumbers.cpp
	clang++ -std=c++17 -c AllMissingNumbers.cpp

NumbersSmallerThanTheCurrentNumber.o: NumbersSmallerThanTheCurrentNumber.cpp
	clang++ -std=c++17 -c NumbersSmallerThanTheCurrentNumber.cpp

SpiralMatrix.o: SpiralMatrix.cpp
	clang++ -std=c++17 -c SpiralMatrix.cpp

clean: 
	rm *.o run

