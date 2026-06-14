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