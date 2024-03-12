// a c++ program consists of many separately developed parts, such as functions, user-defined types, class hierarchies and templates
// the key to managing them is to clearly define the interactions among those parts
// the most important step is to distinguish between the interface to a part and its implementation
// c++ represents interfaces by declarations; a declaration specifies all that's needed to use a function or a type
// there can be many declarations for an entity, such as a function, but only one definition

// separate compilation:
//     header files: place declarations in separate files, textually #include a .h file when needed
//     module files: define and compile module files, import them where needed

// the code in main.cpp and Class.cpp shares the Class interface information presented in Class.h, but the two files
// are otherwise independent and can be separately compiled

// the differences between headers and modules are not just syntactic:
//   - a module is compiled once only (rather that in each translation unit in which it is used)
//   - two modules can be imported in either order without changing their meaning
//   - import is not transitive

// when defining a module, we do not have to separate declarations and definitions into separate files
// the compiler separates a module's interface, specified by the export specifiers, from its implementation details

// namespaces: mechanism for expressing that some declarations belong together and that their names shouldn't clash with other names
// by putting main functions into to namespace My_code, I make sure that my names do not conflict with the standard-library names in namespace std
// a using-declaration makes a name from a namespace usable as if it were declared in the scope in which it appears

// the primary and recommended way of passing information from one part of a program to another is through a function call

// argument passing: first consider how to get values into a function; but default we copy ("pass-by-value") and if we
// want to refer to an object in the caller's environment, we use a reference ("pass-by-reference" (&))
// if we want to pass by reference for performance reasons but don't need to modify the argument, we pass-by-const-reference (const + &)

// value return, return type deduction
// suffix return type: auto next_elem() -> Elem*;
// we can elegantly return many values using struct or class, structured binding