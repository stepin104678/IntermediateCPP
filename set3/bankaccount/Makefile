SRC = bank.cpp\
	test_bank.cpp\
	CreditAccount.cpp\
	SavingsAccount.cpp

INC = CreditAccount.h\
	SavingsAccount.h\
	bank.h
		

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out