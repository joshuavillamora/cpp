#include <iostream>
#include <vector>
#include <cmath>

// typedef - typedef in C++ is a keyword used to create an alias for an existing data type. This allows for more readable code and can simplify complex type definitions.
/*
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using text_t = std::string;
using number_t = int;
*/

namespace first{
    std::string name = "Earik";
}
namespace second{
    std::string name = "Joshua";
}

int main() {
    /*
    // integers (whole number)
    int x; //declaration
    x = 5; //assignment
    int y = 6; //declaration and assignment
    int sum = x + y;
    int age = 18;
    int year = 2025;

    // double (integer with decimal)
    double pi = 3.14;

    // single character
    char initial = 'a';
    char currency = '$';
    
    // booleans
    bool student = true;
    bool power = true;
    bool forSale = false;

    // string
    std::string greet = "hello world!";
    std::string name = "shua";

    std::cout << "goodnight " << name << "\n";
    */

    /*
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    int radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    */

    /*
    using namespace first;
    std::string name = "Villamora";
    std::cout << "My name is " << second::name << "\n";

    using namespace std;
    string food = "Pizza";
    cout << "I like " << food << "\n";

    using std::cout;
    using std::string;
    string location = "Bathroom";
    cout << "I want to go to the " << location;
    */

    // arithmetic operators
    /*    
    int students = 44;

    students = students + 2;
    students+=2;
    students++;
    students = students - 2;
    students-=2;
    students--;
    students = students * 2;
    students*=2;
    students = students / 2;
    students/=2;

    std::cout << students;
    
    int remainder = students % 3;
    std::cout << remainder;    
    // PEMDAS
    int algebra = 6 - (5 + 4) * 3 / 2
    */

    // type conversion - conversion of a value from one data type to another
    //                  Implicit - automatic
    //                  Explicit - Precede value with a new data type (int)
    
    /*
    int correct = 8;
    int questions = 10;
    double grades = correct/(double)questions * 100;

    std::cout << grades << "%";
    */

    // cout << (insertion operator)
    // cin >> (extraction operator)

    /*
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::getline(std::cin, name); // For string inputs

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    */

    /*
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age; // Leaves a \n in the input buffer

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name); // std::ws deletes any whitespace (spaces, tabs, \n)

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    */

    /*
    double x = 5.8;
    double y = 100;
    double z;

    // z = std::min(x, y);
    // z = std::max(x, y);
    // z = pow(2, 3); exponent
    // z = sqrt(9); square root
    // z = abs(-3); absolute value
    // z = round(x); rounds to whole number
    // z = ceil(x); rounds up
    // z = floor(x); rounds down

    std::cout << z;
    */

    /*
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C is " << c;
    */

    // if statement - do something if a condition is true.
    /*
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 100) {
        std::cout << "You are too dead to enter this site";
    } else if (age >= 18) {
        std::cout << "You are allowed to enter the site";
    } else if (age <= 0) {
        std::cout << "You are not born enough to enter this site";
    } else {
        std::cout << "You are not old enough to enter this site";
    }
    */

    // switch - alternative to using too many "if else" statements
    //          compare one value against matching cases
    /*
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;
    switch (month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter numbers (1-12)";
    }
    */

    /*
    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Good job!";
            break;
        case 'B':
            std::cout << "Nice!";
            break;
        case 'C':
            std::cout << "Could be better...";
            break;
        case 'D':
            std::cout << "Do better next time.";
            break;
        case 'F':
            std::cout << "You're expelled.";
            break;
        default:
            std::cout << "Enter grade letters (A-F)";
            break;
    }
    */

    /*
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter arithmetic operator (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result;
            break;
        default:
            std::cout << "That wasn't a valid response";
            break;
    }
    std::cout << "\n********************************";
    */

    // ternary operator ? - replacement to an if/else statement
    // condition ? expression 1 : expression 2;

    /*
    char sex;

    std::cout << "Enter your sexuality (M F): ";
    std::cin >> sex;

    sex == 'M' ? std::cout << "You are male" : std::cout << "You are female";
    */

    /*
    int number;

    std::cout << "Choose a number: ";
    std::cin >> number;

    number % 2 ? std::cout << "Your number is ODD!" : std::cout << "Your number is EVEN!"; // No comparison needed, 1 equates to true and 0 equates to false
    */

    /*
    bool hungry = true;

    //hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";
    std::cout << (hungry ? "You are hungry" : "You are full");
    */

    // && - check if both conditions are true (AND)
    // || - check if atleast one of the conditions are true (OR)
    // ! = reverses the logical states of the operand (NOT)
    
    /*
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    std::cout << ((temp >= 24 && temp <= 30) ? "Weather is good\n" : "Weather is bad\n");
    std::cout << (!sunny ? "It is cloudy outside...": "It is sunny outside!" );
    */

    /*
    std::cout << "**********TEMPERATURE CONVERSION**********\n";
    char scale;
    double result;
    double temperature;
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> scale;
    switch (scale) {
        case 'F':
            std::cout << "Enter the temperature in degree Celsius: ";
            std::cin >> temperature;
            result = (temperature * 9 / 5) + 32;
            std::cout << "The temperature is " << result << " degree Fahrenheit";
            break;
        case 'C':
            std::cout << "Enter the temperature in degree Fahrenheit: ";
            std::cin >> temperature;
            result = (temperature - 32) * 5 / 9;
            std::cout << "The temperature is " << result << " degree Celsius";
            break;
        default:
            std::cout << "Enter a valid answer.";
            break;
    }
    std::cout << "\n******************************************";
    */

    // String Methods
    /*
    std::string name;
    std::string pass;
    std::string num;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Please choose a password: ";
    std::getline(std::cin, pass); // Use getline if name contains spaces
    std::cout << "Enter your number: ";
    std::cin >> num;
    
    if (pass.empty()) 
    {
        std::cout << "You didn't enter your password.\n";
        std::cout << "Try Again.\n";
    }
    else if (pass.length() > 12) 
    {
        std::cout << "Password is too long!\n";
        std::cout << "Try Again!\n";
    } 
    else {
        std::cout << "This password is valid.\n";
        std::cout << "You may enter.\n";
    }

    name.append("@gmail.com");
    std::cout << "Your username is now " << name << "\n";

    pass.clear();
    std::cout << "Your password is... " << pass << "\n";

    std::cout << "Your initial is " << name.at(0) << "\n";

    name.insert(0, "@");
    std::cout << "Your account is " << name << "\n";

    std::cout << name.find('e') << "\n";

    num.erase(0, 1); // .erase(Beginning Index, Ending Index)
    num.insert(0, "+63"); // .insert(Index, String/Integer/Character)
    std::cout << "Your number is " << num << "\n";
    */

    // While loops
    /*
    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name;

    while (1 == 1) {
        std::cout << "Wha- \n";
    }
    */

    // do while loop - do some block of code first,
    //                 THEN repeat again if condition is true
    /*
    int number;

    while (number < 0) // Doesn't work because declared integers default to 0
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }

    std::cout << "The number is" << number;

    int number;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;
    */

    // for loops for(index; condition; increment)
    /*
    for (int i = 0; i <= 10; i+=2) {
        std::cout << i << "\n";
    }
    std::cout << "Happy New Year!";
    */

    // break - break out of a loop
    // continue - skip current iteration
    /*
    for (int i = 0; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        std::cout << i << "\n";
    }

    for (int i = 0; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        std::cout << i << "\n";
    }
    */

    // Nested loops

    /*
    int rows;
    int col;
    char symbol;
    std::cout << "Build a Rectangle!\n";
    std::cout << "How many rows? ";
    std::cin >> rows;
    std::cout << "How many columns? ";
    std::cin >> col;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= col; j++) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    */

    // pseudo-random - NOT truly random (but close)
    srand(time(NULL)); // srand(seed) calendar time is typically used as seed
    for (int i = 1; i <= 3; i++) {
        int num = (rand() % 6) + 1; // 6 sided dice
        std::cout << num << ' ';
    }
    return 0;
}