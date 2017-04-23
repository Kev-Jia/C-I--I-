#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int x;
    double n;
    
    int num_loops = 256;
    
    for(int i = 1; i <= num_loops; i++)
    {
        for(int j = i; j <= num_loops; j++)
        {
            x = pow(i, 2) + pow(j, 2);
            n = sqrt(x);
            
            if(floor(n) != n)
            {
                continue;
            }
            
            cout << i << "^2 + " << j << "^2 = " << n << "^2" << endl;
        }
    }
    
    return 0;
}