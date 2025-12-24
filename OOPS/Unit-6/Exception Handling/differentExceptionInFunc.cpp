#include <iostream>
using namespace std;

double calculateInterest(double principle, double rate)
{

    if (principle < 0)
    {
        throw "principle cannot be negative";
    }
    if (rate < 0 || rate > 100)
    {
        throw "Invalid Interest rate";
    }
    return principle = rate / 100;
}

int main()
{
    double principle, rate;
    cout << "Enter the principle amount: \n";
    cin >> principle;

    cout << "Enter the rate of interest on principle\n";
    cin >> rate;

    try
    {
        double interest = calculateInterest(principle, rate);
        cout << "Your interest: " << interest << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception handling during interest calculation: " << msg << endl;
    }

    return 0;
}