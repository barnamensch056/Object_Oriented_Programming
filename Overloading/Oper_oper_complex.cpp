/*You need to overload operators + and << for the Complex class.

The operator + should add complex numbers according to the rules of complex addition:

(a+ib)+(c+id) = (a+c) + i(b+d)  
Overload the stream insertion operator << to add "a+ib" to the stream:

cout<<c<<endl;
The above statement should print "" followed by a newline where a=c.a  and b=c.b*/
//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

Complex operator+(Complex &t,Complex &c){
    Complex temp;
    temp.a=t.a+c.a;
    temp.b=t.b+c.b;
    return temp;
} 
/* We will pass our operator overloading function two parameters: 
one is going to be a reference to our ostream object, and the other one 
is going to be a reference to our custom object.*/

ostream& operator<<(ostream &out,Complex &c){
    out<<c.a<<"+i"<<c.b<<endl;
    return out;
}
/*To do that, we will write a function that will return a reference 
to the output stream object (ostream), and then use the operator keyword,
 followed by the insertion operator*/

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
/*Sample Input

3+i4
5+i6
Sample Output

8+i10
Explanation

Given output after performing required operations 
(overloading + operator) is 8+i10.*/