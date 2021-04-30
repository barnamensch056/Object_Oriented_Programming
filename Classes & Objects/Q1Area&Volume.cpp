//Create a room object class and display its area and volume
#include<iostream>
using namespace std;

class Room{

public:
double height;
double length;
double breadth;

void calculateArea(){
 int result=length*breadth;
 cout<<"Area of the room:" <<result<<endl;  
}

void calculateVolume(){
    int volume=length*breadth*height;
    cout<<"Volume of the room:"<<volume<<endl;}
};
int main(){
    Room room1;

    room1.length = 8.5;
    room1.breadth = 7.8;
    room1.height = 9.2;
    room1.calculateArea();
    room1.calculateVolume(); 

    return 0;

}