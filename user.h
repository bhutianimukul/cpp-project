#include<iostream>
#include<string>

#include<unistd.h>
using namespace std;
class User{
	protected:
	string name;
	string email;
	string phone_number;
	int age;
	public:
		void usergetdata(){
			cout<<"\n\t\t\t\t\tEnter name:";
			cin>>name;
			mark:
			cout<<"\n\t\t\t\t\tEnter email id";
			cin>>email;
			  size_t at = email.find('@');
    if (at == string::npos)
    {
        cout << "\nINVALID\n";
         system("color D");
		sleep(2);
        cout<<"TRY AGAIN\n";
        goto mark;
    }

    size_t dot = email.find('.', at + 1);
    if (dot == string::npos)
    {
        cout << "\nINVALID\n";
        system("color U");
        sleep(2);
         cout<<"TRY AGAIN\n";
         
        goto mark;
       
    }
		    label:
		    	 system("color A");
			cout<<"\n\t\t\t\t\tEnter mobile number";
            cin>>phone_number;
            cout<<"VALIDATING MOBILE NUMBER........";
            sleep(2);
			int flag2;
			  for(int i=0;i<phone_number.length();i++)
  {
    if(phone_number[i]-48>=0 && phone_number[i]-48<=9)
    {
      flag2=1;
      continue;
      
    }
    else{
    	flag2=0;
    	break;
	}
    
    
  }
  if(flag2==1 && phone_number.length()==10)
  {   
     
     sleep(2);
     cout<<"\nEntered number is correct";
     system("color B");
  }
  
  else if(flag2==0)
  {
    cout<<"\n\t\t\t\t\tYou have entered wrong number.\n";
    cout<<"TRy AGAiN";
     system("color C");
	goto label;
    
   
  }
  else if(phone_number.length()!=8){
  	cout<<"\n\t\t\t\t\tYou have entered wrong number.\n";
    cout<<"TRy AGAiN";
     system("color C");
	goto label;
    
  	
  }


			cout<<"\n\t\t\t\t\tEnter age";
			cin>>age;
			if(age<18){
				cout<<"Opening a child account";
				
			}
			}
		void entername(){
			cout<<name;
			
		}	
};
