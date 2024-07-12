#include <iostream>

// int main(){

//     //This is a comment

//     // omyhosh
//     std::cout << "I like pizza" << '\n';
//     std::cout << "It's really good" << '\n';
//     return 0;
// }

// int main(){

//     int x; //declaration
//     x = 5;

//     //double = float

//     double price = 10.99;

//     // single character - Only for one character

//     char grade = 'A';

//     // boolean (true or false)

//     bool student = false;

//     // strings are declared diffrently
//     std::string name = "I love my plug!";

//     //Printing the variables

//     std::cout << x << '\n';
//     std::cout << price << '\n';
//     std::cout << grade << '\n';
//     std::cout << student << '\n'; //This will display as 1 if true and 0 if false!
//     std::cout << name << '\n';

//     //String literal with variables inside the statement

//     std::cout << "My G " << x;
//     return 0;
// }

/* int main() {
    //const works the same way as javascript, important so a value is constant

    const double PI = 3.14159;
    double radius = 5;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}
*/


//namespace

// namespace first {
//     int x = 2;
// } /*
// when this is declared before the variable line 70, it uses this value instead of 0 in line 68.
// */  

// int main() {

//     using namespace first;
    

//     std::cout << x;

//     return 0;
// }

// #include <vector> -- needs to ne included to use type def

//typedef // get a new identifier

//typedef std::string text_t; -- replaces the need of saying string before declaring a string such as std::string
//typedef int number_t; -- replaces the need of saying int before a declaration of an int

//the same can be accomplished with the keyword "using"

// using text_t = std::string;
// using number_t = int;

// int main() {

//     text_t firstName = "Negro ";
//     number_t age = 30;
//     std::cout << firstName << age << '\n';

//     return 0;
// }

// int main()
// {
//     int students = 20;
//     students = students + 1;
//     students += 1;
//     students ++;

//     //same for subtraction, division, multiplication

//     //int remainder = students % 1;

//     std::cout  ;




//     return 0;
// }
/*
int main()
{
    //type conversion is using parenthesis in front of the convertee with the new data type

    double x = (int)3.15; //displays 3 because int cannot hold doubles
    std::cout << x;

    return 0;
}*/

/*
int main()
{
    std::string name;
    int age;

    
    std::cout << "What's your name?: ";
    //std::cin >> name; -- does not accept spaces
    std::getline(std::cin >> std::ws, name); //getline is necessary to accept space from the user input

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}*/

/* #include <cmath>

int main() 
{
    double x = 3;
    double y = 4;
    double z;
    double k;
    double l;

    z = std::max(x, y); //max number
    k = std::min(x, y); //min number

    l = pow(2,3); //needs the cmath include *to the power*
    //l = abs(); we can look up my cmath functions 

    std::cout << l << '\n';
    std::cout << k;
    return 0;
}
*/

/* int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "welcome to the Website!";

    }
    else if(age < 0) {
        std::cout << "You have been born yet!";
    }
    else {
        std::cout << "You are not old enough to enter!";
    }
    return 0;
}*/

/*int main()
{
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
    case 1:
        std::cout << "It is January";
        break;
        // if I did with a letter I could do case 'A';
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
        std::cout << "Please enter in only numbers (1-12)";
    }
    return 0;
}*/
/*
int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '-':
        result = num1 - num2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '*':
        result = num1 * num2;
        std::cout << "The result is: " << result << '\n';
        break;

        case '/':
        result = num1 / num2;
        std::cout << "The result is: " << result << '\n';
        break;

        default:
        std::cout << "Please enter a valid symbol (+ - * /)'\n";
        break;
    }





    std::cout << "***********************************";

    return 0;
}
*/

/*int main()
{
    //tenary operator
    // int grade = 75;
    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail";

    // && = AND, || = OR, ! = NOT...

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    return 0;
}*/

/*
//TEMPERATURE CONVERSION PROGRAM
int main() 
{

    double temp;
    double c;
    double f;
    char unit;

    std::cout << "****** Temperature conversion ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsiius: ";
        std::cin >> c;
        temp = (c * 9/5) + 32;
        std::cout << "The temperature in Fahrenheit is " << temp << "F \n";

    }else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> f;
        temp = (f - 32) * 5/9;
        std::cout << "The temperature in Celsius is " << temp << "Cº \n";
    }else{
        std::cout << "Please choose the correct unit (C/F) \n";
    }
    std::cout << "*******************************";
    return 0;
}*/
/*
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //way to cin type name with more than one word!

    if(name.length() > 12) {
        std::cout << "Your name cannot be over 12 letters";
    }else{
        std::cout << "Welcome " << name;
    }
    return 0;

    //other options name.empty(), name.at(), name.clear(), name.insert(0[index position], "insertion"[whatever is being inserted]),name.find(index), name.erase(index start, index end).
}*/

/*
int main()
{
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}*/
/*
int main()
{
    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);
    
    std::cout << "The # is: " << number << '\n';

    return 0;
}*/
/*
int main()
{
    for(int i = 1; i <= 10; i++){
        std::cout << "Happy New Year!\n";

    }

    return 0;
}*/
#include <ctime>
/*
int main()
{
    srand(time(0)); //use our time to create the number
    int randNum = rand() % 5 + 1; //range 1 through 5 using the %....+ 1....

    switch (randNum){
        case 1: std::cout << "You win a bumper sticker!\n";
            break;
        case 2: std::cout << "You win a t-shirt!\n";
            break;
        case 3: std::cout << "You win a free lunch!\n";
            break;
        case 4: std::cout << "You win a gift card!\n";
            break;
        case 5: std::cout << "You win a concert tickets!\n";
            break;

    }
    std::cout << "Your random prize number was: #"<< randNum << '\n';

    return 0;


    return 0;
}*/

/*
int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "******** NUMBER GUESSING GAME ********\n";
    do{
        std::cout << "Enter a guess between (1-100):";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Tip - Lower \n";
        }else if (guess < num){
            std::cout << "Tip - Higher \n";
        }else{
            std::cout << "CORRECT! -- Congratulations # of tries: " << tries << '\n';
        }
    }while(guess != num);

    std::cout << "*************************************\n";

    return 0;

}*/
/*
std::string name = "IrineuNan";
int age = 30;

void happyBirthday(std::string birthdayName, int age){
    std::cout << "Happy Birthday to you! " << birthdayName << '\n';
    std::cout << "Happy Birthday to you! " << birthdayName << '\n';
    std::cout << "Happy Birthday to you! " << birthdayName << "You are " << age << '\n';

}

int main()
{
    happyBirthday(name, age);

    return 0;
}*/

/*
double square(double length);

int main()
{
    double length = 6.0;
    double area = square(length);

    std::cout << "Area: " << area << "cm^2\n";
}

double square(double length){
    return length * length;
}*/

/*
//OVERLOEADED FUNCTIONS
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{

    bakePizza("marguerita", "marinara");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza! \n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << "pizza! \n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << "pizza and your "<< topping2 <<"pizza!\n";
}*/

