#include <limits.h>
#include <queue>
#include <set>
#include <unordered_set>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;

void generateSub(string input, string output, int i, int j)
{
    if (i == input.size())
    {
        cout << output << "\t";
        cout<<endl;
        return;
    }
    //Including the current char
    generateSub(input, output + input[i], i+1, ++j);
    //Excluding the current char
    generateSub(input, output, i+1, j);
}

int main()
{
    string input = "abc";
    string output = "";
    int i = 0, j = 0;
    generateSub(input, output, i, j);
    return 0;
}

// void generateSub(string input, string output, int i)
// {
//     if (i == input.size())
//     {
//         cout << output << "\t";
//         cout<<endl;
//         return;
//     }
//     //Including the current char
//     generateSub(input, output + input[i], i + 1);
//     //Excluding the current char
//     generateSub(input, output, i + 1);
// }

// int main()
// {
//     string input = "abc", output = "";
//     int i = 0;
//     generateSub(input, output, i);
//     return 0;
// }
