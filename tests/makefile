GTEST_DIR=../googletest/googletest

SRC_DIR=../src
USER_DIR=.

CPPFLAGS += -isystem $(GTEST_DIR)/include -isystem $(SRC_DIR)
CXXFLAGS += -g -Wall -Wextra -pthread

TESTS = test_suite.out

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h


all : $(TESTS)

clean :
	rm -f $(TESTS) gtest.a gtest_main.a *.o


GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

gtest-all.o : $(GTEST_SRCS_)
	$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o : $(GTEST_SRCS_)
	$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	$(AR) $(ARFLAGS) $@ $^

convert-to-roman.o : $(SRC_DIR)/convert-to-roman.cpp $(GTEST_HEADERS) 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c  $(SRC_DIR)/convert-to-roman.cpp

test_suite.o : $(USER_DIR)/test_suite.cpp $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_DIR)/test_suite.cpp

test_suite.out : test_suite.o gtest_main.a convert-to-roman.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@