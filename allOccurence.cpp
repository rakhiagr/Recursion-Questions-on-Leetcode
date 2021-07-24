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

void allOccurences(int arr[], int x, int n, vector<int> &out, int idx)
{
    if (idx == n - 1)
        return;

    if (arr[idx] == x)
    {
        out.push_back(idx);
    }
    allOccurences(arr, x, n, out, idx + 1);
}

int32_t main()
{
    int arr[] = {1, 3, 6, 8, 9, 34, 64, 9, 23};
    int x = 9;
    int n = sizeof(arr) / sizeof(int);
    vector<int> out;
    int i = 0;

    allOccurences(arr, x, n, out, i);

    for (int k : out)
    {
        cout << k << " ";
    }
    cout << endl;
}