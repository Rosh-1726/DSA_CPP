#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    char hex[32];
    int i = 0;

    while(n > 0)
    {
        int rem = n % 16;

        if(rem < 10)
            hex[i] = rem + '0';   // 0-9
        else
            hex[i] = rem - 10 + 'A'; // A-F

        n = n / 16;
        i++;
    }

    cout << "Hexadecimal = ";
    for(int j = i - 1; j >= 0; j--)
    {
        cout << hex[j];
    }

    return 0;
}