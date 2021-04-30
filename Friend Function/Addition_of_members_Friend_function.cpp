//Addition of members of two different classes using friend Function

#include<iostream>
using namespace std;

class C1;//Forward declarartion

class C2{
    int n1;
    public:
       C2(int l){n1=l;}
       friend int member_sum(C1 a,C2 b);//friend function
};

class C1{
    int n2;
    public:
      C1(int k){n2=k;}//Constructor function to take the parameters
      friend int member_sum(C1 a,C2 b);
};

int member_sum(C1 a,C2 b){
    return (a.n2+b.n1);
}

int main(){
    C1 l=12;
    C2 m=13;
    int f=member_sum(l,m);
    cout<<"The sum of two member class is "<<f<<endl;
    return 0;

}