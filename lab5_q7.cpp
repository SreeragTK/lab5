//include library
#include <iostream>
using namespace std;
//include main function
int main(){
//include variables
char ab;
//assign value to the variable
cout<<"Enter something:";
cin>>ab;
//apply conditions
if ((ab>='a'&& ab<='z') || (ab>='A' && ab<'Z'))
{cout<<"The entered things only related to alphabets";}
else
{cout<<"the entered things include non-alphabets";}
return 0;
}
