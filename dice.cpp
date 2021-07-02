#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>
#include<random>
using namespace std;
int main(){
    random_device rnd;
    mt19937 mt(rnd());
    uniform_int_distribution<> rand100(1, 6);
    int a=rand100(mt);
    int b=rand100(mt);
    cout<<"Rolling the dice..."<<endl;
    cout<<"Die 1: "<<a<<endl;
    cout<<"Die 2: "<<b<<endl;
    cout<<"Total value: "<<a+b<<endl;
    return 0;
}