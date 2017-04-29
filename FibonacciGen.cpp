#include <iostream>
 
using namespace std;
 
int main()
{
    int n, c, k;
    long long int first = 0, second = 1, next;
 
    cout << "Welcome to Fibonacci Series Generator! Select the # of terms(Note: # of terms must not > 81):" << endl;
    cin >> n;
    cout << "\n";
    
    if(n > 81)
    {
        cout << "# of terms is too large!" << endl;
        cout << "Terminating program..." << endl;
        return 0;
    }
    for(c = 0; c < n; c++)
    {
        if(c <= 1)
        {
            next = c;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
        k += 1;
        if(k % 10 == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}