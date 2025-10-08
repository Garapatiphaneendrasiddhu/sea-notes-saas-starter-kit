#include <iostream>

using namespace std;

int decimalToBinary(int decimal) {
  int x = 0;
  int power = 1;

  while (x > 0) {
    x  += (x % 2) * power;
    x /= 2;
    power *= 10;
  }

  return x;
}

int main() {
  int decimal;

  cout << "Enter a decimal number: ";
  cin >> decimal;

  int x = decimalToBinary(decimal);

  cout << decimal << " in binary is: " << x << endl;

  return 0;
}
