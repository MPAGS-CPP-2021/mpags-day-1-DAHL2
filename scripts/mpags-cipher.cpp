// Cipher tool for MPAGs C++ course
/* Dennis Lindebaum
   08.10.21 */

#include <iostream>

int main()
{
    int a{1};
    a = a+a;
    std::cout << a << std::endl;

    double b{64.923};
    std::cout << b << std::endl;

    int c{b};
    std::cout << c << std::endl;
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