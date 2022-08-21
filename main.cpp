#include <iostream>
#include<string.h>
#include <ctime>
using namespace std;
int main()
{

double amount,amount2;
string cur,cur2;


cout<<"Which currency do you want to convert?\n";

cout<<"the currency are:USD, EURO, PKR, INR, AED: ";

cin>>cur;

cout<<"Enter your amount you want to convert: ";

cin>>amount;

cout<<"Which currency do you want to convert to\n";

cout<<"The currency are:USD, EURO, PKR, INR, AED: ";

cin>>cur2;

  if(cur=="usd")
{


  if(cur2=="euro"){
  amount2=amount/1;
  cout<<amount<<" USD is equal to "<<amount2<<" EURO";
  }
  if(cur2=="pkr"){
  amount2=amount*215.99;
  cout<<amount<<" USD is equal to "<<amount2<<" PKR";
  }
if(cur2=="aed"){
  amount2=amount*3.67;
  cout<<amount<<" USD is equal to "<<amount2<<" AED";
  }
  if(cur2=="inr"){
  amount2=amount*79.93;
  cout<<amount<<" USD is equal to "<<amount2<<" INR";
  }
}
  if(cur=="euro"){



  if(cur2=="usd"){
  amount2=amount/1;
  cout<<amount<<" EURO is equal to "<<amount2<<" USD";
}
  if(cur2=="pkr"){
  amount2=amount*216.79;
  cout<<amount<<" EURO is equal to "<<amount2<<" PKR";
  }
if(cur2=="aed"){
  amount2=amount*3.69;
  cout<<amount<<" EURO is equal to "<<amount2<<" AED";
  }
  if(cur2=="inr"){
  amount2=amount*80.22;
  cout<<amount<<" EURO is equal to "<<amount2<<" INR";
  }
}
  if(cur=="aed"){



  if(cur2=="usd"){
  amount2=amount*.27;
  cout<<amount<<" AED is equal to "<<amount2<<" USD";
}
  if(cur2=="pkr"){
  amount2=amount*58.80;
  cout<<amount<<" AED is equal to "<<amount2<<" PKR";
  }
if(cur2=="euro"){
  amount2=amount*.27;
  cout<<amount<<" AED is equal to "<<amount2<<" EURO";
  }
  if(cur2=="inr"){
  amount2=amount*21.76;
  cout<<amount<<" AED is equal to "<<amount2<<" INR";
  }
}
  if(cur=="pkr"){


  if(cur2=="usd"){
  amount2=amount*0.0046 ;
  cout<<amount<<" PKR is equal to "<<amount2<<" USD";
}
  if(cur2=="aed"){
  amount2=amount*.017;
  cout<<amount<<" PKR is equal to "<<amount2<<" AED";
  }
if(cur2=="euro"){
  amount2=amount*.0046;
  cout<<amount<<" PKR is equal to "<<amount2<<" EURO";
  }
  if(cur2=="inr"){
  amount2=amount*.37;
  cout<<amount<<" PKR is equal to "<<amount2<<" INR";
  }
}
  if(cur=="inr")
{


  if(cur2=="usd"){
  amount2=amount*.013;
  cout<<amount<<" INR is equal to "<<amount2<<" USD";
}
  if(cur2=="aed"){
  amount2=amount*0.046;
  cout<<amount<<" INR is equal to "<<amount2<<" AED";
  }
if(cur2=="euro"){
  amount2=amount*.012;
  cout<<amount<<" INR is equal to "<<amount2<<" EURO";
  }
  if(cur2=="pkr"){
  amount2=amount*2.70;
  cout<<amount<<" INR is equal to "<<amount2<<" PKR";
  } }}

