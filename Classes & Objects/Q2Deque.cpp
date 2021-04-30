//A class to implement dequeue data structure with all its functionality
#include <iostream>
using namespace std;
#include<array>
#define SIZE 10

class dequeue{
   int f,r;
   array<int,SIZE>arr;
   public:
   dequeue();
   void insert_at_beg(int );
   void insert_at_end(int );
   void show();
   void delete_fr_front();
   void delete_fr_rear();

};
dequeue::dequeue(){
   f=-1;
   r=-1;
}
void dequeue::insert_at_end(int i){
if(r=SIZE-1){
   cout<<"The dequeue is overflowed";
}
else{
   if(r=-1)
   f=r=0;
   else
   r=r+1;
}
arr[r]=i;
}

void dequeue::insert_at_beg(int i){
if(f==-1){
   f=0;
   arr[f]=i;
}
else if(f!=0){
   f--;
   arr[f]=i;
}
else{
   cout<<"The queue insertion not possible";
}
}

void dequeue::show(){
if(f==-1){
   cout<<"The queue is empty";}
else{  
   for(int i=f;i<=r;i++){

      cout<<arr[i] ;
   }
}
}

void dequeue::delete_fr_front(){
if(f==-1){
   cout<<"The queue is empty";
}
else{
   if(f==r){
      f=-1;
   }
   f=f+1;
}
}
void dequeue::delete_fr_rear(){
if(f==-1){
   cout<<"The queue is empty";
}
else{
   if(f==r){
      r=-1;
   }
   r-=1;
}
};

int main(){
    int c,i;
    dequeue d;
   do
   {
    cout<<"\n1.insert at beginning\n";
    cout<<"2.insert at the end\n";
    cout<<"3.show\n";
    cout<<"4.deletion from beginning\n";
    cout<<"5.deletion from end\n";
    cout<<"6.exit\n";
    cout<<"Enter your choice: ";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"Enter the elemnt inserted at the beg: ";
        cin>>i;
        d.insert_at_beg(i);
        break;
         case 2:
            cout<<"Enter the element to be inserted at end: ";
            cin>>i;
            d.insert_at_end(i);
         break;
         case 3:
            d.show();
         break;
         case 4:
            d.delete_fr_front();
         break;
         case 5:
            d.delete_fr_rear();
         break;
         case 6:
            exit(1);
         break;
         default:
            cout<<"invalid choice";
         break;
    }       
   } while (c!=6);
   return 0;
}