#include<iostream>
#include<string>
#include"user.h"
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Account : public User{
	  public:
	  int accnt;
	  string password;
   protected:
  
    char type;
    
    char choice;
    int blnc,i;
   public:
   
    void accntgetdata(){
    	usergetdata();
    
	   mark1:
	    cout<<"\n\t\t\t\t Enter type of Account (C/S) : ";
	  cin>>type;
	  blnc=0;
	  if(type=='s' || type =='S')
	  {
	   five:
	   cout<<"\n\t\t\t\t\t Enter Initial Amount (>= Rs.500) : ";
	   cin>>blnc;
	   if(blnc<500){
	     cout<<"\n\t\t\t\t Please Enter greater than Rs.500"<<endl;
	     goto five;
	     }
	   }
	  else if(type=='C' || type =='c')
	  {
	    ten:
	    cout<<"\n\t\t\t\t\t Enter Initial Amount (>= Rs.1000) : ";
		cin>>blnc;
		if(blnc<1000){
	     cout<<"\n\t\t\t\t Please Enter greater than Rs.1000"<<endl;
		  goto ten;
		  }
	  }
	  
	  else
	  {
	    cout<<"\n\t\t\t\t Try Again Press 'c' for Current Account , 's' for Saving Account"<<endl;
		goto mark1;
	  }	 
	  cout<<"\n\t\t\t\t\tEnter password";
  		cin>>password;
	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Press 'Y' to Confirm 'N' to retry  : ";
	   cin>>choice;
	   if(choice=='y' || choice=='Y')    
	   {
	      cout<<"\n\n\n\t\t\t\t\t    Account Successfully Created ";
	      	accnt  = (rand() % 10000);
	       cout<<"\nYour Account Number is \t"<<accnt;
	      getch();
	    }
		else
		{
		     system("cls");
		    
		     cout<<endl<<endl<<endl<<endl;
			 accntgetdata(); 
		}
	}
	

	  
	
};
