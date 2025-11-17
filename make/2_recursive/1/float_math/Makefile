
libfloatmath.so: multiply.o add.o
	g++ -shared $^ -o $@

add.o:add.cpp
	g++ -c -fpic $^

multiply.o:multiply.cpp
	g++ -c -fpic $^

.PHONY: clean

clean:
	rm -rf *.o libfloatmath.so