#include <iostream>
using namespace std;

int main ()

{
int number [5];
int*x;
cout << "Enter some integers: "<<endl <<endl;
for (int s=0; s<5; s++)
{

cout << "Input an integer: " << ": ";
cin >> number [s];


}
 
cout <<endl <<endl;
for (int s=0; s<5;s++)



{

*x = number[s];
cout << "The Integer is: " << ": "<<*x;
cout <<endl<<endl;



x++;

}






}
