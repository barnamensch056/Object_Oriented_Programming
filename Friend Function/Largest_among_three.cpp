//Program to find the biggest of three numbers using friend function.

#include<iostream>
using namespace std;

class Largest{
    int x,y,z;
    public:
    void input(){
        cout<<"Enter three numbers:-";
        cin>>x>>y>>z;
    }
    friend void find(Largest L);
};

void find(Largest L){
    if(L.x>L.y && L.x>L.z){
        cout<<"The greatest number is "<<L.x<<endl;
    }
    else if(L.y>L.x && L.y>L.z){
        cout<<"The greatest number is "<<L.y<<endl;
    }
    else{
        cout<<"The greatest number is "<<L.z<<endl;
    }
}

int main(){
    Largest K;
    K.input();
    find(K);
    return 0;
}