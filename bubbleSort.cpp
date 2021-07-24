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


void swapper(int i, int n, int *arr){
    if(i == n-1)
        return;
    
    if(arr[i] > arr[i+1])
        swap(arr[i], arr[i+1]);
    swapper(i+1, n, arr);
}

void solve(int i, int *arr, int n){
    if(i == n-1)
        return;
        swapper(0, n-i, arr);
    solve(i+1, arr, n);
}


int32_t main()
{
    int arr[] = {3, 6, 9, 23, 12, 8, 9, 45, 19, 26};
    int n = sizeof(arr)/sizeof(int);
    solve(0, arr, n);

    for(int a : arr)
        cout<<a<<" ";
}
