// A number is entered through the keyboard. The number may
// contain 1,2,3,4, or 5 digits. Write a program to find the number
// of digits in the number. 
#include <iostream>
using namespace std;
int main()
{
    int count=0,num,rem;
    cout<<"Enter A number : ";
    cin>>num;
    while (num!=0)
    {
        num = num/10;
        count++;
    }
   
    
    cout<<"Printing the No of Digits in the Entered no: "<<count;

}