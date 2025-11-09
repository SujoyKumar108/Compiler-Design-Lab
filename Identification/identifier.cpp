#include <bits/stdc++.h>
using namespace std;

bool isKeyWord(string keyWord[], string s)
{
    for(int i=0; i<10; i++)
    {
        if(s == keyWord[i])
        {
            return true;
        }
    }
    return false;
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

bool identifier(string x, string keyWord[])
{
    if(!isLetterORUnder(x[0]))
    {
        //cout << "Not An Identifier" << endl;
        return false;
    }
    if(isKeyWord(keyWord, x))
    {
        //cout << "Not An Identifier" << endl;
        return false;
    }

    for(int i = 1 ; i < x.length(); i++)
    {
        if(!isAlphaNumORUnder(x[i]))
        {
            //cout << "Not An Identifier" << endl;
            return false;
        }
    }

    //cout << "It's An Identifier" << endl;
    return true;
}
void labTask4()
{
    string keyWord[10] = {"MAX", "MIN" ,"main", "sort", "int", "char", "true", "false","double","bool"};
    vector<string> id, nid;

    string x;
    ifstream file("sample.txt");
    while (file >> x)
    {
        if(identifier(x, keyWord) == true)
        {
            id.push_back(x);
        }
        else
        {
            nid.push_back(x);
        }
    }

    cout << "Identifiers: "<< endl;
    for(string x : id)
    {
        cout << x << endl;
    }

    cout << endl << endl;
    cout << "Non Identifiers: " << endl;
    for(string x : nid)
    {
        cout << x << endl;
    }


    return ;
}
