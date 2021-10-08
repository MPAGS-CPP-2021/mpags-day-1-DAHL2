// Cipher tool for MPAGs C++ course
/* Dennis Lindebaum
   08.10.21 */

#include <iostream>
#include <string>

int main()
{
    const double pi {3.14159265359};
    std::cout << pi << std::endl;

    int a{3};
    /* compiler returns error:
       "assignment of read-only variable ‘a’"
       if a is set as const*/
    a = a^a;

    std::string str {"This is a string!"};
    std::cout << str << "\n";

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