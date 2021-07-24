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

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1, k = s;

    vector<int> temp(arr.size(), 0);

    for (; i <= mid && j <= e;)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    for (int k = s; k <= e; k++)
    {
        arr[k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    //Dividing the array
    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    //Sort and Merging
    merge(arr, start, end);
}

int32_t main()
{
    vector<int> arr = {34, 10, -6, 51, 19, 3, -65};

    mergeSort(arr, 0, arr.size() - 1);

    for(int i = 0 ; i < arr.size() ; i++)
        cout<<arr[i]<<" ";
    cout << endl;
}