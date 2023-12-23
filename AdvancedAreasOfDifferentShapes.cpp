#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;
    int choice;

    while (true)
    {
        cout << "Choose the Shape to find Area :" << endl;
        cout << "1. Circle \n2. Rectangle \n3. Square \n4. Triangle \n5. Rhombus \n\n0 for exit\n";
        cout << "Press 9 to go back to the main menu\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "You are quitting....!";
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
            while (true)
            {
                int triangleChoice;
                cout << "Triangle\n";
                cout << "1. From Base and Height \n2. From Sides \n\nPress 9 to go back to the main menu\n";
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
                case 9:
                    // Go back to the main menu
                    break;
                default:
                    cout << "Invalid Selection ....";
                    break; // added break here to exit the inner switch
                }

                if (triangleChoice == 9)
                    break; // Break out of the inner loop to go back to the main menu
            }
            break;
        case 5:
            while (true)
            {
                int rhombusChoice;
                cout << "Rhombus\n";
                cout << "1. From Diagonal 1 and Diagonal 2 \n2. From Base and Height\n\nPress 9 to go back to the main menu\n";
                cin >> rhombusChoice;
                switch (rhombusChoice)
                {
                case 1:
                    double diag1, diag2;
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
                case 9:
                    // Go back to the main menu
                    break;
                default:
                    cout << "Invalid Selection ....";
                    break; // added break here to exit the inner switch
                }

                if (rhombusChoice == 9)
                    break; // Break out of the inner loop to go back to the main menu
            }
            break;
        case 9:
            // Go back to the start of the loop
            break;
        default:
            cout << "Invalid Option. Please choose a valid option.\n";
            break; // added break here to exit the outer switch
        }
        cout << "\n\n";
    }
    return 0;
}
