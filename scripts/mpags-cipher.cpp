// Cipher tool for MPAGs C++ course
/* Dennis Lindebaum
   08.10.21 */

#include <iostream>
#include <string>

int main()
{
    // Blank string to store message
    std::string msg {""};

    std::cout <<
        "Please type in your message and use 'ctrl+D' to confirm it.\n"
        "Please note that special characters (including ' ') are not counted,\n"
        "and numbers are converted to words on a per digit basis.\n"
        << std::endl;

    // Take each letter from user input and in each case:
    char input_char {'x'};
    while (std::cin >> input_char)
    {
        // Convert to upper case
        // ASCII has all lower case letter 32 above upper case
        input_char -= 32 * (input_char>=97 && input_char<=122);

        if (input_char>=48 && input_char<=57)
        {
            // Only need to switch if input is a number
            switch(input_char)
            {
                case '0':
                    msg += "ZERO";
                    break;
                case '1':
                    msg += "ONE";
                    break;
                case '2':
                    msg += "TWO";
                    break;
                case '3':
                    msg += "THREE";
                    break;
                case '4':
                    msg += "FOUR";
                    break;
                case '5':
                    msg += "FIVE";
                    break;
                case '6':
                    msg += "SIX";
                    break;
                case '7':
                    msg += "SEVEN";
                    break;
                case '8':
                    msg += "EIGHT";
                    break;
                case '9':
                    msg += "NINE";
                    break;
            }
            // Need extra continue, since will not reach else
            // as this is only run if the character is a number
            continue;
        }
        else if (input_char<65 || input_char>90) {
            continue;
        }

        msg += input_char;
    }

    std::cout << msg << std::endl;
    
    
    // - Ignore any other (non-alpha) characters
    // - In each case, add result to a string variable
    // print out the new string

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