#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* ************* declarations start ************* */
    double principle,pay_per_year,Int_rate,payment_Numerator,payment_Denominator,payment_Denominator1,payment_Denominator2;
    double Exact_payment;
    int n_years,i,j,k;
    double test,exponent;
    double monthly_payment[50],*mptr;
    mptr=&monthly_payment[0];
    string customer_name[50],*cptr;
    cptr=&customer_name[0];
    // double array[5];
    int entries;
    /* ************* declarations finish ************* */
    cout<<"Please Enter Number of customers:\n"<<"****Note**** No more than 50 entries:\n";
    cin>>entries;
    if (entries <=50){
        
        
        for(i=0;i<entries;i++){
            
            cout<<"Enter Customer name"<<endl;
            cin.ignore();
            getline(cin,customer_name[i]);
            
            /* ************* Go to payment equation start ************* */
            
            //reading principle,interest rate,par per year and number of year//
            cout<<"principle\n";
            cin>>principle;
            // array[0]=principle;
            cout<<"Int_rate\n";
            cin>>Int_rate;
            // array[1]=Int_rate;
            cout<<"pay per year\n";
            cin>>pay_per_year;
            // array[2]=pay_per_year;
            cout<<"n_years\n";
            cin>>n_years;
            // array[3]=(float)n_years;
            
            //calculating payment numerator//
            payment_Numerator = (Int_rate*(principle/pay_per_year));
            // calculating payment denominator1//
            payment_Denominator1 = ((Int_rate/pay_per_year)+1);
            //calculating exponent//
            exponent=(-(pay_per_year)*n_years);
            //calculating payment denominator2//
            payment_Denominator2=1-(pow(payment_Denominator1,(exponent)));
            //calculating exact payment //
            Exact_payment=payment_Numerator/payment_Denominator2;
            //cout<<"Exact_payment per month up to four decimal point is equal to = "<< Exact_payment<<endl;
            
            /* ************* payment equation finished ************* */
            monthly_payment[i]=Exact_payment;      // assign Exact payment equation to Monthly Payment array
        }   //End of  Entries For Loop
        
        /* ************* printing customer monthly payments ************* */
        for (int k=0;k<entries;++k){
            cout<<k+1<<".Customer Name : "<<*(cptr+k)<<"\n";
            cout<<"  Monthly Payment : "<<*(cptr+k)<<"\n";
        }  // End of Printing for Loop 
    } 
    else {
        cout<<"enter the required number\n";
    }
    
    
    
    cout<<endl;
    
    return 0;
}
