#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char alphanum[] =
{
    "0123456789"
    "!&*()_+{}:@$%~<>?|"
    "-=[];'#,."
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
};
int size = sizeof(alphanum) - 1;

int main()
{
    char password;
    cout << endl;
    cout << "Password: ";
    int length = 8;
	
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        password = alphanum[rand() % size];
        cout << password;
    }
    cout << endl << endl;
    return 0;
}