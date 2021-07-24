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

bool solve(int start, int end, vector<int> arr, int target){
    if(start > end)
        return false;

    int mid = (start+end)/2;

    if(arr[mid] == target)
        return true;
    else if(arr[mid] < target)
        return solve(mid+1, end, arr, target);
    else
        return solve(start, mid-1, arr, target);
}

int32_t main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 8, 12, 24, 46, 89};
    int start = 0;
    int end = arr.size()-1;
    int target = 1;
    cout<<solve(start, end, arr, target);

}