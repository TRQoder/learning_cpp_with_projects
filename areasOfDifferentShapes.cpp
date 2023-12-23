//To Do :
//  Back function...
//  Exit function...
//  repeat on invalid option...
// withou goto

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;
    cout << "Choose the Shape to find Area :" << endl;
    cout << "1. Circle \n2. Rectangle \n3. Square \n4. Triangle \n5. Rhombus \n\n0 for exit\n";
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 0:
        cout << "you are quitting....!";
        return -1;
        break;
    case 1:
        double rad;
        cout << "Circle\nRadius : ";
        cin >> rad;
        area = 3.14 * rad * rad;
        cout << "Area : " << area;
        break;
    case 2:
        double length, breadth;
        cout << "Rectangle\nLength : " << endl;
        cin >> length;
        cout << "Breadth : ";
        cin >> breadth;
        area = length * breadth;
        cout << "Area : " << area;
        break;
    case 3:
        double side;
        cout << "Square\nSide : ";
        cin >> side;
        area = side * side;
        cout << "Area : " << area;
        break;
    case 4:

        int triangleChoice;
        cout << "Triangle\n";
        cout << "1. From Base and Height \n2. From Sides " << endl;
        cin >> triangleChoice;
        switch (triangleChoice)
        {
        case 1:
            double base, height;
            cout << "Base : ";
            cin >> base;
            cout << "Height : ";
            cin >> height;
            area = (base * height) / 2;
            cout << "Area : " << area;
            break;
        case 2:
            double a, b, c, s;
            cout << "First Side : ";
            cin >> a;
            cout << "Second Side : ";
            cin >> b;
            cout << "Third Side : ";
            cin >> c;

            s = (a + b + c) / 2;

            area = sqrt(s * (s - a) * (s - b) * (s - c));
            cout << "Area : " << area;
            break;
        default:
            cout << "Invalid Selection ....";
        }
        break;
    case 5:
        cout << "Rhombus\n";
        int rhombusChoice;
        cout << "1. From Diagonal 1 and Diagonal 2 \n2. From Base and Height\n";
        cin >> rhombusChoice;
        switch (rhombusChoice)
        {
            double diag1, diag2;
        case 1:
            cout << "First Diagonal : ";
            cin >> diag1;
            cout << "Second Diagonal : ";
            cin >> diag2;
            area = (diag1 * diag2) / 2;
            cout << "Area : " << area;
            break;
        case 2:
            double base, height;
            cout << "Base : ";
            cin >> base;
            cout << "Height : ";
            cin >> height;
            area = (base * height);
            cout << "Area : " << area;
            break;
        }

        break;
    default:
        cout << "Invalid Selection ...";
    }
    return 0;
}