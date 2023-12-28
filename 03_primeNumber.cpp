//To Do: Adjust for the negative values
#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num > 1)
    
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{

    while (true)
    {
        int num;
        cout << "Enter the Number : ";
        cin >> num;
        if (num == 0)
        {
            cout << "Quitting ...................\n________________________________________________________________";
            break;
        }
        else if (num == 1)
        {
            cout << "Not Prime nor composite\n________________________________________________________________\n\n"
                 << endl;
        }
        else
        {
            if (isPrime(num))
            {
                cout << "------------>>>> " << num << " is Prime Number\n";
            }
            else
            {
                cout << "------------>>>> " << num << " is Composite Number\n";
            }
            cout << "\n\n Press 0 to Quit..\n________________________________________________________________\n\n";
        }
    }

    return 0;
}
