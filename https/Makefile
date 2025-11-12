#Variables

G++ = g++
CFLAGS = -Wall -Wextra -g3
TARGET = main
OBJS = main.o user.o
LDFLAGS = -lssl -lcrypto

all: $(TARGET)

$(TARGET): $(OBJS)
	$(G++) ${CFLAGS} -o $(TARGET) $(OBJS) $(LDFLAGS)
	@echo "Build complete"

main.o: main.cpp user.h
	$(G++) ${CFLAGS} -c main.cpp

user.o: user.cpp user.h
	$(G++) ${CFLAGS} -c user.cpp

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "Cleaned"

docker:
	docker run -it -v /home/vipin/cpp-adv-learning:/workspace ubuntu:latest bash

.PHONY: all clean