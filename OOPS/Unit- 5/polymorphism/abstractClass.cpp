#include <iostream>
using namespace std;

// Payment system:
// different payment methods: they all different calculation fees. But all payment methods must calculate amount,show payment.
// we inforce this using pure virtual function

// Abstract class:
class Payment
{
public:
    // pure virtual functions
    virtual void pay(double amount) = 0;
    virtual string getPaymentType() = 0;

    virtual ~Payment() {}
};

// concrete class - UPI
class UPI : public Payment
{
public:
    void pay(double amount) override
    {
        cout << "Paid: " << amount << " UPI take no free " << endl;
    }
    string getPaymentType() override
    {
        return "UPI";
    }
};

// concrete class - Net Banking
class NetBanking : public Payment
{
public:
    void pay(double amount) override
    {
        cout << "Paid: " << amount << "Using Net banking (1% free) " << amount * 0.01 << endl;
    }
    string getPaymentType() override
    {
        return "Net Banking";
    }
};

int main()
{
    Payment *payments[2];
    payments[0] = new UPI();
    payments[1] = new NetBanking();

    double amount = 1000;

    for (int i = 0; i < 2; i++)
    {
        cout << "Payment Type: " << payments[i]->getPaymentType() << endl;

        payments[i]->pay(amount);
        cout << endl;
    }

    // cleanup
    for (int i = 0; i < 2; i++)
    {
        delete payments[i];
    }

    return 0;
}