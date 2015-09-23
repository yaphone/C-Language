#include<iostream>
using namespace std;
string::size_type find_char(const string &s, char c, string::size_type &occurs);

int main()
{
    string s("Hello World");
    char c;
    string::size_type occurs = 0;
    auto ret = find_char(s, 'l', occurs);
    cout << ret << endl;
    cout << occurs << endl;
}

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size()) //说明ret还未被改变
                ret = i;
            ++occurs;

        }
    }
    return ret;


}
