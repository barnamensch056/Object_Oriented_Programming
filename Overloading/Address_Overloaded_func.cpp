#include <iostream>
using namespace std;
int myfunc(int a);
int myfunc(int a,int b);
int main(){
    int (*f)(int a);
    f=myfunc;
    cout<<f(321)<<endl;
    cout<<f<<endl;
    return 0;
}
int myfunc(int a){
    return a;
}
int myfunc(int a,int b){
    return a*b;
}