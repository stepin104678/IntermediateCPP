SRC = customer.cpp\
	customer_test.cpp\
	postpaid.cpp\
	prepaid.cpp

INC = customer.h\
	postpaid.h\
	prepaid.h
		

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out