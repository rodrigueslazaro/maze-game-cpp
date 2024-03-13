build:
	g++ -Wall ./src/*.cpp -Ilib -o ./bin/MazeGame
run:
	./bin/MazeGame
clean:
	rm bin/MazeGame