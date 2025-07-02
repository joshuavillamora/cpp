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
    return 0;
}