CXXFLAGS += -Wall -Wextra -Weffc+ -std=c++14 -MMD


top-vect main.cpp
	g++ -o $@ $^

clean:
	rm -rf *.o *.d top-vect
