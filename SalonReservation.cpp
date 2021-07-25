#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
#include <ctime>
#include<string>
#include<iomanip>
#include<stdio.h>
using namespace std;
main()

{

           
           
		   string name;
		   int pay;
		   string response="";
	    	string choosee="";
	    	char transaction='Y',y,N,n;
		int num1=0,num2=0,num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0, numA=0, numB=0, numC=0, numD=0, numE=0, numF=0, numG=0,
	numH=0, numI=0, numJ=0, numK=0, numL=0, numM=0, numN=0, numO=0, numP=0, numQ=0, numR=0, numS=0, numT=0, numU=0, numV=0, numW=0;
	    int Change1=0, Change2=0, Change3=0, Change4=0, Change5=0, Change6=0, Change7=0, Change8=0, Change9=0, ChangeA=0, ChangeB=0, ChangeC=0, ChangeD=0,
	ChangeE=0, ChangeF=0, ChangeG=0, ChangeH=0, ChangeI=0, ChangeJ=0, ChangeK=0, ChangeL=0, ChangeM=0, ChangeN=0, ChangeO=0, ChangeP=0, ChangeQ=0, ChangeR=0,
	ChangeS=0, ChangeT=0, ChangeU=0, ChangeV=0, ChangeW=0;
	        int q;
	        string hairTREATMENT="";
	        string hairSTYLING="";
	        string hairCOLOR="";
	        string nailSPA="";
	        string massage="";
	        string waxing="";
	        string makeup="";
	          double total;
	int totalchange=0;
	int c;
	

	 

	system ("cls");
		
	
	cout<<"\t\t\tSALON TRANSACTION SYSTEM\n\n\n"<<endl;
	
	
	cout<<"\tEnter your name: ";
		getline(cin,name);



		
		system ("cls");
		

salon:    
    cout<<"\t\t\tWELCOME TO OUR 'SALON TRANSACTION SYSTEM'\n\n\n";Beep(2000,150);
    cout<<"\t\t\tWELCOME "<<name<<"\t!!\n\n\n";Beep(2000,150);


      salon1:
{

    
    cout<<"\t\tMAIN MENU:\n"<<endl;   
	cout<<"\t\t*****************************************"<<endl;		
	cout<<"\t\t*           Choose Your Order           *"<<endl;
	cout<<"\t\t*---------------------------------------*"<<endl;	
	cout<<"\t\t*    [1] Hair Treatment                 *\n";
	cout<<"\t\t*    [2] Hair Styling                   *\n";
	cout<<"\t\t*    [3] Hair Color                     *\n";
	cout<<"\t\t*    [4] Nail Spa                       *\n";
	cout<<"\t\t*    [5] Massage                        *\n";
	cout<<"\t\t*    [6] Waxing                         *\n";
	cout<<"\t\t*    [7] Make Up                        *\n";
	cout<<"\t\t*                                       *\n";
	cout<<"\t\t*****************************************\n";
	
	cout<<"--------------------------"<<endl;
		
	cout<<"Enter Choice: ";
	cin>>c;
	


     switch(c)
case 1:
	hairTreatment:
{

    cout<<"\tYOU'VE CHOSEN [1]\n"<<endl;
		
    cout<<"\t\t*****************************************"<<endl;
	cout<<"\t\t*            HAIR TREATMENT             *"<<endl;
	cout<<"\t\t*---------------------------------------*"<<endl;
	cout<<"\t\t*  Services:             |   Prices:    *"<<endl;              
	cout<<"\t\t*  [1] Hair Rebonding    |  P 1000      *\n";
	cout<<"\t\t*  [2] Curly             |  P 560       *\n";
	cout<<"\t\t*  [3] Hot oil           |  P 100       *\n";
	cout<<"\t\t*  [4] Hair Spa          |  P 150       *\n";
	cout<<"\t\t*                        |              *\n";
	cout<<"\t\t*****************************************\n\n";
 


    notabove:
  
	
	cout<<"-----------------------------------------"<<endl;
	cout<<" None of the above?\n"<<endl;
    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
    cout<<"Type (2) if not"<<endl;
    
    
    cout<<"---------------------------------"<<endl;
    cin>>choosee;
    if(choosee=="1")
    {
      system ("cls");
	        goto salon1;
    }
	else if (choosee=="2")
    {
            goto hairT;
    }
    else
	{
	system ("cls");
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairTreatment;
        goto notabove;
    }
             
          hairT:
 
    {
         system ("cls");
          
          hairTREATMENT2:
          cout<<"\tBack to choose\n";
          
          cout<<"\t\t*****************************************"<<endl;
	      cout<<"\t\t*            HAIR TREATMENT             *"<<endl;
	      cout<<"\t\t*---------------------------------------*"<<endl;
	      cout<<"\t\t*           Choose Your Order           *"<<endl;
	      cout<<"\t\t*  Services:             |   Prices:    *"<<endl;              
	      cout<<"\t\t*  [1] Hair Rebonding    |  P 1000      *\n";
	      cout<<"\t\t*  [2] Curly             |  P 560       *\n";
	      cout<<"\t\t*  [3] Hot oil           |  P 100       *\n";
	      cout<<"\t\t*  [4] Hair Spa          |  P 150       *\n";
	      cout<<"\t\t*                        |              *\n";
	      cout<<"\t\t*****************************************\n";
	      
	      
	      
	cout<<"--------------------------\n"<<endl;
	
		cout<<"Enter your choice: ";
	cin>>hairTREATMENT;
	cout<<"--------------------------\n"<<endl;
	
    if(hairTREATMENT=="1")
	{
		
			cout<<"\t\tYOU HAVE CHOSEN HAIR REBONDING\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>num1;
            Change1=num1*1000;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	}
	else if(hairTREATMENT=="2")
	{
		
			cout<<"\t\tYOU HAVE CHOSEN CURLY\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>num2;
            Change2=num2*560;
             cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	}
	else if(hairTREATMENT=="3")
	{
		
			cout<<"\t\tYOU HAVE CHOSEN HOT OIL\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>num3;
            Change3=num3*100;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	}
       
	else if(hairTREATMENT=="4")
	{
			cout<<"\t\tYOU HAVE CHOSEN HAIR SPA\n\n";
		    cout<<"How many do you want to purchase?: ";
			cin>>num4;
            Change4=num4*150;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
	}
	  else
	{
        cout << "You've entered"<<"\t"<< hairTREATMENT << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairTREATMENT2;
    }
	
	    order:
	
	        cout<<"\t\tType (1) if 'YES'\n";
			cout<<"\t\tType (2) if 'NO'\n";
			cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
            cin>>response;
    
	if (response=="1")
	{       
	    system ("cls");     
        goto salon1;
    }
    else if(response=="2")
    {
            
            	system ("cls");
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
    }
    else
    {
    	system ("cls");
    	
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
	} 
    }
	
	
     switch(c)
	case 2:
		hairSTYLING:
    {
		
		cout<<"\tYOU'VE CHOSEN [2]\n"<<endl;
		
	cout<<"\t\t*******************************************"<<endl;	
    cout<<"\t\t*            HAIR STYLING                 *"<<endl;
    cout<<"\t\t*-----------------------------------------*"<<endl;
    cout<<"\t\t*  Services:            |    Prices:      *"<<endl;  
    cout<<"\t\t* [1] Hair Cut          |    P 50         *\n";
	cout<<"\t\t* [2] Shampoo Blowstyle |    P 100        *\n";
	cout<<"\t\t* [3] Blowdry w/ Iron   |    P 200        *\n";	
	cout<<"\t\t*******************************************\n\n";
	
	
		
	cout<<"-----------------------------------------"<<endl;
	cout<<" None of the above?\n"<<endl;
    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
    cout<<"Type (2) if not"<<endl;
    
    
    cout<<"---------------------------------"<<endl;
    cin>>choosee;
    if(choosee=="1")
    {
    	system ("cls");
            goto salon1;
    }
	else if (choosee=="2")
	{
            goto hairS;
    }
    else
	{
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairSTYLING;
        goto notabove;
    }
    
	  hairS:
		  
	{
		  
        system ("cls");
        
        hairSTYLING2:
        cout<<"\tBack to choose\n";
		    
    	cout<<"\t\t*******************************************"<<endl;	
        cout<<"\t\t*            HAIR STYLING                 *"<<endl;
        cout<<"\t\t*-----------------------------------------*"<<endl;
        cout<<"\t\t*            Choose Your Order            *"<<endl;
        cout<<"\t\t*  Services:            |    Prices:      *"<<endl;  
        cout<<"\t\t* [1] Hair Cut          |    P 50         *\n";
	    cout<<"\t\t* [2] Shampoo Blowstyle |    P 100        *\n";
	    cout<<"\t\t* [3] Blowdry w/ Iron   |    P 200        *\n";	
	    cout<<"\t\t*******************************************\n\n";
	
	cout<<"-------------------------"<<endl;
	cout<<"Enter your choice: ";
	cin>>hairSTYLING;
	cout<<"--------------------------"<<endl;

    if(hairSTYLING=="1")
    {
			cout<<"\t\tYOU HAVE CHOSEN HAIR CUT\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>num5;
            Change5=num5*50;
             cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
    }
			
	else if(hairSTYLING=="2")
	{
			cout<<"\t\tYOU HAVE CHOSEN SHAMPOO W/ BLOWSTYLE\n\n";
		    cout<<"How many do you want to purchase?: ";
			cin>>num6;
            Change6=num6*100;
             cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	}
		
	else if(hairSTYLING=="3")
	{
			cout<<"\t\tYOU HAVE CHOSEN BLOWDRY W/ IRON\n\n";
	        cout<<"How many do you want to purchase?: ";
			cin>>num7;
            Change7=num7*200;
           cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
    }
    else
	{
        cout << "You've entered"<<"\t"<< hairSTYLING << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairSTYLING2;
    }
    
		
			cout<<"\t\tType (1) if 'YES'\n";
			cout<<"\t\tType (2) if 'NO'\n";
			cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
            cin>>response;
           
	if (response=="1")
    {
    	system ("cls");
        goto salon1;
    }
	else if (response=="2")
    {
   	
            	system ("cls");
	            cout << "\t\t**************************************\n" << endl;
	            cout << "\t\t**************************************\n" << endl;
	            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
	            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
	            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
	            cout << "\t\t**************************************\n" << endl;
	            cout << "\t\t**************************************\n" << endl;
             	goto receipt;
    }
    else
    {
    	system ("cls");
    	  
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
    }
    }
		
	
	
    switch(c)
	case 3:
		hairCOLOR:
    {	
           
			cout<<"\tYOU'VE CHOSEN [3]\n";

            cout<<"\t\t***************************************"<<endl;
			cout<<"\t\t*              HAIR COLOR             *"<<endl;
			cout<<"\t\t*-------------------------------------*"<<endl;
			cout<<"\t\t*   Services:            |  Prices:   *"<<endl;
			cout<<"\t\t*  [1] Full Color        |  P 1300    *\n";	
			cout<<"\t\t*  [2] Gloss             |  P 1500    *\n";
		    cout<<"\t\t*  [3] Color Correction  |  P 1500    *\n";
		    cout<<"\t\t*  [4] Retouch           |  P 900     *\n";
	        cout<<"\t\t***************************************\n\n";
	        
		cout<<"-----------------------------------------"<<endl;
		cout<<" None of the above?\n"<<endl;
	    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
	    cout<<"Type (2) if not"<<endl;
	    
	    
	    cout<<"---------------------------------"<<endl;
	    cin>>choosee;
    	
		if(choosee=="1")
        {
        	system ("cls");
		    goto salon1;
    	}
		
	    else if (choosee=="2")
		{
			goto hairC;
		}
		else
	    {
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairCOLOR;
        goto notabove;
        }
            
                   
            hairC:
	        
	   {
	        
	        system ("cls");
	        
	        hairCOLOR2:
	        cout<<"\tBack to choose\n";
	        
	        cout<<"\t\t***************************************"<<endl;
			cout<<"\t\t*              HAIR COLOR             *"<<endl;
			cout<<"\t\t*-------------------------------------*"<<endl;
			cout<<"\t\t*            Choose Your Order        *"<<endl;
			cout<<"\t\t*   Services:            |  Prices:   *"<<endl;
			cout<<"\t\t*  [1] Full Color        |  P 1300    *\n";	
			cout<<"\t\t*  [2] Gloss             |  P 1500    *\n";
		    cout<<"\t\t*  [3] Color Correction  |  P 1500    *\n";
		    cout<<"\t\t*  [4] Retouch           |  P 900     *\n";
	        cout<<"\t\t***************************************\n\n";
	        
	        
			cout<<"--------------------------"<<endl;     
		    cout<<"Enter your choice: ";
	 		cin>>hairCOLOR;
			cout<<"--------------------------"<<endl;
	
	
	if(hairCOLOR=="1")
	{
			cout<<"\t\tYOU HAVE CHOSEN FULL COLOR\n\n";
	        cout<<"How many do you want to purchase?: ";
			cin>>num8;
            Change8=num8*1300;
             cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	
	}
		
		else if(hairCOLOR=="2")
	{
			cout<<"\t\tYOU HAVE CHOSEN GLOSS\n\n";
	        cout<<"How many do you want to purchase?: ";
			cin>>num9;
            Change9=num9*1500;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	
	}
	
	else if(hairCOLOR=="3")
	{
			cout<<"\t\tYOU HAVE CHOSEN COLOR CORRECTION\n\n";
            cout<<"How many do you want to purchase?: ";
			cin>>numA;
            ChangeA=numA*1500;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	}
		
		else if(hairCOLOR=="4")
    {
			cout<<"\t\tYOU HAVE CHOSEN RETOUCH\n\n";
	        cout<<"How many do you want to purchase?: ";
			cin>>numB;
            ChangeB=numB*900;
            cout<<"processing..\n\n\n";Beep(2000,150);
	     	cout<<"processing..\n\n\n";Beep(2000,150);
			cout<<"processing..\n\n\n";Beep(2000,150);		
			cout<<"processing..\n\n\n";Beep(2000,150);
			cout<<"processing..\n\n\n";Beep(2000,150);
			cout<<"processing..\n\n\n";Beep(2000,150);
			cout<<"processing..\n\n\n";Beep(2000,150);
	        cout<<"\tOk.\n";
	}
	else
	{
        cout << "You've entered"<<"\t"<< hairCOLOR << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto hairCOLOR2;
    }
	
			cout<<"\t\tType (1) if 'YES'\n";
			cout<<"\t\tType (2) if 'NO'\n";
			cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
            cin>>response;
           
		
		    
	if (response=="1")
    {    
    system ("cls");
         goto salon1;
    }
         
	else if(response=="2")
    {
        	system ("color 1");
        	system ("cls");
		    cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
    }
    else
    {
    	system ("cls");
    
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
    }
    }
    
    
    switch(c)   
    case 4:
    	nailSPA:
    {
        
		cout<<"\tYOU'VE CHOSEN [4]\n";
		
		cout<<"\t\t*****************************************"<<endl;
		cout<<"\t\t*               NAIL SPA                *"<<endl;
		cout<<"\t\t*---------------------------------------*"<<endl;
		cout<<"\t\t*   Services:             |  Prices:    *"<<endl;
        cout<<"\t\t*  [1] Nail polish        |  P 30       *\n";
		cout<<"\t\t*  [2] Manicure           |  P 50       *\n";
	    cout<<"\t\t*  [3] Pedicure           |  P 60       *\n";
	    cout<<"\t\t*  [4] Foot Spa w/ Scrub  |  P 150      *\n";
	    cout<<"\t\t*  [5] Nail Art           |  P 100      *\n";
	    cout<<"\t\t*****************************************\n\n";
	    
	    
    	cout<<"-----------------------------------------"<<endl;
		cout<<" None of the above?\n"<<endl;
    	cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
    	cout<<"Type (2) if not"<<endl;
    
	    
	    cout<<"---------------------------------"<<endl;
	    cin>>choosee;
	    
	if (choosee=="1")
    {
    	system ("cls");
		goto salon1; 
	}
    else if  (choosee=="2")
	{
		goto nail;
    }
    else
	    {
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto nailSPA;
        goto notabove;
        }
            

	nail:
	        
	{
	    
	    system ("cls");
	    
	    nailSPA2:
	    cout<<"\tBack to choose\n";
	    
	    cout<<"\t\t*****************************************"<<endl;
		cout<<"\t\t*               NAIL SPA                *"<<endl;
		cout<<"\t\t*---------------------------------------*"<<endl;
		cout<<"\t\t*           Choose Your Order           *"<<endl;
		cout<<"\t\t*   Services:             |  Prices:    *"<<endl;
        cout<<"\t\t*  [1] Nail polish        |  P 30       *\n";
		cout<<"\t\t*  [2] Manicure           |  P 50       *\n";
	    cout<<"\t\t*  [3] Pedicure           |  P 60       *\n";
	    cout<<"\t\t*  [4] Foot Spa w/ Scrub  |  P 150      *\n";
	    cout<<"\t\t*  [5] Nail Art           |  P 100      *\n";
	    cout<<"\t\t*****************************************\n\n";
	    
	    
	    cout<<"--------------------------"<<endl;
	    cout<<"Enter your choice: ";
		cin>>nailSPA;
	    cout<<"--------------------------"<<endl;
		
	
		if(nailSPA=="1")
		
		{
			cout<<"\t\tYOU HAVE CHOSEN NAIL POLISH\n\n";
		    cout<<"How many do you want to purchase?: ";
			cin>>numC;
            ChangeC=numC*30;
         cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		
		}
		
			
		else if(nailSPA=="2")
		{
		cout<<"\t\tYOU HAVE CHOSEN MANICURE\n\n";
        cout<<"How do you want to purchase?: ";
		cin>>numD;
        ChangeD=numD*50;
        cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
			
			
		}
		
		else if(nailSPA=="3")
		{
			cout<<"\t\tYOU HAVE CHOSEN PEDICURE\n\n";
	        cout<<"How do you want to purchase?: ";
			cin>>numE;
            ChangeE=numE*60;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			

			
			
		}
		
		else if(nailSPA=="4")
		{
			cout<<"\t\tYOU HAVE CHOSEN FOOT SPA W/ SCRUB\n\n";
            cout<<"How do you want to purchase?: ";
			cin>>numF;
            ChangeF=numF*150;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
			
			
		}
		
		
		else if(nailSPA=="5")
		{
			cout<<"\t\tYOU HAVE CHOSEN NAIL ART\n\n";
            cout<<"How do you want to purchase?: ";
			cin>>numG;
            ChangeG=numG*100;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
	
        }
        else
	{
        cout << "You've entered"<<"\t"<< nailSPA << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto nailSPA2;
    }
	
		cout<<"\t\tType (1) if 'YES'\n";
		cout<<"\t\tType (2) if 'NO'\n";
		cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
	    cin>>response;

		       
	if (response=="1")
    {
    	system ("cls");
        goto salon1;
    }
    
	else if(response=="2")
    {
        	system ("color 1");
        	system ("cls");
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
    }
    else
    {
    	system ("cls");
    	  	
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
    }
    }

        switch(c)
		case 5:
			massage:
		{
		
	
		cout<<"YOU'VE CHOSEN [5]\n";
		
		cout<<"\t\t******************************************************"<<endl;
		cout<<"\t\t*                     MASSAGE                        *"<<endl;
		cout<<"\t\t*----------------------------------------------------*"<<endl;
		cout<<"\t\t*  Services:                          |  Prices:     *"<<endl;  
		cout<<"\t\t* [1] Hand Massage (30 minutes)       |  P 220       *\n";
		cout<<"\t\t* [2] Foot Massage (30 minutes)       |  P 220       *\n";
		cout<<"\t\t* [3] Back Massage (30 minutes)       |  P 300       *\n";
		cout<<"\t\t* [4] Spaholics Massage (30 minutes)  |  P 500       *\n";
		cout<<"\t\t* [5] Thai Massage (30 minutes)       |  P 500       *\n";
		cout<<"\t\t* [6] Hilot Massage (30 minutes)      |  P 550       *\n";
		cout<<"\t\t******************************************************\n\n";
		
		
		
		cout<<"-----------------------------------------"<<endl;
		cout<<" None of the above?\n"<<endl;
	    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
	    cout<<"Type (2) if not"<<endl;
    
    
	    cout<<"---------------------------------"<<endl;
	    cin>>choosee;
	    if(choosee=="1")
	    {
	    	system ("cls");
		    goto salon1;
        }
		else if (choosee=="2")
        {
           goto mass;
        }
        else
	    {
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto massage;
        goto notabove;
        }
        
            
        mass:
            	
        
        {
        
		system ("cls");
		
		massage2:
		cout<<"\t Back to choose\n";
		    	
        cout<<"\t\t******************************************************"<<endl;
		cout<<"\t\t*                     MASSAGE                        *"<<endl;
		cout<<"\t\t*----------------------------------------------------*"<<endl;
		cout<<"\t\t*               Choose Your Order                    *"<<endl;
		cout<<"\t\t*  Services:                          |  Prices:     *"<<endl;   
		cout<<"\t\t* [1] Hand Massage (30 minutes)       |  P 220       *\n";
		cout<<"\t\t* [2] Foot Massage (30 minutes)       |  P 220       *\n";
		cout<<"\t\t* [3] Back Massage (30 minutes)       |  P 300       *\n";
		cout<<"\t\t* [4] Spaholics Massage (30 minutes)  |  P 500       *\n";
		cout<<"\t\t* [5] Thai Massage (30 minutes)       |  P 500       *\n";
		cout<<"\t\t* [6] Hilot Massage (30 minutes)      |  P 550       *\n";
		cout<<"\t\t******************************************************\n\n";
		
		
		
		cout<<"--------------------------"<<endl;
		cout<<"Enter your choice: ";
		cin>>massage;
		cout<<"--------------------------"<<endl;
	
			if(massage=="1")
			
		{
					cout<<"\t\tYOU HAVE CHOSEN HAND MASSAGE (30 minutes)\n\n";
				    cout<<"How many do you want to purchase?: ";
					cin>>numH;
		            ChangeH=numH*220;
		            cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";
					
		}
			else if(massage=="2")
		{
					cout<<"\t\tYOU HAVE CHOSEN FOOT MASSAGE (30 minutes)\n\n";
					cout<<"How many do you want to purchase?: ";
					cin>>numI;
		            ChangeI=numI*220;
		            cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";
					
		}
				
			else if(massage=="3")
		{
					cout<<"\t\tYOU HAVE CHOSEN BACK MASSAGE (30 minutes)\n\n";
					cout<<"How many do you want to purchase?: ";
					cin>>numJ;
		            ChangeJ=numJ*300;
		           cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";
		}
				
			else if(massage=="4")
		{
					cout<<"\t\tYOU HAVE CHOSEN SPAHOLICS MASSAGE (30 minutes)\n\n";
					cout<<"How many do you want to purchase?: ";
					cin>>numK;
		            ChangeK=numK*500;
		            cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";
		}
				
			else if(massage=="5")
		{
				    cout<<"\t\tYOU HAVE CHOSEN THAI MASSAGE (30 minutes)\n\n";
					cout<<"How many do you want to purchase?: ";
					cin>>numL;
		            ChangeL=numL*500;
		           cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";
		}
			else if(massage=="6")
		{
					cout<<"\t\tYOU HAVE CHOSEN HILOT MASSAGE (30 minutes)\n\n";
					cout<<"How many do you want to purchase?: ";
					cin>>numM;
		            ChangeM=numM*550;
		            cout<<"processing..\n\n\n";Beep(2000,150);
		     	cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);		
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
				cout<<"processing..\n\n\n";Beep(2000,150);
		        cout<<"\tOk.\n";

        }
         else
	{
        cout << "You've entered"<<"\t"<< massage << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto massage2;
    }
        
				cout<<"\t\tType (1) if 'YES'\n";
				cout<<"\t\tType (2) if 'NO'\n";
				cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
	            cin>>response;
				   
		    
		if (response=="1")
	    {
	    	system ("cls");
	        goto salon1;
		}
        else if(response=="2")
        {
            	system ("color 1");
            	system ("cls");
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
        }
        else
        {
    	system ("cls");
    	  	system ("color F");
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
        }
        }
        }
    
	 switch(c)       
     case 6:
     	waxing:
     {
		
		system ("color 71");
		cout<<"\tYOU'VE CHOSEN [6]\n";

        cout<<"\t\t***************************************"<<endl;
		cout<<"\t\t*               WAXING                *"<<endl;
		cout<<"\t\t*-------------------------------------*"<<endl;
		cout<<"\t\t*  Services:             |  Prices:   *\n";
		cout<<"\t\t* [1] Brazillian Waxing  |  P 850     *\n";
		cout<<"\t\t* [2] Bikini Line        |  P 480     *\n";
		cout<<"\t\t* [3] Underarm           |  P 400     *\n";
		cout<<"\t\t* [4] Lower Leg          |  P 450     *\n";
		cout<<"\t\t* [5] Whole Leg          |  P 750     *\n";
		cout<<"\t\t* [6] Men Back or Chest  |  P 950     *\n";
		cout<<"\t\t***************************************\n\n";


		cout<<"-----------------------------------------"<<endl;
		cout<<" None of the above?\n"<<endl;
	    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
	    cout<<"Type (2) if not"<<endl;
    
    

    cout<<"---------------------------------"<<endl;
    cin>>choosee;
    if(choosee=="1")
    {        
    system ("cls");
	    goto salon1;
    }
	else if (choosee=="2")
    {
        goto wax;
    }
    else
	    {
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto waxing;
        goto notabove;
        }
    
            
            
    wax:
            	
    {
        
		system ("cls");   	

        waxing2:
        cout<<"\tBack to choose\n";
        
        cout<<"\t\t***************************************"<<endl;
		cout<<"\t\t*               WAXING                *"<<endl;
		cout<<"\t\t*-------------------------------------*"<<endl;
		cout<<"\t\t*           Choose Your Order         *"<<endl;
		cout<<"\t\t*  Services:             |  Prices:   *"<<endl;
		cout<<"\t\t* [1] Brazillian Waxing  |  P 850     *\n";
		cout<<"\t\t* [2] Bikini Line        |  P 480     *\n";
		cout<<"\t\t* [3] Underarm           |  P 400     *\n";
		cout<<"\t\t* [4] Lower Leg          |  P 450     *\n";
		cout<<"\t\t* [5] Whole Leg          |  P 750     *\n";
		cout<<"\t\t* [6] Men Back or Chest  |  P 950     *\n";
		cout<<"\t\t***************************************\n\n";

		
		
		cout<<"--------------------------"<<endl;
		cout<<"Enter your choice: ";
	cin>>waxing; 
	cout<<"--------------------------"<<endl;
	

		if(waxing=="1")
		{
		cout<<"\t\tYOU HAVE CHOSEN BRAZILLIAN WAXING\n\n";
		cout<<"How many do you want to purchase?: ";
		cin>>numN;
        ChangeN=numN*850;
        cout<<"processing..\n\n\n";Beep(2000,150);
 		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		
	     else if (waxing=="2")
		{
			cout<<"\t\tYOU HAVE CHOSEN BIKINI LINE\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>numO;
            ChangeO=numO*480;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		
		else if (waxing=="3")
		{
		cout<<"\t\tYOU HAVE CHOSEN UNDERARM\n\n";
		cout<<"How many do you want to purchase?: ";
		cin>>numP;
        ChangeP=numP*400;
	    cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		
		else if (waxing=="4")
		{
			cout<<"\t\tYOU HAVE CHOSEN LOWER LEG\n\n";
			cout<<"How do you want to purchase?: ";
			cin>>numQ;
            ChangeQ=numQ*450;
          cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		
		else if (waxing=="5")
		{
			cout<<"\t\tYOU HAVE CHOSEN WHOLE LEG\n\n";
			cout<<"How do you want to purchase?: ";
			cin>>numR;
            ChangeR=numR*750;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		
		else if (waxing=="6")
		{
			cout<<"\t\tYOU HAVE CHOSEN MEN BACK OR CHEST\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>numS;
            ChangeS=numS*950;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
			
		}
		else
	{
        cout << "You've entered"<<"\t"<< waxing << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto waxing2;
    }
		
		
			cout<<"\t\tType (1) if 'YES'\n";
			cout<<"\t\tType (2) if 'NO'\n";
			cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
            cin>>response;
           
		   
		    
	if (response=="1")
    {     
    system ("cls");
       goto salon1;
    }
	else if(response=="2")
    {
        	system ("cls");
  		    cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
    }
    else
    {
    	system ("cls");
    	  
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
		}
        }
        
        
		switch(c)
	    case 7:
	    	makeup:
	{
	
		cout<<"\tYOU'VE CHOSEN [7]\n";

  		cout<<"\t\t***************************************"<<endl;
 		cout<<"\t\t*               MAKE UP               *"<<endl;
 		cout<<"\t\t*-------------------------------------*"<<endl;
 		cout<<"\t\t*  Services:             |  Prices:   *"<<endl;
		cout<<"\t\t* [1] Hair and Make up   |  P 1500    *\n";
		cout<<"\t\t* [2] Glam Make up       |  P 1200    *\n";
		cout<<"\t\t* [3] Air Brush Make up  |  P 2000    *\n";
		cout<<"\t\t* [4] Bridal Make up     |  P 2500    *\n";
		cout<<"\t\t***************************************\n\n";
		
		
		cout<<"-----------------------------------------"<<endl;
	cout<<" None of the above?\n"<<endl;
    cout<<"Type (1) if yes and we will proceed to main menu\n"<<endl;
    cout<<"Type (2) if not"<<endl;
    
    
    cout<<"---------------------------------"<<endl;
    cin>>choosee;
    if(choosee=="1")
    {
    	system ("cls");
        goto salon1;
    }
    else if (choosee=="2")
    {
        goto make;
    }
    else
	{
	system ("cls");
        cout << "You've entered"<<"\t"<< choosee << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto makeup;
        goto notabove;
    }
    
            
            
    make:
    
	{
	    
        system ("cls");
		    	
		makeup2:
		cout<<"\tBack to choose\n";
		    	
        cout<<"\t\t***************************************"<<endl;
 		cout<<"\t\t*               MAKE UP               *"<<endl;
 		cout<<"\t\t*-------------------------------------*"<<endl;
 		cout<<"\t\t*           Choose Your Order         *"<<endl;
 		cout<<"\t\t*  Services:             |  Prices:   *"<<endl;
		cout<<"\t\t* [1] Hair and Make up   |  P 1500    *\n";
		cout<<"\t\t* [2] Glam Make up       |  P 1200    *\n";
		cout<<"\t\t* [3] Air Brush Make up  |  P 2000    *\n";
		cout<<"\t\t* [4] Bridal Make up     |  P 2500    *\n";
		cout<<"\t\t***************************************\n\n";
		
	cout<<"--------------------------"<<endl;
		cout<<"Enter your choice: ";
	cin>>makeup;
	cout<<"--------------------------"<<endl;
	

	if(makeup=="1")
	{
			cout<<"\t\tYOU HAVE CHOSEN HAIR AND MAKE UP\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>numT;
            ChangeT=numT*1500;
           cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
            
    }
		
    else if(makeup=="2")
	{
			cout<<"\t\tYOU HAVE CHOSEN GLAM MAKE UP\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>numU;
            ChangeU=numU*1200;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
            
            
	} 
		
		
		else if(makeup=="3")
		{
			cout<<"\t\tYOU HAVE CHOSEN AIR BRUSH MAKE UP\n\n";
			cout<<"How many do you want to purchase?: ";
			cin>>numV;
            ChangeV=numV*2000;
            cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
            
            
		} 
		
		else if(makeup=="4")
		{
			cout<<"\t\tYOU HAVE CHOSEN BRIDAL MAKE UP\n\n";
			cout<<"How do you want to purchase?: ";
			cin>>numW;
            ChangeW=numW*2500;
           cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);		
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
        cout<<"\tOk.\n";
		}
		 else
	{
        cout << "You've entered"<<"\t"<< makeup << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto makeup2;
    }
	

			
				cout<<"\t\tType (1) if 'YES'\n";
			cout<<"\t\tType (2) if 'NO'\n";
			cout<<"\t\tWOULD YOU LIKE TO ORDER AGAIN?: \n";
            cin>>response;
           
		   
		    
    if (response=="1")
    {
    	system ("cls");
        goto salon1;
    }
	else if(response=="2")
    {
            	system ("color 1");
            	system ("cls");
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t*******    T H A N K  Y O U    *******\n" << endl;
            cout << "\t\t*******    F O R  U S I N G    *******\n" << endl;
            cout << "\t\t******* T H I S  P R O G R A M *******\n" << endl;
            cout << "\t\t**************************************\n" << endl;
            cout << "\t\t**************************************\n" << endl;
             goto receipt;
    }
    else
    {
    	system ("cls");
    	  
    	cout << "You've entered"<<"\t"<< response << "\n" << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
    	goto order;
    }
        }
		}
        switch (c)
		default:
			{
		
          system ("cls");
        cout << "You've entered" << "\t" << c << endl;
		cout << "\t\t***************************************\n";Beep(2000,150);
        cout << "\t\t******   T H A T  W A S  N O T   ******\n" << endl;
        cout << "\t\t****** A  V A L I D  O P T I O N ******\n" << endl;
        cout << "\t\t***************************************\n\n";Beep(2000,150);
        cout<<"PLEASE TRY AGAIN\n";Beep(2000,150);
        goto salon1;
    }
        
		    receipt:
        {
        
		    
			
            
            cout<<"Hello"<<"\t"<<name<<"!!\n"<<"Here is your order:\n"<<endl;
            	cout<<"\tSERVICES                    PURCHASE         AMOUNT\n";
            if (num1!=0)
            {
            
            	cout<<"\tHair Rebonding"<<"\t\t\t"<<num1<<"\t\t"<<Change1<<endl;
            }
            if (num2!=0)
            {
            
            	cout<<"\tCurly"<<"\t\t\t\t"<<num2<<"\t\t"<<Change2<<endl;
        }
        if (num3!=0)
        {
        
				cout<<"\tHot Oil"<<"\t\t\t\t"<<num3<<"\t\t"<<Change3<<endl;
    }
	          if (num4!=0)	 
			  {
			  
			    cout<<"\tHair Spa"<<"\t\t\t"<<num4<<"\t\t"<<Change4<<endl;
        }
             if (num5!=0)
             {
             
				cout<<"\tHair Cut"<<"\t\t\t"<<num5<<"\t\t"<<Change5<<endl;
        }
           if (num6!=0)
           {
           
				cout<<"\tShampoo Blowstyle"<<"\t\t"<<num6<<"\t\t"<<Change6<<endl;
       }
               if (num7!=0)
               {
               
		    	cout<<"\tBlowdry w/ Iron"<<"\t\t\t"<<num7<<"\t\t"<<Change7<<endl;
              }
              if (num8!=0)
              {
              
				cout<<"\tFull Color"<<"\t\t\t"<<num8<<"\t\t"<<Change8<<endl;
        }
                if (num9!=0)
                {
                
				cout<<"\tGloss"<<"\t\t\t\t"<<num9<<"\t\t"<<Change9<<endl; 
            	}
            	if (numA!=0)
            	{
            	
				cout<<"\tColor Correction"<<"\t\t"<<numA<<"\t\t"<<ChangeA<<endl;
            	}
            	   if (numB!=0)
            	   {
            	   
				cout<<"\tRetouch"<<"\t\t\t\t"<<numB<<"\t\t"<<ChangeB<<endl;
            	  }
            	  if (numC!=0)
            	  {
            	  
				cout<<"\tNail Polish"<<"\t\t\t"<<numC<<"\t\t"<<ChangeC<<endl;
            	   }
            	   if (numD!=0)
            	   {
            	   
				cout<<"\tManicure"<<"\t\t\t"<<numD<<"\t\t"<<ChangeD<<endl;
            	      }
            	      if (numE!=0)
            	      {
            	      
				cout<<"\tPedicure"<<"\t\t\t"<<numE<<"\t\t"<<ChangeE<<endl;
            	
            }
            if (numF!=0)
            {
            
				cout<<"\tFoot Spa w/ Scrub"<<"\t\t"<<numF<<"\t\t"<<ChangeF<<endl;
        }
               if (numG!=0)
               {
               
				cout<<"\tNail Art"<<"\t\t\t"<<numG<<"\t\t"<<ChangeG<<endl;
               }
               if (numH!=0)
                  {
                  
				cout<<"\tHand Massage (30 minutes)"<<"\t"<<numH<<"\t\t"<<ChangeH<<endl;
            }
            if (numI!=0)
            {
            
				cout<<"\tFoot Massage (30 minutes)"<<"\t"<<numI<<"\t\t"<<ChangeI<<endl;
        }
               if (numJ!=0)
               {
               
			    cout<<"\tBack Massage (30 minutes)"<<"\t"<<numJ<<"\t\t"<<ChangeJ<<endl;
                 }
                 if (numK!=0)
                 {
                 
				cout<<"\tSpaholics Massage (30 minutes)"<<"\t"<<numK<<"\t\t"<<ChangeK<<endl;
            	  }
            	  if (numL!=0)
            	  {
            	  
			    cout<<"\tThai Massage (30 minutes)"<<"\t"<<numL<<"\t\t"<<ChangeL<<endl;
            	     }
            	     if (numM!=0)
            	     {
            	    
				cout<<"\tHilot Massage (30 minutes)"<<"\t"<<numM<<"\t\t"<<ChangeM<<endl;
            	 }
            	 if (numN!=0)
            	 {
            	 
				cout<<"\tBrazillian Waxing"<<"\t\t"<<numN<<"\t\t"<<ChangeN<<endl;
            	  }
            	  if (numO!=0)
            	  {
            	  
				cout<<"\tBikini Line"<<"\t\t\t"<<numO<<"\t\t"<<ChangeO<<endl;
            	  }
            	  if (numP!=0)
            	  {
            	cout<<"\tUnderarm"<<"\t\t\t"<<numP<<"\t\t"<<ChangeP<<endl;
            }
                  if (numQ!=0)
                  {                  
				cout<<"\tLower Leg"<<"\t\t\t"<<numQ<<"\t\t"<<ChangeQ<<endl;
            }
            if (numR!=0)
            {
           	    cout<<"\tWhole Leg"<<"\t\t\t"<<numR<<"\t\t"<<ChangeR<<endl;
       }
       if (numS!=0)
       {
       
		    	cout<<"\tMen Back or Chest"<<"\t\t"<<numS<<"\t\t"<<ChangeS<<endl;
          }
          if (numT!=0)
          {
          
	        	cout<<"\tHair and Make Up"<<"\t\t"<<numT<<"\t\t"<<ChangeT<<endl;
      }
      if (numU!=0)
      {
      
		    	cout<<"\tGlam Make Up"<<"\t\t\t"<<numU<<"\t\t"<<ChangeU<<endl;
  }
	        if (numV!=0)
	        {
				cout<<"\tAir Brush Make Up"<<"\t\t"<<numV<<"\t\t"<<ChangeV<<endl;
         }
               if (numW!=0)
               {
               
            	cout<<"\tBridal Make Up"<<"\t\t\t"<<numW<<"\t\t"<<ChangeW<<endl;
        }
            
            	total=Change1+Change2+Change3+Change4+Change5+Change6+Change7+Change8+Change9+ChangeA+ChangeB+ChangeC+ChangeD+
				        ChangeE+ChangeF+ChangeG+ChangeH+ChangeI+ChangeJ+ChangeK+ChangeL+ChangeM+ChangeN+ChangeO+
					ChangeP+ChangeQ+ChangeR+ChangeS+ChangeT+ChangeU+ChangeV+ChangeW;
            	
            	cout<<"processing..\n\n\n";Beep(2000,150);
     	cout<<"processing..\n\n\n";Beep(2000,150);
		cout<<"processing..\n\n\n";Beep(2000,150);
	
            
			{
			
            	cout<<"Total Bill: "<<total<<"\n"<<endl;
            	
            	cout<<"Please Enter your payment:\n ";
            	cin>>pay;
            if (pay>=total)
            {
            	totalchange=pay-total;
       
                cout<<"The total amount is: "<<totalchange<<endl;
                cout<<"\t\t\tThank You. Come Again"<<endl;
                return 0;
            }
            else if (pay<=total)
            {
            	cout<<"\tSorry but your payment is not enough.\n\n\n"<<endl;
            	cout<<"\t\tWOULD YOU LIKE TO CONTINUE OUR TRANSACTION? (Y/N): \n"<<endl;
            	cin>>transaction;
            	if (transaction=='Y' || transaction=='y')
            	 {
            	 	system ("cls");
            	 	goto salon;
            	 }
            	else if (transaction=='N' || transaction=='n')
            	 {
            	 	cout<<"\t\t\tThank You"<<endl;
            	 	return 0;
            	 }
            }
            
            	
            	
                
}
return 0;
}
}
}
