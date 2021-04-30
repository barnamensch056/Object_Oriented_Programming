#include <iostream>
using namespace std;
void inputs(char *str,int indent=-1);
int main(){
    inputs("This line will indent by 12",12);
    inputs("this line will indent by 12 by default");
    inputs("this line will indent by 5 by default");
    inputs("This line will indent by 5",5);
    
return 0;
}
void inputs(char *str,int indent){
    static int i=0;
    if(indent>=0)
        i=indent;
    else
    indent=i;
    for(;indent;indent--)cout<<" ";
    cout<<str<<endl;
    
}