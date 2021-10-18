#include <iostream>

using namespace std;

int main() {
  double z;
  cout << "Z: "; cin >> z;

  if (!cin.good()) { // If user entered value other than numbers
    cout << "Error: you've entered incorrect value into 'z' variable — 'z' must be a number. Exiting the program...";
    return 1;
  }

  double x;
  if (z < 1) {
    x = pow(z, 2) + 1;
  } else {
    x = z - 1;
  }
  
  cout << x;
  
  return 0;
}
