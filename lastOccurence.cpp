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

int solve(int n, int *a, int target){
    if(n == 0)
        return -1;

    int i = solve(n-1, a+1, target);

    if(i == -1){
        if(a[i] == target)
            return 0;
        else
            return -1;
    }
    else{
        return i+1;
    }
}

int32_t main()
{
    int arr[] = {3, 6, 9, 23, 12, 8, 9, 45, 19, 26};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;

    cout<<solve(n-1, arr, target)<<endl;

}