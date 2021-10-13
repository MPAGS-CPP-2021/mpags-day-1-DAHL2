// Cipher tool for MPAGs C++ course
/* Dennis Lindebaum
   08.10.21 */

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs {argv, argv+argc};

    // Is there a nice way to avoid defining i.e. in_path, here, since in_path
    // isn't necessarily required?
    bool help_flag {false};
    bool i_flag {false};
    std::string in_path {""};
    bool o_flag {false};
    std::string out_path {""};

    // Prints out the command line arguments supplied
    std::string arg {""};
    for (int i{0}; i < argc; i++)
    {
        arg = cmdLineArgs[i];

        // Check if help is called
        help_flag = (arg == "-h") || (arg == "--help");

        // Check if version is called
        if (arg == "--version") {std::cout << "mpags-cipher 0.1.0" << std::endl; return 0;}

        // Check if input file is supplied
        if (arg == "-i")
        {
            i_flag = true;
            in_path = cmdLineArgs[i+1];
            i++;
        }

        // Check if output file is supplied
        if (arg == "-o")
        {
            o_flag = true;
            out_path = cmdLineArgs[i+1];
            i++;
        }
    }

    if (help_flag)
    {
        std::cout <<
            "Usage: mpaggs-cipher.cpp [options]\n"
            "Options:\n"
            "  --version    Display the version information\n"
            "  --help       Display this information.\n"
            "  -h           Display this information.\n"
            "  -i <file>    Searches <file> for input text.\n"
            "               If this is not specified, the program\n"
            "               is run interactively.\n"
            "  -o <file>    Place the output into <file>.\n"
            "Further options to be populated as they are created.\n"
            << std::endl;
        return 0;
    }

    if (i_flag)
    {
        std::cout << "Input file was given: " << in_path << std::endl;
    }

    if (o_flag)
    {
        std::cout << "Output file was given: " << out_path << std::endl;
    }


    // Blank string to store message
    std::string msg {""};

    if (!i_flag)
    {
        std::cout <<
        "Please type in your message and use enter then ctrl+D to confirm it.\n"
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
                        msg += "ZERO"; break;
                    case '1':
                        msg += "ONE"; break;
                    case '2':
                        msg += "TWO"; break;
                    case '3':
                        msg += "THREE"; break;
                    case '4':
                        msg += "FOUR"; break;
                    case '5':
                        msg += "FIVE"; break;
                    case '6':
                        msg += "SIX"; break;
                    case '7':
                        msg += "SEVEN";
                        break;
                    case '8':
                        msg += "EIGHT"; break;
                    case '9':
                        msg += "NINE"; break;
                }
                // Need extra continue, since will not reach else
                // as this is only run if the character is a number
                continue;
            }
            else if (input_char<65 || input_char>90) {
                // Exit without appending the message if not and upper case character
                continue;
            }

            msg += input_char;
        }
    }

    std::cout << msg << std::endl;

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