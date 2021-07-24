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

void conquer(int start, int end, vector<int> &arr)
{
    int mid = (start + end) / 2;
    int i = start, j = mid + 1, k = start;
    vector<int> temp(arr.size());

    while (i <= mid || j <= end)
    {
        if (i <= mid && j <= end)
        {
            if (arr[i] < arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }
        else if (i <= mid)
            temp[k++] = arr[i++];
        else if (j <= end)
            temp[k++] = arr[j++];
    }

    for (int i = start; i <= end ; i++)
        arr[i] = temp[i];
}

void divide(int start, int end, vector<int> &arr)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    divide(start, mid, arr);
    divide(mid + 1, end, arr);

    conquer(start, end, arr);
}

int32_t main()
{
    vector<int> arr = {2, 19, 1, 43, 23, 10, 8, 89, 41, 38};
    int i = 0, j = arr.size() - 1;
    divide(i, j, arr);

    for (int x : arr)
        cout << x << " ";
    cout << endl;
}