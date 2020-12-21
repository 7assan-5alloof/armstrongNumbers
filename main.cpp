#include <iostream>

using namespace std;

bool armstrong(int);
int main()
{
    for (int number = 100; number < 10000; number++)
    {
        if (armstrong(number))
        {
            cout << number << " is an Armstrong number" << endl;
        }
    }

    return 0;
}

bool armstrong(int num)
{
    int x = num;
    int sum = 0;
    int digit;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == x)
    {
        return true;
    }
    else
    {
    return false;
    }
}
