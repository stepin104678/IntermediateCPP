SRC = shape_test.cpp\
	shape.cpp

INC = circle.h\
	polygon.h\
	rectangle.h\
	shape.h\
	triangle.h
		

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out