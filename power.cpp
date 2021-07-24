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

unsigned long long int solve(int a, int b){
    if(b == 0)
        return 1;
    
    if(b&1)
        return a * solve(a*a, b/2);
    else    
        return solve(a*a, b/2);
}

int32_t main()
{
    int a = 5, b = 4;
    cout<<solve(a, b);

}