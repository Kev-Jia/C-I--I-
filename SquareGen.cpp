#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double x;
    int k;
    
    cout << "Welcome to Square Number Generator! Select the max limit:" << endl;
    cin >> n;
    cout << "\n";
    
    x = sqrt(n);
    
    for(int i = 1; i <= x; i++)
    {
        cout << pow(i, 2) << " ";
        k += 1;
        if(k % 12 == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}