#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* ************* declarations start ************* */
   float principle,pay_per_year,Int_rate,payment_Numerator,exact_payment,payment_Denominator,payment_Denominator1,payment_Denominator2;
   float *principle_pointer,arr_pinciple[50];
   float *interest_pointer,arr_interest[50];
   float *rate_per_year_pointer,arr_rate_per[50];
   float *exact_payment_pointer,arr_exact_payment[50];
   int *n_years_pointer,arr_n_years[50];
   string *customer_name_pointer,arr_customer_name[50];
   
   int n_years,i;
   float test,exponent;
    string customer_name;
    /* ************* declarations finish ************* */
    
     for(i=1;i<=1;i++){
         
    cout<<"enter name"<<endl;
    getline(cin,customer_name);
    customer_name_pointer=&arr_customer_name[i];
    *customer_name_pointer=customer_name;
   /* ************* Go to payment equation start ************* */
   
   //reading principle,interest rate,par per year and number of year//
   cout<<"principle\n";
   cin>>principle;
   principle_pointer=&arr_pinciple[i];
  *principle_pointer=principle;
  
   
   cout<<"Int_rate\n";
   cin>>Int_rate;
   interest_pointer=&arr_interest[i];
   *interest_pointer=Int_rate;
   
   cout<<"pay per year\n" ;
   cin>>pay_per_year;
   rate_per_year_pointer=&arr_rate_per[i];
   *rate_per_year_pointer=pay_per_year;
   
   cout<<"n_years\n";
   cin>>n_years;
   n_years_pointer=&arr_n_years[i];
   *n_years_pointer=n_years;
   
   //calculating payment numerator//
   payment_Numerator = (Int_rate*(principle/pay_per_year));
   //calculating payment denominator1//
  payment_Denominator1 = ((Int_rate/pay_per_year)+1);
  //calculating exponent//
    exponent=(-(pay_per_year)*n_years);
      //calculating payment denominator2//
  payment_Denominator2=1-(pow(payment_Denominator1,(exponent)));
    //calculating exact payment //
   exact_payment=10*(payment_Numerator/payment_Denominator2);
  // cout<<"Exact_payment per month up to four decimal point is equal to = "<< exact_payment<<endl;
   
    /* ************* payment equation finished ************* *?
 
    /*  ************* printing customer monthly payments ************* */
     }
     for(int a=0;arr_pinciple[a];a++)
        cout<<arr_pinciple[a]<<endl;
     
   return 0;
}

