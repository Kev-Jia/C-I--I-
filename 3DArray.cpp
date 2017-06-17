#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int n = 0;
    int arr[8][8][8];
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            for(int k = 0; k < 8; ++k)
            {
                arr[i][j][k] = 8;
                cout << arr[i][j][k] << " ";
                ++x;
                if(x % 8 == 0)
                {
                    ++n;
                    if(n % 8 == 0)
                    {
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        }
    }
    cout << endl;
    return 0;
    
}
