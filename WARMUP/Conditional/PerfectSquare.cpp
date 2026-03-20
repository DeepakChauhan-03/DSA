// Check a number is perfect square or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    if (num == 0)
    {
        cout << "Perfect square";
    }
    else
    {
        for (int i = 1; i * i <= num; i++)
        {
            if (i * i == num)
            {
                cout << "Perfect square";
                return 0;
            }
        }
        cout << "Not a perfect square";
    }

    return 0;
}