#include<iostream>
using namespace std;
#include"Acc.h"

#include<string>
using namespace std;

class Transaction : public Account 
{
  
 
   public:
   
   void display()
    {
      cout<<"\n\n\t\t Account Name is "<<name;
	  cout<<"\n\t\t\t Balance is "<<blnc;
	 
	  }     
	   void deposit()   // Deposit 
    { int amnt=0;
      label1:
	  cout<<"\n\n\t\t\t\t\t\t\t  Enter amount to Deposit : ";
      cin>>amnt;
      
      if(amnt>=1000)
      {
	   blnc=blnc+amnt;
	   
	   }
	   else
	    {
		 cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tAmount Should be Greater than equal Rs.1000 "<<endl<<endl<<endl;
		 goto label1;
		 }
		 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t You have Deposited Successfully ";
		 cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t Current Balance is Rs."<<blnc;
	
	  }   
	  
	  void withdraw()   // Withdraw
	  { int amnt=0;
	    with:
		cout<<"\n\n\t\t\t\t\t\t\t  Enter amount to Withdraw : ";
        cin>>amnt;
      
      
           if(blnc-amnt<0)
            {
			 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t Insufficient Balance ";
             
			  return;
			 }        
		   else{
		   
	        blnc=blnc-amnt;
	   
	     }
	   cout<<"\n\n\n\n\t\t\t\t\t\t\t\t You have Withdrawl Successfully ";
	   cout<<"\n\n\n\n\t\t\t\t\t\t\t\t Current balance is "<<blnc;
      }
      
     void blncenquiry()     // Balance Enquiry
	  {
	    cout<<"\n\t\t\t\t\t\t\t   Name : "<<name;
		cout<<"\n\n\t\t\t\t\t\t\t   Account No : "<<accnt;
		
	    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   Your Available balance is Rs."<<blnc;
		
	   }   
	   void checkbk()
	   {
	     if(type=='c' || type=='C')
	     {
	        system("cls");
	       
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Check Book Facility Available";
	       
		  }
		  else
		  {
		     system("cls");
		   
		      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Check Book Facility Not Available";
		 
		  }
		 } 
		 void info()
		  {
		    system("cls");
		
			system("color d");
			cout<<"\n\n\n\n\n\n\n";
			cout<<"\n\n\t\t\t\t\t\t\t\t Name : "<<name;
			cout<<"\n\n\t\t\t\t\t\t\t\t Account No : "<<accnt;
			cout<<"\n\n\t\t\t\t\t\t\t\t Age : "<<age;
			cout<<"\n\n\t\t\t\t\t\t\t\t Email-Id : "<<email;
			cout<<"\n\n\t\t\t\t\t\t\t\t Mobile NO : "<< phone_number;
			if(type=='S' || type=='s')
			cout<<"\n\n\t\t\t\t\t\t\t\t Type of Account : Saving";
			else
			 cout<<"\n\n\t\t\t\t\t\t\t\t Type of Account : Current";
			cout<<"\n\n\t\t\t\t\t\t\t\t Available Balance : Rs."<<blnc;
			
			
			system("color 7");
		  } 
};
