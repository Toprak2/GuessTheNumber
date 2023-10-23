#include <iostream>
using namespace std;

int main(){
    int num[4]={0};
    for (auto &&i : num)
    {
        cout<<i;
    }
    
}