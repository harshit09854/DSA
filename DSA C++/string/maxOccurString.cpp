#include <iostream>
using namespace std;

char getMaxOccurCharacter(string s)
{

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lower case
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // final maximum occur character
    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{

    string s;
    cin >> s;
    cout << getMaxOccurCharacter(s) << endl;

    return 0;
}