#include <iostream>
#include <string>
#include <vector>

#define LOG(x) std::cout << x << std::endl;

class Shape {
private:
  std::string color;
  bool filled;

  Shape() {
    this->color = "red";
    this->filled = true;
  }

  Shape(std::string colorValue, bool filledValue) {
    this->color = colorValue;
    this->filled = filledValue;
  }

public:
  std::string GetColor() {
    //
    return this->color;
  }

  bool GetFilled() {
    //
    return this->filled;
  }

  void SetColor(std::string colorValue) {
    //
    this->color = colorValue;
  }

  void SetFilled(bool filledValue) {
    //
    this->filled = filledValue;
  }
};
