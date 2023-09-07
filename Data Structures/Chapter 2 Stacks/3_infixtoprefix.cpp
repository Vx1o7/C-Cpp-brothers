#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int prec(char c) {
    if (c == '^') {
        return 3;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    else if (c == '+' || c=='-') 
    {
        return 1;
    }
    else {
        return -1;
    }
}

string intope (string s)
{
    reverse (s.begin(), s.end());
    stack<char> stak;
    string result;

    for (int i=0; i<s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <='z') && (s[i] >= 'A' && s[i] <='Z'))
        {
            result+=s[i];
        }
        else if (s[i] == ')')
        {
            stak.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!stak.empty() && stak.top() != '(')
            {
                result+=stak.top();
                stak.pop();
            }
            if (!stak.empty())
            {
                stak.pop();
            }
        }
        else {
            while (!stak.empty() && (prec(stak.top()) >= prec(s[i]))) {
                result+=stak.top();
                stak.pop();
            }
            stak.push(s[i]);
        }
    }
    while (!stak.empty())
        {
            result+=stak.top();
            stak.pop();
        }
    reverse (s.begin(), s.end());
    return result;
}

int main ()
{
    cout<<intope("(a-b/c)*(d+e*f)")<<endl;
    return 0;
}