SRC = CANFrame.cpp\
	test_CANFrame.cpp

INC = CANFrame.h\

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out