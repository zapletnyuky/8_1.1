#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int Count(char* str, char* cs)
{
    if (strlen(str)<2)
        return 0;
int count = 0;
    int j, k;
    for (int i=0; str[i] != '\0'; i++)
    {
        j=0;
        k=i;
        while (cs[j] != '\0')
        {
            if (str[k] == cs[j] && str[k] != '\0')
    {
    j++;
    k++; }
else break;
        }
        if (cs[j] == '\0')
count++;
}
    return count;
}

char* Change(char* str)
{
    size_t len = strlen(str);
    if (len < 2)
        return str;
    char* tmp = new char[len * 2 / 5 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    size_t i = 0;
    while (i < len && str[i + 1] != 0)
    {
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
        {
            strcat(t, "***");
            t += 3;
            i += 5;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    return tmp;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    char cs[]  = "while";
    cout << "String contained " <<Count(str, cs) << " group(s) of 'while' " << endl;
    char* dest = Change(str);
       //cout << "Modified string (param) : " << str << endl;
       cout << "modified string: " << dest << endl;
    return 0;
}

