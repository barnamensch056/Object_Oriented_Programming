/*You have to Create three classes:
Class Vehcile:
Vehicle Class will contain a display() function, which will say "This is a Vehicle".
Class Car:
Car Class will derive the Vehicle Class and overwrite its display() function. it will say "This is a Bike".
Class Bike:
Bike Class will derive the Vehicle Class and overwrite its display() function. it will say "This is a Car".

Now, You will be given an Integer N, which will denote the number of tyres in the vehciles. You have to create an object of the appropriate class according to the value of N and use it display() function.
If N = 2, Create a Bike Object.
If N = 4, Create a Car Object.
Create a Vehicle Object, otherwise.

Input
4
Output
This is a Car*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

class Vehicle{
	public:
void display(){
	cout<<"This is a Vehicle"<<endl;
}
};
class Car:public Vehicle{
	public:
       void display(){
		   cout<<"This is a Car"<<endl;
	   }
};

class Bike:public Vehicle{
	public:
        void display(){
			cout<<"This is a Bike"<<endl;
		}
};
int main()
{
	int N;
	cin>>N;
	if(N==2){
		Bike pulsar;
		pulsar.display();
	}
	else if(N==4){
		Car maruti;
		maruti.display();
	}
	else{
		Vehicle truck;
		truck.display();
	}
	   
}
