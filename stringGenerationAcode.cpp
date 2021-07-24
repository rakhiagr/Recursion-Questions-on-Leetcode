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

void solve(int i, int j, string input, string output, vector<string>& res){
    if(i == input.size()){
        res.push_back(output);
        return;
    }

    int first = input[i] - '0';
    char c = (char)(first + 'A' - 1);
    output += c;
    // cout<<output<<endl;
    solve(i+1, j+1, input, output, res);

    if(i+1 < input.size()){
        int second = input[i+1] - 48;
        int n = first * 10 + second;
        if(n <= 26){
            char c = (char)(n + 65 - 1);
            output += c;
            solve(i+2, j+1, input, output, res);    
        }
    }
    return;
}

int32_t main()
{
    string str = "1234";
    vector<string> res;
    string output = "";
    solve(0, 0, str, output, res);

    for(string x : res)
        cout<<x<<endl;
}