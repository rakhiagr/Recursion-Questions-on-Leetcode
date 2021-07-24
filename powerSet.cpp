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

void solve(int i, string s, vector<string>& res){
    if(i == s.size())
        return;
    int n = res.size();
    // cout<<n<<endl;
    for(int j = 0 ; j < n ; j++){
        string temp = res[j]+s[i];
        // cout<<temp<<endl;
        res.push_back(temp);
    }
    solve(i+1, s, res);
}

int32_t main()
{
    string str = "abc";
    vector<string> res;
    res.push_back("");
    res.push_back(str.substr(0, 1));
    solve(1, str, res);

    for(auto x : res)
        cout<<x<<endl;

}