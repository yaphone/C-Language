#include<iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
 //       cout << "Demo" << endl;
    }
    ~Demo()
    {
 //       cout << "Demo destroy" << endl;
    }
    void print()
    {
        cout << "Demo" << endl;

    }
public:
    int a = 2;
    int b = 3;
};

class Demo1 : public Demo
{
public:
    Demo1(string s)
    {
 //       cout << "Demo1" << s << endl;
    }
    Demo1(string s1, string s2)
    {
 //       cout << "Demo1" << s1 << " " << s2 << endl;
    }
    ~Demo1()
    {
 //       cout << "Demo1 destroy" << endl;
    }
    void print()
    {
        cout << "Demo1" << endl;
    }
    int c = 4;
private:
    int d = 5;
};

int main()
{
    Demo1 D1("Hello");
    Demo1 *dp = new Demo1("Hello", "world");
    D1.Demo::print();
    cout << "_______________________" << endl;
    dp->print
    ();
    delete dp;

}
