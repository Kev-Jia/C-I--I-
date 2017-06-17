#include <iostream>

using namespace std;

int lcm(int deno, int deno1)
{
    int comden = deno * deno1;
    return comden;
}
int main()
{
    double num, den, num1, den1, op, ansnum, ansden;
    int commden, knx;
    char slash;
    
    cout << "Welcome to Fraction Calculator!\n";
    cout << "Enter your fractions in the correct format - 4/5 would be 4 / 5\n";
    cout << "Then enter your operator, indicating it with a number\n";
    cout << "1 for addition\n";
    cout << "2 for subtraction\n";
    cout << "3 for multiplication\n";
    cout << "4 for division\n";
    cout << "Enter first fraction: " << endl;
    cin >> num >> slash >> den;
    if(den1 == 0 || den == 0)
    {
        cout << "Fractions with denominator 0 are not allowed!" << endl;
        cout << "Terminating program..." << endl;
        return 0;
    }
    cout << "Enter second fraction: " << endl;
    cin >> num1 >> slash >> den1;
    if(den1 == 0 || den == 0)
    {
        cout << "Fractions with denominator 0 are not allowed!" << endl;
        cout << "Terminating program..." << endl;
        return 0;
    }
    cout << "Enter operator #: " << endl;
    cin >> op;
    if(op < 1 || op > 4)
    {
        cout << "Invalid operator #!" << endl;
        cout << "Terminating program..." << endl;
        return 0;
    }
    if(op == 1)
    {
        commden = lcm(den, den1);
        num = num * den1;
        num1 = num1 * den;
        ansnum = num + num1;
        ansden = commden;
        cout << "Answer = " << ansnum << "/" << ansden << endl;
    }
    if(op == 2)
    {
        commden = lcm(den, den1);
        num = num * den1;
        num1 = num1 * den;
        ansnum = num - num1;
        ansden = commden;
        cout << "Answer = " << ansnum << "/" << ansden << endl;
    }
    if(op == 3)
    {
        ansnum = num * num1;
        ansden = den * den1;
        cout << "Answer = " << ansnum << "/" << ansden << endl;
    }
    if(op == 4)
    {
        ansnum = num * den1;
        ansden = den * num1;
        cout << "Answer = " << ansnum << "/" << ansden << endl;
    }
    return 0;
}


