#include <fstream>
#include <iostream>
#include <valarray>

using namespace std;

int n, counter = 0;
valarray<int> v1(3), v2(3);

void shift(valarray<int> &v, int n) {
  v[0] = v[1];
  v[1] = v[2];
  v[2] = n;
}

int main(int argc, char **argv) {
  auto input = ifstream("input_1.txt");
  input >> v1[0] >> v1[1] >> v1[2];
  v2[1] = v1[1];
  v2[2] = v1[2];
  while (1) {
    input >> n;
    if (input.eof())
      break;
    shift(v2, n);
    if (v2.sum() > v1.sum())
      counter++;
    v1 = v2;
  }
  cout << counter << endl;
}
