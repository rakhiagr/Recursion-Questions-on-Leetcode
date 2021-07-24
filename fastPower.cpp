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

int calculatePower(int a, int b)
{
    if (b == 0)
        return 1;

    int res = calculatePower(a, b / 2);
    res *= res;
    if ((b & 1) != 0)
        return res * a;
    else
        return res;
}

int32_t main()
{
    int a = 2, b = 9;
    cout << calculatePower(a, b) << endl;
}