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

int conquer(int start, int end, vector<int>& arr){
    int mid = (start+end)/2;
    int i = start, j = mid+1, k = start;
    vector<int> temp(arr.size());
    int count = 0;

    while(i <= mid || j <= end){
        if(i <= mid && j <= end){
            if(arr[i] < arr[j])
                temp[k++] = arr[i++];
            else{
                count += (end - j + 1);
                temp[k++] = arr[j++];
            }
        }
        else if(i <= mid)
            temp[k++] = arr[i++];
        else if(j <= end)
            temp[k++] = arr[j++];
    }

    for(int l = start ; l <= end ; l++)
        arr[l] = temp[l];

    return count;
}

int divide(int start, int end, vector<int> &arr)
{
    if (start >= end)
        return 0;

    int mid = (start + end) / 2;
    int x = divide(start, mid, arr);
    int y = divide(mid + 1, end, arr);
    int z = conquer(start, end, arr);

    return x+y+z;
}

int32_t main()
{
    vector<int> arr = {1, 5, 2, 6, 3, 0};
    int i = 0, j = arr.size() - 1;
    cout<<divide(i, j, arr)<<endl;
}