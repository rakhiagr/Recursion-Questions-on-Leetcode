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

vector<string> m = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void solve(int num){
    if(num == 0)
        return;
    
    int x = num%10;
    
    solve(num/10);
    cout<<m[x]<<" ";
}


int32_t main()
{
    int n = 47834;
    solve(n);
    cout<<endl;
}