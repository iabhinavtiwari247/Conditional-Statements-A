/*14 - Program that takes two integers and determines 
 the absolute difference between them without using the built in abs() function use only if-else logic */
#include <iostream>
using namespace std;
int main() {
    int num1, num2, difference;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 > num2) {
        difference = num1 - num2;
    } else {
        difference = num2 - num1;
    }

    cout << "The absolute difference between " << num1 << " and " << num2 << " is: " << difference << endl;

    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------------------

/*13 - Program that determines if a triangle is valid based on its 3 angles using only if-else logic*/
#include <iostream>
using namespace std;
int main() {
    int angle1, angle2, angle3, sum;

    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;

    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;

    cout << "Enter the third angle of the triangle: ";
    cin >> angle3;

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}

/* 15- Program to Stimulate a simple login system as :
if username matches "admin" and password matches "password" matches "1234" print "Login Successful"
if username matches but password doesn't then print "incorrect password" 
if both doesnt matches print incorrect username and password , else print username not found . */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin") {
        if (password == "1234") {
            cout << "Login Successful" << endl;
        } else {
            cout << "Incorrect password" << endl;
        }
    } else {
        if (password == "1234") {
            cout << "Username not found" << endl;
        } else {
            cout << "Incorrect username and password" << endl;
        }
    }

    return 0;
}

/* Que 11 - Program that reads an integer and prints whether it is : 
- One digit , two digit , three digit , more than three digit (use only if-else and else if. */
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num >= 0 && num <= 9) {
        cout << "The number is a one-digit number." << endl;
    } else if (num >= 10 && num <= 99) {
        cout << "The number is a two-digit number." << endl;
    } else if (num >= 100 && num <= 999) {
        cout << "The number is a three-digit number." << endl;
    } else {
        cout << "The number has more than three digits." << endl;
    }

    return 0;
}

/* Que 12 -  Write a Program to check whether a given time (24 hour format) falls under 
 - Morning (5 AM - 11 AM ) , Afternoon ( 12 PM - 16 PM ) , Evening (17 PM - 20 PM ) , Night (21 PM - 4 AM) */
#include <iostream>
using namespace std;
int main() {
    int hour;
    cout << "Enter the time in 24-hour format (0-23): ";
    cin >> hour;

    if (hour >= 5 && hour <= 11) {
        cout << "The time falls under Morning." << endl;
    } else if (hour >= 12 && hour <= 16) {
        cout << "The time falls under Afternoon." << endl;
    } else if (hour >= 17 && hour <= 20) {
        cout << "The time falls under Evening." << endl;
    } else if ((hour >= 21 && hour <= 23) || (hour >= 0 && hour <= 4)) {
        cout << "The time falls under Night." << endl;
    } else {
        cout << "Invalid input. Please enter a valid hour (0-23)." << endl;
    }

    return 0;
}
/* Que 12 -  Write a Program to check whether a given time (24 hour format) falls under 
 - Morning (5 AM - 11 AM ) , Afternoon ( 12 PM - 16 PM ) , Evening (17 PM - 20 PM ) , Night (21 PM - 4 AM) */
#include <iostream>
using namespace std;
int main() {
    int time;
    cout << "Enter the time in 24-hour format (0-23): ";
    cin >> time;
    if (time >= 5 && time <= 11) {
        cout << "The time falls under Morning." << endl;
    } else if (time >= 12 && time <= 16) {
        cout << "The time falls under Afternoon." << endl;
    } else if (time >= 17 && time <= 20) {
        cout << "The time falls under Evening." << endl;
    } else if ((time >= 21 && time <= 23) || (time >= 0 && time <= 4)) {
        cout << "The time falls under Night." << endl;
    } else {
        cout << "Invalid input. Please enter a valid hour (0-23)." << endl;
    }
    return 0;
}
