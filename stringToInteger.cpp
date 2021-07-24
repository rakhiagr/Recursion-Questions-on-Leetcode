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

int solve(int i, string str){
    if(i < 0)
        return 0;
    
    int x = str[i] - '0';
    int ans = solve(--i, str);
    return ans*10+x;
}

int32_t main()
{
    string str = "387468";
    cout<<solve(str.size()-1, str)<<endl;

}