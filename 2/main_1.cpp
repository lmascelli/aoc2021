#include <fstream>
#include <iostream>
using namespace std;

int n, depth = 0, dist = 0;
string command;

int main(int argc, char **) {
  auto input = ifstream("input_1.txt");

  while (true) {
    input >> command >> n;
    if (input.eof())
      break;
    if (command == "forward")
      dist += n;
    else if (command == "down")
      depth += n;
    else if (command == "up")
      depth -= n;
    else
      cout << "ERROR PARSING " << command << endl;
  }
  cout << depth * dist << endl;
  return 0;
}
