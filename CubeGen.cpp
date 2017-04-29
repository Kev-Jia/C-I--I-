#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double x;
    int k;
    
    cout << "Welcome to Cube Number Generator! Select the max limit:" << endl;
    cin >> n;
    cout << "\n";
    
    x = cbrt(n);
    
    for(int i = 1; i <= x; i++)
    {
        cout << pow(i, 3) << " ";
        k += 1;
        if(k % 12 == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}