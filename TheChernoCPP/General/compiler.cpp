// Compiler:
//
// To convert a cpp file, which is really just a text file it contains to
// critical operations, compiling and linking. These are the notes on compiling
// and how the C++ compiler works

// The only thing the compiler needs to do is take the text file (.cpp file)
// and make into into an intermediate file (or object file), and then let the
// linker do its linking
//
// The compiler does several things:
//
// - Preprocesses the preprocess stuff (#)
// - Parsing the "english" c++ language aka our own code
// - Converts our code into "instant data" or instructions
// - Generates code that will be the machine code our CPU executes
//
// What is the preprocessing stage:
//  WIll go through all preprocessor statements and evaluate them. Common
//  statements are
//   #include // Will copy the file that is included at the location of the
//   statement (often the top) #define #if #ifdef #pragma statements
//
//
// Linker:
//  Primary function of linking is to find where each
//  symbol and function is and link them together
//
//  Linking is also responsible for finding the entrypoint,
//  or the main() function. That is why you can compile a
//  cpp project with no main function, but not build, because
//  when building the Linker does its thing.
//
//
