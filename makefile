USER_DIR=.

CPPFLAGS += 
CXXFLAGS += -g -Wall -Wextra -pthread

FILES = romanConverter

all : $(FILES)

clean :
	rm -f $(FILES) *.o

main.o : $(USER_DIR)/main.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_DIR)/main.cpp

romanConverter : main.o convert-to-roman.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@