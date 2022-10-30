#include <bitset>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **) {
  auto input = ifstream("input_1.txt");

  bitset<12> t;
  int i, tot = 0, b[12]{0};

  while (true) {
    input >> t;
    if (input.eof())
      break;
    for (i = 0; i < 12; i++)
      if (t[i])
        b[i]++;
    tot++;
  }
  tot /= 2;

  bitset<12> ret{0};
  for (i = 0; i < 12; i++) {
    if (b[i] > tot)
      ret[i] = 1;
  }
  auto gamma = ret.to_ulong(), eps = ret.flip().to_ulong();
  cout << gamma * eps << endl;
  return 0;
}
