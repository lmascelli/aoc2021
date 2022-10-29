#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  auto input = ifstream("input_1.txt");
  int num_p, num_n, count = 0;
  input >> num_p;
  while(not input.eof()) {
    input >> num_n;
    if (num_n > num_p) count++;
    num_p = num_n;
  }
  cout << count << endl;
  return 0;
}
