#include<iostream>
using namespace std;
class Area{
    public:
    float length,breadth,radius;
    void findArea(float length,float breadth){
        float area=length*breadth;
        cout<<"Area of rectangle is: "<<area<<endl;
    }
    void findArea(float radius){
        cout<<"Area of circle: "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Area ar;
    ar.findArea(7.8);
    ar.findArea(5.6,7.5);
}