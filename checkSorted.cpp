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

bool solve(int *a, int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[0] < a[1] && solve(a + 1, n - 1))
        return true;

    return false;
}

int32_t main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << solve(a, 9)<<endl;
}