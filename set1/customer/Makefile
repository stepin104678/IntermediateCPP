SRC = customer.cpp\
	test_customer.cpp

INC = customer.h\

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out