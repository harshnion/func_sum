#include <iostream>
using namespace std;
int sum(int a,int b, int c){
    return a+b+c;
}
int main()
{
    int a,b,c,d,e;
    cin>>a>>c>>d;
    b=sum(a,c,d);
    cout<<b;
    return 0;
}
