#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **) {
  auto input = ifstream("input_1.txt");

  int n, depth = 0, dist = 0, aim = 0;
  string command;

  while (true) {
    input >> command >> n;
    if (input.eof())
      break;
    if (command == "forward") {
      depth += aim * n;
      dist += n;
    } else if (command == "down")
      aim += n;
    else if (command == "up")
      aim -= n;
    else
      cout << "ERROR PARSING " << command << endl;
  }
  cout << depth * dist << endl;
  return 0;
}
