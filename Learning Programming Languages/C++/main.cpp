#include <iostream> // Imports functions for input and output like printing different strings
//#include <vector> // for typedef

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

namespace first{
    int x2 = 1;
}
namespace second{
    int x2 = 2;
}

int main() {
    // 33:45 C++ Full course, 
    // using namespace std;
    // Introduction
        // This a comment
        /*
            This
            is
            a
            multi-line
            comment
        */

        std::cout << "I like pizza!" << std::endl; // Prints I like Pizza, endl stands for end line to move cursor to a new line
        std::cout << "It's really good!" << '\n'; // \n is another way to end a line

    // Variables
        int x;// declaration of a variable with the int or integer type with the name of x
        x = 5;// assignment

        std::cout << x << std::endl;

        int x1 = 5;// declaration + assignment
        int y = 6;
        int sum = x + y;// operations in variables can happen

        std::cout << x1 << std::endl;
        std::cout << y << std::endl;
        std::cout << sum << std::endl;

        // Data types

            //integer (whole number)
            int age = 21;
            int year = 2023;
            int day = 7.5;

            std::cout << day << std::endl; // It removes the 0.5

            //double (number including decimal)
            double price = 10.99;
            double gpa = 2.5;
            double temperature = 25.1;

            std::cout << price << std::endl;

            // single character
            char grade = 'A';
            char inital = 'B';
            char currency = '$';

            std::cout << inital << std::endl;

            // boolean (true or false)
            bool student = false;
            bool power = true;
            bool forSale = false;

            // string (objects that represents a sequence of text)
            std::string name = "Logan";
            std::string days = "Friday";
            std::string food = "pizza";
            std::string address = "123 Fake St.";

            std::cout << name << std::endl;
            // std::cout << "Hello" << name << std::endl; // NOTE: This doesn't includ a space and outputs HelloLogan
            std::cout << "Hello " << name << std::endl;
            std::cout << "You are " << age << " years old" << std::endl;
    // Const keyword
        // The const keyword specifies that a variable's value is constant
        // tells the compiler to prevent anything from modifying it
        // (read-only)
        const double PI = 3.14159;
        //pi = 420.69; // changing value will give error if uncommented
        double radius = 10;
        double circumference = 2 * PI * radius;

        std::cout << circumference << "cm" << std::endl;
        const int LIGHT_SPEED = 299792458;
        const int WIDTH = 1920;
        const int HEIGHT = 1080;
    // Namespace keyword
        // Namespace = provides a solution for preventing name conflicts
        //             in large projects. Each entity needs a unique name.
        //             A namespace allows for identically named entites
        //             as long as the namespaces are different.
        //using namespace first;    uncomment and remove declaration below and 1 will be displayed because when you use the keywords 'using namespace __INSERT_NAMESPACE_NAME' the default variable will go through that namespace first
        int x2 = 0;
        //int x = 1; // throws error because x is already defined but at the top of the file you can write
        // NOTE LOOK AT THE TOP FOR AN EXAMPLE FOR NAMESPACE
        std::cout << x2 << std::endl; // will display local entity in this case 0 
        std::cout << first::x2 << std::endl; // uses first name space
        std::cout << second::x2 << std::endl; // uses second namespace
        // Look at the top of the main() function to see the commented line 'using namespace std;', Then you can use a function like std::cout with just cout, But this is also not as great because std has hundreds of functions even one called data so to do the same thing you can just do 'using std::cout;'
    // Typedef keyword
        // typedef = reserved keyword used to create a additional name
        //           (alias) for another data type.
        //           New identifier for an existing type
        //           Helps  with readability and reduces typos

        // Look at the top commented lines ending with typedef for examples
        // pairlist_t pairlist
        text_t firstName = "Logan";
        number_t age1 = 21;
        std::cout << firstName << std::endl;
        std::cout << age1 << std::endl;

    return 0; // Ends the Main function
}