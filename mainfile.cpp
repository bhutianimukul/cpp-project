#include<iostream>
#include<conio.h>
#include"transaction.h"
#include<time.h>
using namespace std;
void welcome(){
	system("color E");
 cout<<"\n\n\n\n\n";
  cout<<"\t\t\t\t\t\t   \\       /     ________             _________   "<<endl;
  cout<<"\t\t\t\t\t\t    \\     /    |                     |            "<<endl;
  cout<<"\t\t\t\t\t\t     \\   /     |                     |            "<<endl;
  cout<<"\t\t\t\t\t\t      \\ /      |________             |_________   "<<endl;
  cout<<"\t\t\t\t\t\t       |       |                               |   "<<endl;
  cout<<"\t\t\t\t\t\t       |       |                               |   "<<endl;
  cout<<"\t\t\t\t\t\t       |       |_________            __________|   "<<endl;          
  cout<<endl;
  cout<<"\t\t\t\t\t\t                  _______             _                                            "<<endl;
  cout<<"\t\t\t\t\t\t                 |        |          / \\        |\\      |   |    /               "<<endl;
  cout<<"\t\t\t\t\t\t                 |        |         /   \\       | \\     |   |   /                "<<endl;
  cout<<"\t\t\t\t\t\t                 |        |        /     \\      |  \\    |   |  /                 "<<endl;
  cout<<"\t\t\t\t\t\t                 |  =====         /-------\\     |   \\   |   | /                  "<<endl;
  cout<<"\t\t\t\t\t\t                 |        |      /         \\    |    \\  |   |  \\                "<<endl;
  cout<<"\t\t\t\t\t\t                 |        |     /           \\   |     \\ |   |   \\               "<<endl;
  cout<<"\t\t\t\t\t\t                 |_______ |    /             \\  |      \\|   |    \\              "<<endl;
 
}
int main(){
	srand(time(0)); 
	
	Transaction a1;
	cout<<"\n\n\n";

	

 int ch1;
 label5:
 		welcome();
 	
 cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t MAIN MENU "<<endl<<endl;
   cout<<"\t\t\t\t\t   1. Create Account"<<endl<<endl;
   cout<<"\t\t\t\t\t   2. Sign in"<<endl<<endl;
    cout<<"\n\n\t\t\t\t\t Enter your choice : ";
   cin>>ch1;

    
  
  
 
   switch(ch1)
    {
       case 1:system("cls");
                  mark0:
                cout<<endl<<endl<<endl<<endl;
                welcome();
	            a1.accntgetdata();
	            cout<<"\nREDIRECTING TO MAIN MENU";
	            sleep(2);
	            system("cls");
	            
	           goto label5;
                break;
       case 2:
       	        label6:
       	         string password2;
       	         int accnt2;
               
                 cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter Account No : ";
			     cin>>accnt2;
			     cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Enter Password : ";
	
				cin>>password2;
				
			
				
			
		if((a1.password == password2)&&(a1.accnt == accnt2) ){
		
				 	int ch2;
				 	label4:
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 1. Deposit Amount ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 2. Withdraw Amount ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 3. Balance Enquiry ";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 4. Check Book Facility";
    
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 5. Account Info";
     cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t 6. Sign Out(s)";
      cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t CREATED BY : MUKUL BHUTIANI ";
     cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t  Enter your choice : ";
     cin>>ch2;
    char ch3;
     switch(ch2)
     { 
       case 1: system("cls");
       welcome();
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                
	            a1.deposit();
	            getch();
	            sleep(3);
	           
	            goto label4;
                break;
       case 2:system("cls");
       welcome();
                
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.withdraw();
	            getch();
	            sleep(3);
	           
	            goto label4;
                break;
       case 3:system("cls");
              welcome();
                
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	            a1.blncenquiry();
	            getch();
	            
	            sleep(3);
	            
	            
	            goto label4;
                break;
       case 4:  system("cls");
              welcome();
	            a1.checkbk();
                getch();
               sleep(3);
	            
      
	            goto label4;
                break;
       
       case 5:system("cls");
              welcome();
	          a1.info();
              sleep(3);
	            getch();
	            goto label4;
	            break;         
       case 6:system("cls");
       
             
               	goto label5;
			   
			   
               
	           
      
	            
       default: cout<<"\n\n\n\t\t\t Invalid Choice ";
       break;
     }
   
  
    
}

else{
	char c;
	cout<<"\t\t\t\t\t\t\t\tNO SUCH ACCOUNT FOUND ";
	
	cout<<"\n TO CREATE NEW ACC PRESS 'R'  " ;
	cin>>c;
	if(c=='r'||c=='R'){
		goto mark0;
	}else{
		
	
    
	goto label6;
}
}
return 0;
	
}
}
