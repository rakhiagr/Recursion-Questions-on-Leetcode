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

int solve(int n, char a, char b, char c){
    // int count = 1;
    if(n == 0){
        return 0;
    }

    // count += solve(n-1, a, c, b);
    // // cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    // count += solve(n-1, b, a, c);
    // return count;

    return 2*solve(n-1, a, b, c) + 1;
}

int32_t main()
{
    int n = 3;
    cout<<solve(n, 'A', 'B', 'C')<<endl;

}