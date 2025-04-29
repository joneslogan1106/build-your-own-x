#include <iostream> // Imports functions for input and output like printing different strings

int main() {
    // 16:58 C++ Full course, 
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

        std::cout << name << std::endl;

    return 0; // Ends the Main function
}