#include<iostream>
using namespace std;
namespace first
{
    auto val = 200;
}
int main()
{
    int val = 400;
    cout<<val<<'\n';
    cout<<first::val<<'\n';
    return 0;
}