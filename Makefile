all: compile

compile:
  @echo "compiling"
  @g++ main.cpp -o main
  @echo "done!"
