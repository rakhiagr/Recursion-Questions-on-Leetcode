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

int solve(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    // if(n == 2)
    //     return 2;
    // if(n == 3)
    //     return 4;

    int x = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(n - (i+1) >= 0)
            x += solve(n - (i+1));
    }
    
    return x;
}

int32_t main()
{
    int n = 4;
    cout<<solve(n)<<endl;

}