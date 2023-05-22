#include <iostream>

// Anything starting with a:
// #
// is  a preprocessor statement, and gets processed right before the source file
// itself.
//
// #include statements adds libraries or other files located in the file we
// include
//
// Other examples like #define, which are macros also gets proprocessed

// The main function is the entrypoint, that every project has
int main() {
  //<< is just an overloaded function, easier way to picture it is like this:

  // std::cout.print("Hello") print(std::endl);
  std::cout << "Hello" << std::endl;
  return 0;
}
