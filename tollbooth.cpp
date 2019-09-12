#include <iostream>
using namespace std;

class tollbooth{

  int TotalPaidCars;
  int TotalNumberOfCarPassed;
  float TotalAmountOfCashCollected;
  int NonPayingCar;
  int Cash;



  public:
  // Default constructor
  tollbooth():TotalPaidCars(0),TotalNumberOfCarPassed(0),TotalAmountOfCashCollected(0.0),NonPayingCar(0),Cash(0)
  {
  
  }

  // member function for paying car
  int payingcar()
  {
       TotalPaidCars++;
       Cash++;
  }
  
  // member function for non paying car
  int nonpayingcar()
  {
       NonPayingCar++;
  }

  // member function to display the details
  void display()
  {
     // Each car pays 50 cents
     TotalAmountOfCashCollected = Cash*50.0; 
     
     // Total cars passed is Cars paid + Non paid cars 
     TotalNumberOfCarPassed = TotalPaidCars+NonPayingCar;
    
     // Display all the information
     
     cout<<endl<<"*******************************************************************"<<endl<<endl;
      
     cout<<"     Toll Booth Entries"<<endl;

     cout<<endl;

     system("date");
    
     cout<<endl<<endl;

     cout<<"	Total Number of Cars Paid : "<<TotalPaidCars<<endl<<endl;

     cout<<"	Total Number of Non Paid Cars : "<<NonPayingCar<<endl<<endl;

     cout<<"	Total Number of Cars Passed the Toll : "<<TotalNumberOfCarPassed<<endl<<endl;
      
     cout<<"	Total Cash collected : "<<TotalAmountOfCashCollected<<" Cents"<<endl;
    
     cout<<endl<<endl<<"                     C++ software designed by Prashanth Arun"<<endl;

     cout<<endl<<"*******************************************************************"<<endl<<endl;
     
  }

};

int main()
{
  tollbooth t1;

  int store; 
  int value;  

  system("clear");

do{

  cout<<"Press 1 for Paying Car"<<endl<<endl;

  cout<<"Press 2 for Non Paying Car"<<endl<<endl;
 
  cout<<"Press ESC for Printing the Details"<<endl<<endl;

      
  
  cin>>store;
 
  switch(store)
  {
     case 1 :
        {
           t1.payingcar();
           break;
        }

     case 2 :
        {
           t1.nonpayingcar();
           break;
        }

     case 9 :
        {
           t1.display();
           value = 0;
           break;
        }

     default :
        {
            cout<<endl<<"There is no such options"<<endl;
        }

  }

  cout<<endl<<"Press SPACE to continue"<<endl<<endl;
  cin>>value;
  
}while(value == 8);

  return 0;
}
