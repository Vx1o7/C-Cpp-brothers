#include <iostream>
#include <stack>
using namespace std;

int prec (char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else {
        return -1;
    }
}

string intopo (string s)
{
    stack<char> str;
    string result;

    for (int i=0; i<s.length(); i++)
    {
        if ((s[i] >= 'a'&& s[i]<='z' ) || s[i] >= 'A' && s[i]<='Z')
        {
            result+=s[i]; //Case 1: Agar string me koi operands aa jaate
        }
        else if (s[i] == '(')
        {
            str.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!str.empty() && str.top()!='(')
            {
                result+=str.top();  // Case 2: Opening and Closing Brackets
                str.pop();
            }
            if (!str.empty()) {
                str.pop();
            }
        }
        else {
            while (!str.top() && (prec(str.top()) > prec(s[i]))) {
                result+=str.top();
                str.pop();
            }
        }
        str.push(s[i]);     
    }
    while (!str.empty())
    {
        result+=str.top();
        str.pop();
    }
    return result;
}

int main ()
{
    cout<<intopo("(a-b/c)*(d+e*f)")<<endl;
    return 0;
}