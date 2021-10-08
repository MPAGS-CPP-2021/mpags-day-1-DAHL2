// Cipher tool for MPAGs C++ course
/* Dennis Lindebaum
   08.10.21 */

#include <iostream>
#include <string>

int main()
{
    const double pi {3.14159265359};
    const int int1 {3}, int2 {4};
    std::string str {"This is a string!"};
    
    std::cout << pi*int1 << std::endl; // double

    // std::endl is effectively forcing a printout, which only need be done at the end of the block,
    // however, this could mean that in case of an error, NONE of the block is printed out, rather
    // rather than all bits before the error being printed
    std::cout << "Double / int: " << pi/int1 << "\n"; // double
    std::cout << "Int / double: " << int2/pi << "\n"; // double
    std::cout << "Int / int (3/4): " << int1/int2 << "\n"; // int
    std::cout << "Int / int (4/3): " << int2/int1 << std::endl; // int

    char str_char {str[5]}; // N.B. First character of string is [0]
    std::cout << str_char << std::endl;

    return 0;
}

/* NOTES

Type: Like a class
Object: Like and instance of a class
Value: Data held by an instance
Variable: Label given to the data

Declaring variable:
<object_type> <variable name} {<initialisation_parameters>}
Initialisation parameters type dependent
ie: int a{1}
-> integer variable named 'a' with value 1

Avoid creating vairables with no initialisation
*/