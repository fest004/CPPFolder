#include <iostream>
#include <string>

void StringExample() {
  std ::string name;
  std ::cout << "What is your name? " << std ::endl;
  std ::cin >> name;
  std ::cout << "Nice to meet you " << name << "!" << std ::endl;
}

int main() {
  int age, friend_age;
  std::cout << "How old are you? And how old is your friend? " << std ::endl;
  std::cin >> age >> friend_age;
  std::cout << "You are " << age << " years old, and your friend is  "
            << friend_age << " years old! " << std ::endl;

  StringExample();
  return 0;
}
