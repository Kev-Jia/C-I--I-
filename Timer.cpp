#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    int hrs, min, sec;
    char start;
    int hours, minutes, seconds2;
    
    cout << "Enter hours: " << endl;
    cin >> hrs;
    
    cout << "Enter minutes: " << endl;
    cin >> min;
    
    cout << "Enter seconds: " << endl;
    cin >> sec;
    
    cout << "To start the timer, press S." << endl;
    cin >> start;
    
    hours = 0;
    seconds2 = 0;
    minutes = 0;
    
    if(sec >= 60)
    {
        int n;
        int m;
        m = sec % 60;
        sec -= m;
        n = sec / 60;
        min += n;
        sec += m;
        sec = sec - (n * 60);
    }
    if(min >= 60)
    {
        int k;
        int a;
        k = min % 60;
        min -= k;
        a = min / 60;
        hrs += a;
        min += k;
        min = min - (k * 60);
    }
    
    unsigned int microseconds = 1000000;
    
    while(start == 'S' || start == 's')
    {
        int x = 1;
        if(x == 1)
        {
            system("clear");
        }
        cout << hours << ":" << minutes << ":" << seconds2;
        cout << "" << endl;
        usleep(microseconds);
        ++seconds2;
        system("clear");
        while(seconds2 == 60)
        {
            minutes = minutes + 1;
            seconds2 = 0;
        }
        while(minutes == 60)
        {
            hours = hours + 1;
            minutes = 0;
        }
        if(hours == hrs && minutes == min && seconds2 == sec + 1)
        {
            return 0;
        }
    }
    return 0;
}
