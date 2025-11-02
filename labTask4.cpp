#include <bits/stdc++.h>
using namespace std;

bool isKeyWord(string keyWord[], string s)
{
    for(int i=0; i<4; i++)
    {
        if(s == keyWord[i])
        {
            return true;
        }
    }
}

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

void identifier(string x, string keyWord[])
{
    if(!isLetterORUnder(x[0]))
    {
        cout << "Not An Identifier" << endl;
        return;
    }
    if(isKeyWord(keyWord, x))
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

    string keyWord[4] = {"Max", "Min" ,"main", "sort"};

    identifier(x, keyWord);
    return 0;
}