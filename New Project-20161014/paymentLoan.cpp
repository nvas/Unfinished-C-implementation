#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* ************* declarations start ************* */
   float principle,pay_per_year,Int_rate,payment_Numerator,payment_Denominator,Exact_payment,payment_Denominator1,payment_Denominator2;
   int n_years,i;
   float test,exponent;
   float monthly_payment;
   string customer_name;
    /* ************* declarations finish ************* */
    
     for(i=0;i<=1;i++){
         
    cout<<"enter name"<<endl;
    getline(cin,customer_name);
    
   /* ************* Go to payment equation start ************* */
   
   //reading principle,interest rate,par per year and number of year//
   cout<<"principle\n";
   cin>>principle;
   cout<<"Int_rate\n";
   cin>>Int_rate;
   cout<<"pay per year\n";
   cin>>pay_per_year;
   cout<<"n_years\n";
   cin>>n_years;
   //calculating payment numerator//
   payment_Numerator = (Int_rate*(principle/pay_per_year));
   //calculating payment denominator1//
  payment_Denominator1 = ((Int_rate/pay_per_year)+1);
  //calculating exponent//
    exponent=(-(pay_per_year)*n_years);
      //calculating payment denominator2//
  payment_Denominator2=1-(pow(payment_Denominator1,(exponent)));
    //calculating exact payment //
   Exact_payment=10*(payment_Numerator/payment_Denominator2);
   cout<<"Exact_payment per month up to four decimal point is equal to = "<< Exact_payment<<endl;
   
    /* ************* payment equation finished ************* */
   //   monthly_payment=Exact_payment;
   // cout<<"customer name"<<"  "<<"monthly payment"<<endl;
   //cout<<customer_name<<"  "<<monthly_payment<<endl;
    }
     /* ************* printing customer monthly payments ************* */
  
    
   return 0;
}

