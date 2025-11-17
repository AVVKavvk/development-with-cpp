
add.o:add.cpp
	g++ -c $^

main.o:main.cpp
	g++ -c $^

main:main.o add.o
	g++ $^ -o $@

.PHONY: clean

clean:
	rm main *.o