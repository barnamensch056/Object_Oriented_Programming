//3. Using COPY constructors find the values of three objects).
#include<iostream>
using namespace std;
class AK{
     int x;
     int y;
     int z;
     public:
     AK(){}
     AK(int a,int b,int c){
         x=a;
         y=b;
         z=c;
         cout<<"Parameterized constructors called"<<"\n";
     }
     AK(const AK&old){
         x=old.x;
         y=old.y;
         z=old.z;
         cout<<"Copy constructors are called"<<"\n";
     }
     int getX() {return x;}
     int getY(){return y;}
     int getZ(){return z;}
     
};
int main(){
    AK p1(10,16,24);
    cout<<"p1.x: "<<p1.getX()<<" p1.y: "<<p1.getY()<<" p1.z: "<<p1.getZ()<<"\n";
    AK p2(p1);
    cout<<"p2.x: "<<p2.getX()<<" p2.y: "<<p2.getY()<<" p2.z: "<<p2.getZ();
    return 0;
}