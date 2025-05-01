EXE = test
SRC = src/challange.c test/challange_test.c

build: $(SRC)
	gcc -Isrc -o ./build/$(EXE) $(SRC)

test: build
	./build/$(EXE)
