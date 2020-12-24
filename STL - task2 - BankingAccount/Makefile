SRC = account.cpp\
banking.cpp\
test.cpp\

INC = account.h\
banking.h\

run: $(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out
	./all.out
	rm -f *.out
