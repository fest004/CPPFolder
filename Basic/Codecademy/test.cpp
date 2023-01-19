#include <iostream>
#include <string>
namespace std {

string DefangIpAdress();

string DefangIpAdress(std ::string IPadress) {
  string ans = "";
  for (auto i : IPadress) {
    if (IPadress[i] == '.') {
      ans += IPadress[i];
    } else {
      ans += IPadress[i];
    }
  }
  return ans;
}

int main() {
  string stringIP = "192.168.1.1";
  cout << DefangIpAdress(stringIP) << endl;
  cout << "Test" << endl;
  return 0;
}

} // namespace std
