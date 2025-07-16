#include <bits/stdc++.h>

bool isArmstrong(int num)
{
    int arm = 0;
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int cha = ch - '0';
        arm += pow(cha, s.size());
    }
    if (arm == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}