#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float principle,pay_per_year,Int_rate,payment_Numerator,payment_Denominator,Exact_payment;
   int n_years;
   cout<<"Int_rate\n";
   cin>>Int_rate;
   cout<<"principle\n";
   cin>>principle;
   cout<<"pay per year\n";
   cin>>pay_per_year;
   cout<<"n_years\n";
   cin>>n_years;
   payment_Numerator = Int_rate*(principle/pay_per_year);
   payment_Denominator = 1-((Int_rate/pay_per_year)+1);
   Exact_payment=payment_Numerator/payment_Denominator;
   cout<<"Exact Payment is \n"<<Exact_payment<<"\n";
   return 0;
}

