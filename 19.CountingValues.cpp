#include <iostream>
using namespace std;

// User Defined Functions....
int countingValleys(char Arr[], int LenArr)
{
    int steps = 0, unit = 0;

    for(int i = 0; i < LenArr; i++)
    {
        if(Arr[i] =='U')
        {
            unit++;
            if(unit == 0)
            {
                steps++;
            }
        }
        else if(Arr[i] == 'D')
        {
            unit--;
            
        }

    }

    return steps;
}
int main()
{
    int n;
    cin>> n;
    if(n < 2 || n > 1000000)
    {
        cout<< "Invalid number";
        return 0;
    }
    char Ch[n];
    for(int i=0; i<n; i++)
    {
        cin>> Ch[i];
        if(Ch[i]!= 'U' && Ch[i]!= 'D')
        {
            cout<< "Invalid input";
            return 0;
        }
    }

    cout<< countingValleys(Ch, n);
    return 0;
}