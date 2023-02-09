#include "Shape.cpp"
#include <cmath>

#define LOG(x) std::cout << x << std::endl;

class Circle : public Shape {
private:
  double radius;

public:
  Circle() {
    //
    this->radius = 1.0;
  }

  Circle(double radiusValue) {
    //
    this->radius = radiusValue;
  }

  // Getters
  double GetRadius() {
    //
    return this->radius;
  }

  // Setters
  void SetRadius(double radiusValue) {
    //
    this->radius = radiusValue;
  }

  // Methods

  double GetArea() {
    //
    return this->radius * 3.14;
  }

  double GetPerimeter() {
    //
    return 2 * 3.14 * (this->radius);
  }
};

int main() {
  Circle baseCircle;

  LOG(baseCircle.GetRadius());
}
