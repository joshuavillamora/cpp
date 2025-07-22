#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

// typedef - typedef in C++ is a keyword used to create an alias for an existing data type. This allows for more readable code and can simplify complex type definitions.
/*
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using text_t = std::string;
using number_t = int;
*/

/*
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
    /*
    srand(time(NULL)); // srand(seed) calendar time is typically used as seed
    while (1 == 1) {
        int num = (rand() % 9) + 1; // 6 sided dice
        std::cout << num << ' ';
    }
    */

    // Random Event Generator
    /*
    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch (randNum) {
        case 1:
            std::cout << "Congrats! You win a brand new Honda Civic!";
            break;
        case 2:
            std::cout << "You win 10,000 pesos!";
            break;
        case 3:
            std::cout << "You win a discount coupon!";
            break;
        case 4:
            std::cout << "You win a tshirt!";
            break;
        case 5:
            std::cout << "You win a sticker!";
            break;
        default:
            std::cout << "You won nothing.";
            break;
    }
    */

    // Rock Paper Scissors
    /*
    int opp = rand() % 3 + 1;
    int oppHealth = 3;
    int health = 3;
    int guess;

    srand(time(0));

    std::cout << "Rock, Paper, or Scissors (1-3)? ";
    std::cin >> guess;

    std::cout << "Rock \n"; 
    std::cout << "Paper \n"; 
    std::cout << "Scissors \n"; 
    std::cout << "SHOOT! \n";

    switch (guess) {
        case 1:
        switch (opp) {
            case 1:
            std::cout << "Your opponent picked Rock! It's a Draw!";
            break;
            case 2:
            std::cout << "Your opponent picked Paper! You lose!";
            break;
            case 3:
            std::cout << "Your opponent picked Scissors! You win!";
            break;
        }
        break;
        case 2:
        switch (opp) {
            case 1:
            std::cout << "Your opponent picked Rock! You win!";
            break;
            case 2:
            std::cout << "Your opponent picked Paper! It's a draw!";
            break;
            case 3:
            std::cout << "Your opponent picked Scissors! You lose!";
            break;
        }
        break;
        case 3:            
        switch (opp) {
            case 1:
            std::cout << "Your opponent picked Rock! You lose!";
            break;
            case 2:
            std::cout << "Your opponent picked Paper! You win!";
            break;
            case 3:
            std::cout << "Your opponent picked Scissors! It's a draw!";
            break;
        }
        break;
        default:
        std::cout << "Pick a number between 1-3.";
        break;
    }
    */

    /*
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;
    std::cout << "********** NUMBER GUESSING GAME **********\n";
    do {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;
        if (guess > num) {
            std::cout << "Too high! Try again. \n";
        } else if (guess < num) {
            std::cout << "Too low! Try again. \n";
        } else {
            std::cout << "Congratulations! It took you " << tries << " attempts to guess the number " << num << ".";
        }
    } while (guess != num);
    std::cout << "\n******************************************";

    return 0;
}
*/

/*
void happyBirthday(std::string birthdayBoy, int age) {
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << birthdayBoy << "! \n";
    std::cout << "Happy birthday to you!\n\n";
    std::cout << "You are now " << age << " years old!";
}
return 0;

int main() {
    std::string name = "Joshua";
    int age = 18;
    happyBirthday(name, age);
    return 0;
}

void calculate(int a, int b) {
    double c;
    c = sqrt((a * a) + (b * b));
    std::cout << "The value of c is " << c;
}
int main() {
    double a;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    double b = 4;
    std::cout << "Enter value of b: ";
    std::cin >> b;
    calculate(a, b);
    return 0; 
}
*/

/*
int main() {
    int tickets;
    std::cout << "Enter tickets needed: ";
    std::cin >> tickets;
    int sessions;
    int tokens;
    sessions = tickets / 60;
    tokens = sessions * 2;
    std::cout << "Tickets needed are " << tickets << '\n';
    std::cout << "Sessions required: " << sessions << '\n';
    std::cout << "Tokens required: " << tokens << '\n';

    return 0;
}
*/

/*
// declaring the function
double square(double length);
double cube(double length);

int main () {
    // return - return a value back to the spot
    //          where you called the encompassing function
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    std::cout << "Length is " << length << "m\n";
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3";
    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cube(double length) {
    double result = length * length * length;
    return result;
}
*/
/*
std::string concat(std::string string1, std::string string2);

int main() {
    std::string firstName = "Joshua";
    std::string lastName = "Villamora";
    std::string fullName = concat(firstName, lastName);
    std::cout << "Hello " << fullName;
    return 0;
}

std::string concat(std::string string1, std::string string2) {
    return string1 + " " + string2;
}
*/
/*
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza("pepperoni", "cheese");
    return 0;
}

void bakePizza() {
    std::cout << "Here is your peekza!";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " peekza!";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " peekza!";
}
*/

// Local variables - declared inside a function or a block {}
// Global variables - declared outside all functions

// Scope resolution operator (::) - uses global variable instead of local

/*
int myNum = 3;

void print();

int main() {
    int myNum = 1;
    std::cout << ::myNum << "\n";
    print();
    return 0;
}

void print() {
    int myNum = 2;
    std::cout << ::myNum;
}
*/

/*
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 38;
    int choice = 0;
    do {
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!";
                break;
            default:
                std::cout << "Invalid choice.";
                break;
        }
    } while(choice != 4);

    return 0;
}


void showBalance(double balance) {
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit() {

    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount";
        return 0;
    }
}
double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if (amount < balance) {
        return amount;
    } else if (amount < 0) {
        std::cout << "That's not a valid amount\n";
        return 0;
    } else {
        std::cout << "You lack the required funds for this transaction.\n";
        return 0;
    }
}
*/

/*
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    std::cout << "Rock\n";
    std::cout << "Paper\n";
    std::cout << "Scissors\n";
    std::cout << "SHOOT\n";
    chooseWinner(player, computer);
    return 0;
}

char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";
    do {
        std::cout << "************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice() {
    srand(time(0));
    int rng = rand() % 3 + 1;
    switch (rng) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
        default:
            std::cout << "Computer choice invalid!";
            break;
    }
}
void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
        default:
            std::cout << "Invalid!";
            break;
    }
}
void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'r') {
                std::cout << "It's a tie!";
            } else if (computer == 'p') {
                std::cout << "Computer wins!";
            } else if (computer == 's') {
                std::cout << "Player wins!";
            } else {
                std::cout << "Invalid match.";
            }
            break;
        case 'p':
            if (computer == 'r') {
                std::cout << "Player wins!";
            } else if (computer == 'p') {
                std::cout << "It's a tie!";
            } else if (computer == 's') {
                std::cout << "Computer wins!";
            } else {
                std::cout << "Invalid match.";
            }
          break;
        case 's':
            switch (computer) {
                case 'r':
                    std::cout << "Computer wins!";
                    break;
                case 'p':
                    std::cout << "Player wins!";
                    break;
                case 's':
                    std::cout << "It's a tie!";
                    break;
                default:
                    std::cout << "Invalid match!";
                    break;
            }
           break;
        default:
            std::cout << "Invalid match.";
            break;
    }   
}
*/

// array - a data structure than can hold multiple values
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"

/*
int main() {
    /*
    std::string cars[] = {"Subaru", "Hellcat", "Honda"};

    cars[0] = "Fortuner";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    */

    /*
    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << '$' << prices[0] << '\n';
    std::cout << '$' << prices[1] << '\n';
    std::cout << '$' << prices[2] << '\n';
    std::cout << '$' << prices[3] << '\n';
    */

    // sizeof() - determines the size in bytes of:
    //            variable, data type, class, objects, etc.

    /*
    int grade = 93;
    double gpa = 4.0;
    std::string name = "ari";
    char initial = 'a';
    bool sleepy = true;
    
    std::cout << "string is " << sizeof(name) << " bytes\n";
    std::cout << "double is " << sizeof(double) << " bytes\n";
    std::cout << "int is " << sizeof(grade) << " bytes\n";
    std::cout << "char is " << sizeof(initial) << " bytes\n";
    std::cout << "bool is " << sizeof(sleepy) << " bytes\n";
    */

    // Calculating the size of an array
    /*
    int grades[] = {93, 91, 92, 95, 95};
    std::cout << "The array 'grades' has " << sizeof(grades)/sizeof(int) << " elements\n";

    std::string destinations[] = {"Leon", "Tubungan", "Pavia", "Circumferential"};
    std::cout << "The array 'destinations' has " << sizeof(destinations)/sizeof(std::string) << " elements";
    */

    // Iterate over an array
    /*
    std::string courses[] = {"BSCS", "BSIT", "BSIS", "BSEMC", "BLIS"};
    int coursesLength = sizeof(courses)/sizeof(std::string);

    std::cout << "CICT Courses \n";
    for (int i = 0; i < coursesLength; i++) {
        std::cout << courses[i] << '\n';
    }
    */

    // foreach loop - loop that eases the traversal over an
    //                iterable data set 
    /* example
    for (dataType elementName : dataSet) {
        
    }

    // std::string students[] = {"Spongebob", "Patrick", "Squidward"}; 

    int grades[] = {98, 87, 93, 96, 84};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }
    return 0;   
}
*/

/*
double getTotal(double prices[], int pricesLength);

int main() {
    double prices[] = {130.25, 1.25, 16.75, 50.50, 78.25, 4.50};
    int pricesLength = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, pricesLength);
    std::cout << '$' << std::setprecision(2) << std::fixed << total;
    return 0;
}

double getTotal(double prices[], int pricesLength) {
    double total = 0;
    for (int i = 0; i <= pricesLength; i++) {
        total += prices[i];
    }

    return total;
}
*/

/*
int searchArray(std::string foods[], int size, std::string myFood);

int main() {
    std::string foods[] = {"brownies", "mogu-mogu", "milktea", "fries"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: ";
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if (index != -1) {
        std::cout << myFood << " is at index " << index;
    } else {
        std::cout << myFood << " is not included in the array";
    }

    return 0;
}

int searchArray(std::string foods[], int size, std::string myFood) {
    for (int i = 0; i < size; i++) {
        if (foods[i] == myFood) {
            return i;
        }
    }
    return -1;
}
*/

// bubble sort - a simple sorting algorithm that works by repeatedly
//               comparing and swapping adjacent elements

/*
void sort(int numbers[], int size);

int main() {
    int numbers[] = {7, 3, 9, 4, 1, 10, 6, 8, 5, 2};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for (int number : numbers) {
        std::cout << number << ' ';
    }

    return 0;
}

void sort(int numbers[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
*/

int main() {
    // fill() - Fills a range of elements with a specified value
    //          fill(begin, end, value)

    /*
    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburger");
    fill(foods + (SIZE / 3) * 2, foods + SIZE, "hotdog");

    for (std::string food : foods) {
        std::cout << food << " ";
    }
    */

    // filling with user input

    /*
    std::string desserts[5];
    int size = sizeof(desserts)/sizeof(desserts[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a dessert to add to the menu or 'q' to quit (" << i + 1 << "/" << size << "): ";
        std::getline(std::cin, temp);
        if (temp == "q") {
            break;
        } else {
            desserts[i] = temp;
        }

    }

    std::cout << "You like the following food:\n";

    for (int i = 0; !desserts[i].empty(); i++) {
        std::cout << desserts[i] << '\n';
    }
    */

    std::string cars[][3] = {{"Mustang", "Escape", "Ford F-150"}, {"Corvette", "Equinox", "Silverado"}, {"Challenger", "Durango", "Ram 1500"}};
    std::string dog[] = {"hi", "hello"};
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    /*
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";
    */
    return 0;
}