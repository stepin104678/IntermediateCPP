SRC = employee_test.cpp\
	employee.cpp\
	engineer.cpp\
	manager.cpp\
	trainee.cpp

INC = employee.h\
	engineer.h\
	manager.h\
	trainee.h
		

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out