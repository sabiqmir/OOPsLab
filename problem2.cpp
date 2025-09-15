// The following rules enable an insurance company to determine
// the type of motor-insurance to issue, and the cost of the
// premium with any excesses to its clients.
// If the age of the driver is 25 years or more, the car is manufactured in India and the accident record of the car is good, the
// premium charged is 6 % of the declared value of the car and a
// comprehensive policy is issued. If the accident record is not
// good, the premium is raised to 7 %, the policy holder pays the
// first 100 rupees of a claim and a comprehensive policy is
// issued.
// If the age of the driver is 25 years or more, the car is not
// manufactured in India and the accident record of the car is
// good, the policy holder pays first 100 rupees of any claim and
// a comprehensive policy of 6 % premium is issued. If the above
// conditions apply except that the accident record is not good,
// the premium is raised to 7 % and a third party policy is issued.
// If the age of the driver is less than 25 years, the car is manufactured in India and the accident record of the car is good, the
// premium charged is 6 % of the declared value of the car and a
// comprehensive policy is issued with the holder paying the first
// 100 rupees of a claim.
// If the age of the driver is less than 25 years, the car is not
// manufactured in India and the accident record of the car is
// good, the premium charged is 8 % of the declared value of the
// car, the policy holder pays the first 100 rupees of any claim
// and a comprehensive policy is issued. If the accident record is
// not good and all other conditions apply, then considering the
// risk, no policy car be taken out.
// Assume that if a person has not had an accident in the last three
// years then the condition of the car is considered good. Write a
// program to output the following:
// (a) type of motor insurance policy
// (b) the amount of the premium
// (c) excess payable on any claim if applicable 
#include <iostream>
using namespace std;
int main()
{
    int op,amount,age,car;
    cout<<"Enter Age : "<<endl;
    cin>>age;
    if (age >=25) {
    age =1;
    }
    else{
    age=2;
    }
    cout<<"Enter declared value of the car: "<<endl;
    cin>>amount;
    cout<<"Condition of the Car: "<<endl<<"1.No Accident in last 3 years"<<endl<<"2.Had an Accident in last 3 years"<<endl;
    cin>>op;
    cout<<"Car Manifacture: "<<endl<<"1.In India"<<endl<<"2.OutSide India"<<endl;
    cin>>car;
    switch (age)
    {
    case 1:
        if (car == 1)
        {
            if (op==1)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 6% of car value "<<amount*0.06<<endl;
                
            }
            if (op==2)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 7% of car value "<<amount*0.07<<endl;
                cout<<"Excess Payable = 100 rs";
            }
        }
        if (car == 2)
        {
            if (op==1)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 6% of car value "<<amount*0.06<<endl;
                cout<<"Excess Payable = 100 rs";
            }
            if (op==2)
            {
                cout<<"3rd party policy issued "<<endl<<"Premium Charged 7% of car value "<<amount*0.07<<endl;
            }
        }
        break;
    case 2:
    if (car == 1)
        {
            if (op==1)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 6% of car value "<<amount*0.06<<endl;
                cout<<"Excess Payable = 100 rs";
            }
            if (op==2)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 7% of car value "<<amount*0.07<<endl;
            }
        }
    if (car == 2)
        {
            if (op==1)
            {
                cout<<"Comprehensive policy issued "<<endl<<"Premium Charged 8% of car value "<<amount*0.08<<endl;
                cout<<"Excess Payable = 100 rs";
            }
            if (op==2)
            {
                cout<<"No Policy Available for such car condition! "<<endl;
            }
        }

    
    default:
        break;
    }


}