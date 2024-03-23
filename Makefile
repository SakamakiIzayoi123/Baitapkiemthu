all:
	g++ .\main.cpp -o PrimeNumber
	.\PrimeNumber.exe
testing:
	g++ .\testing.cpp .\catch_amalgamated.cpp -o test
	.\test.exe