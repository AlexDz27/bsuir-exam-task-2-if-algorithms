#include <iostream>

using namespace std;

int main() {
  /**** Define 'x' depending on 'z' ****/
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

  cout << x << endl;

  /**** Define function φ(x) ****/
  int choice;
  double evaluatedFunction;
  cout << "Choose one of the three functions φ(x) — 2 * x, pow(x, 2) or x / 3. To choose, type in '1', '2' or '3' respectively: " << endl;
  cin >> choice;
  switch (choice) {
    case 1:
      evaluatedFunction = 2 * x;
      break;

    case 2:
      evaluatedFunction = pow(x, 2);
      break;

    case 3:
      evaluatedFunction = x / 3;
      break;

    default:
      cout << "Error: you've entered values that are not 1, 2 or 3. Exiting the program...";
      return 1;
  }

  /**** Define 'd', 'c' ****/
  double d;
  double c;
  cout << "Type in value of variable 'd': "; cin >> d;
  cout << "Type in value of variable 'c': "; cin >> c;

  if (!cin.good()) { // If user entered value other than numbers
    cout << "Error: you've entered invalid values into one of the variables. All variables must be numbers. Exiting the program...";
    return 1;
  }

  /**** Calculate the result ****/
  double result;

  /*** First operand ***/
  /** Calculate sin in 3rd power * x **/
  double sinResult = (3 * sin(x) - sin(3 * x)) / 4;
  /** [END] Calculate sin in 3rd power * x **/

  double firstOperand = d * evaluatedFunction * exp(sinResult);

  /*** Second operand ***/
  double secondOperand = c * log(x + 1);

  /*** Calculate the result ***/
  result = (firstOperand + secondOperand) / (sqrt(x));

  cout << result;
  
  return 0;
}
