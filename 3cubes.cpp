#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int x;
    double n;
    
    int num_loops = 300;
    for(int i = 1; i <= num_loops; i++)
    {
        for(int j = 1; j <= num_loops; j++)
        {
            for(int k = 1; k <= num_loops; k++)
            {
                x = pow(i, 3) + pow(j, 3) + pow(k, 3);
                n = cbrt(x);
                if(floor(n) != n)
                {
                    continue;
                }
                cout << i << "^3 + " << j << "^3 + " << k << "^3 = " << n << "^3" << endl; 
                
            }
        }
    }
    return 0;
}