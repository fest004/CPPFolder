#include <float.h>
#include <iostream>

using namespace std;

int main() {
  float a;       // Trust for 6 digits
  double b;      // Trust for 15 digits
  long double c; // Trust for 18 digits

  // Outputs:

  cout << FLT_DIG << endl;  // 6
  cout << DBL_DIG << endl;  // 15
  cout << LDBL_DIG << endl; // 18

  return 0;
}
