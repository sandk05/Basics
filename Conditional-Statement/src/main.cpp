#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    // your code goes here
    const string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if((n>0) && (n<=9)){
        cout<<word[n]<<endl;
    }else{
        cout<<"Greater than 9"<<endl;
    }
    return 0;
}
