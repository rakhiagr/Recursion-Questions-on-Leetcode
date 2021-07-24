#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <stack>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <sstream>
#include <iomanip>
using namespace std;

string pi = "3.14";

string solve(int idx, string str)
{
    if (str[idx] == str.size() || str[idx + 1] == str.size())
        return str;

    if (str[idx] == 'p' && str[idx + 1] == 'i')
    {
        int j = idx + 2;
        while (str[j] != '\0')
            j++;
        while (j >= idx + 2)
        {
            str[j + 2] = str[j];
            j--;
        }
        int i = 0;
        while (i < 4)
        {
            str[idx] = pi[i];
            idx++, i++;
        }
        return solve(idx, str);
    }
    else{
        return solve(idx + 1, str);
    }
}

int32_t main()
{
    string str = "xpighpilmpipi";
    cout<<solve(0, str)<<endl;
    
}