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

int partitioning(int start, int end, vector<int>& arr){
    int i = start-1, j = start;
    int p = arr[end];

    for(; j < end ; j++){
        if(arr[j] <= p){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}

void divide(int start, int end, vector<int>& arr){
    if(start >= end)
        return;
    
    int p = partitioning(start, end, arr);

    divide(start, p-1, arr);
    divide(p+1, end, arr);
}

int32_t main()
{
    vector<int> arr = {2, 19, 1, 43, 23, 10, 8, 89, 41, 38};
    int i = 0, j = arr.size() - 1;
    divide(i, j, arr);

    for(int x : arr)
        cout<<x<<" ";
    cout<<endl;
}