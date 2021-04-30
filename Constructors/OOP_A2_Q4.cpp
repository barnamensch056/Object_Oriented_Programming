//4. Create a class which keep track of numbers of its instances.
// Use static data member, constructors and destructors to maintain information about active objects.)
#include<iostream>
using namespace std;

class Asehi{
private:  
static int count;
public:
Asehi(){
    count++;
    cout<<"Constructor of object"<<count<<" is called"<<"\n";
    cout<<"Total no. of active objects "<<count<<"\n\n";
    
}
~Asehi(){
    cout<<"Destructor of object"<<count<<" is called"<<"\n";
    cout<<"Total no. of active objects "<<count<<"\n\n";
    count--;
}
static int getCount(){
    return count;
}
};
int Asehi::count;
int main(){
    Asehi obj1,obj2,obj3;
    
}