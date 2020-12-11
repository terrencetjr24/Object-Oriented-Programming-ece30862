#makefile

TARGET = hw5a
GPP = g++

SRCS = *.cpp

OBJS = $(SRCS:%.cpp=%.o)

$(TARGET): $(OBJS)
	$(GPP) $(OBJS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

.cpp.o:
	$(GPP) -c $*.cpp

clean:
	rm -f $(OBJS) $(TARGET)
