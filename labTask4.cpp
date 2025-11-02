#include <bits/stdc++.h>
using namespace std;

bool isLetterORUnder(char c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '_'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isAlphaNumORUnder(char c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '_') || (c>='0' && c<='9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void identifier(string x)
{
    if(!isLetterORUnder(x[0]))
    {
        cout << "Not An Identifier" << endl;
        return;
    }

    for(int i = 1 ; i < x.length(); i++)
    {
        if(!isAlphaNumORUnder(x[i]))
        {
            cout << "Not An Identifier" << endl;
            return;
        }
    }

    cout << "It's An Identifier" << endl;
}

int main()
{
    string x;
    cin >> x;

    identifier(x);
    return 0;
}