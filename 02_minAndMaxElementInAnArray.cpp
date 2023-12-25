//Program whicch take array as input
// and give minimum , maximum , 
// second maximum and second minimum as result



#include <iostream>
#include <climits>
using namespace std;

int minimumElement(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int maximumElement(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int secondMaximumElement(int arr[], int n)
{
    int max = maximumElement(arr, n);

    int secMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && secMax < arr[i])
        {
            secMax = arr[i];
        }
    }
    return secMax;
}
int secondMinimumElement(int arr[], int n)
{
    int min = minimumElement(arr, n);
    int secMin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != min && secMin > arr[i])
        {
            secMin = arr[i];
        }
    }
    return secMin;
}

int main()
{
    int n;
    cout << "Enter the size of Array :";
    
    while (true)
    {
        cin >> n;
        if (n < 2)
        {
            cout << "Please Enter atleast 2 array size\n";
        }else{
            break;
        }
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i + 1 << " element of the array :";
        cin >> arr[i];
    }

    while (true)
    {

        cout << "What to find :" << endl;
        cout << "1. Minimum\n2. Maximum\n3. Second Maximum\n4. Second Minimum \n\nPress 0 to quit" << endl;
        int option;
        cin >> option;
        if (option == 0)
        {
            cout << "Quitting the Program.............\n_________________________________________________________________________________________________";
            break;
        }
        switch (option)
        {
        case 1:
            cout << "------------->> Minimum : " << minimumElement(arr, n) << endl
                 << endl;
            break;
        case 2:
            cout << "------------->> Maximum : " << maximumElement(arr, n) << endl
                 << endl;
            break;
        case 3:
            cout << "------------->> Second Maximum : " << secondMaximumElement(arr, n) << endl
                 << endl;
            break;
        case 4:
            cout << "------------->> Second Minimum : " << secondMinimumElement(arr, n) << endl
                 << endl;
            break;
        default:
            cout << "Choose the correct option....\n";
            break;
        }
    }
    return 0;
}
