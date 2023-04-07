USER_DIR=.
USER_SRC_DIR=./src

CPPFLAGS += 
CXXFLAGS += -g -Wall -Wextra -pthread

FILES = romanConverter.out

all : $(FILES)

clean :
	rm -f $(FILES) *.o

main.o : $(USER_SRC_DIR)/main.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_SRC_DIR)/main.cpp

convert-to-roman.o : $(USER_SRC_DIR)/convert-to-roman.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_SRC_DIR)/convert-to-roman.cpp

romanConverter.out : main.o convert-to-roman.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@