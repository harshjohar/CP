#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        int sz = s.length();
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == 'M')
            {
                ans += 1000;
            }
            if (s[i] == 'D')
            {
                ans += 500;
            }
            if (s[i] == 'C')
            {
                if (i != sz - 1)
                {
                    if (s[i + 1] == 'D')
                    {
                        ans += 400;
                        i++;
                    }
                    else if (s[i + 1] == 'M')
                    {
                        ans += 900;
                        i++;
                    }
                    else
                    {
                        ans += 100;
                    }
                }
                else
                {
                    ans += 100;
                }
            }
            if (s[i] == 'L')
            {
                ans += 50;
            }
            if (s[i] == 'X')
            {
                if (i != sz - 1)
                {
                    if (s[i + 1] == 'L')
                    {
                        ans += 40;
                        i++;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        ans += 90;
                        i++;
                    }
                    else
                    {
                        ans += 10;
                    }
                }
                else
                {
                    ans += 10;
                }
            }
            if (s[i] == 'V')
            {
                ans += 5;
            }
            if (s[i] == 'I')
            {
                if (i != sz - 1)
                {
                    if (s[i + 1] == 'V')
                    {
                        ans += 4;
                        i++;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        ans += 9;
                        i++;
                    }
                    else
                    {
                        ans += 1;
                    }
                }
                else
                {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution S;
    string str = "CDXLVII";
    cout << S.romanToInt(str) << endl;
    return 0;
}