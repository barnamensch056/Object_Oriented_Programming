//Pogram to show the active constructor and destructor 
//function of an object
#include<iostream>
using namespace std;

class Gamma{
 
    public:
       int static count;
    Gamma(){
        count+=1;
        cout<<"Object"<<count<<" is created "<<endl;
    }
    ~Gamma(){
        cout<<"Object"<<count<<" is destroyed"<<endl;
        count-=1;
    }

};
int Gamma::count=0;

int main(){
    Gamma gamma1,gamma2,gamma3,gamma4,gamma5;
    cout<<endl;
}