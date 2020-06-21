#include <iostream>
#include <cstdio>
using namespace std;
bool isodd(int i){
    if(i%2 == 1){
        return true;
    }
    return false;
}
int main() {
    // Complete the code.
    const string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num1 = 0,num2=0;
    cin >> num1 >>num2;
    for(int i = num1;i <=num2;i++){
        if(i<=9){
            cout<<word[i] <<endl;
        }else{
            if(isodd(i)){
                cout<<"odd" <<endl;
        }else{
                cout<<"even" <<endl;             
            }
        }
    }
    return 0;
}
