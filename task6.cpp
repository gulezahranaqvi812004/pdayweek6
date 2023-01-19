#include <iostream>
using namespace std;

main()
{
   int studio;
   int stays;
   string month;
   float studio_discount;
   float appartment_discount;
   float studio_rate;
   float apartment_rate;
   float final_studio_rate;
   float final_apartment_rate;
   cout << "Enter the month: ";
   cin >> month;
   cout << "Enter the number of stays: ";
   cin >> stays;


  if(month == "may" || month == "october")
  {
      studio_rate=stays*50;
      apartment_rate=stays*65;

      if(stays>7 && stays <14)
      {
        studio_discount=studio_rate*0.05;
        final_studio_rate=studio_rate-studio_discount;
      }
      else if(stays>=14)
      {
        studio_discount=studio_rate*0.3;
        final_studio_rate=studio_rate-studio_discount;  
        appartment_discount=apartment_rate*0.1;
        final_apartment_rate=apartment_rate-appartment_discount;      
      }
  }
  else if(month== "june" || month == "september")
  {
      studio_rate=stays*75.2;
      apartment_rate=stays*68.7;

      if(stays<=14)
      {
         final_studio_rate=studio_rate;
         final_apartment_rate=apartment_rate;
      }

      if(stays>14) 
      {
        studio_discount=studio_rate*0.2;
        final_studio_rate=studio_rate-studio_discount;   
        appartment_discount=apartment_rate*0.1;
        final_apartment_rate=apartment_rate-appartment_discount;     
      }
      
  }

 else if(month== "july" || month == "august")
  {
       final_studio_rate=stays*76.0;
       apartment_rate=stays*77.0;
    if(stays>=14)
    {
       appartment_discount=apartment_rate*0.1;
      final_apartment_rate=apartment_rate-appartment_discount;
    }
  }
 

cout << "Studio rate: " << final_studio_rate<< " $" << endl;
cout << "Apartment rate: " << final_apartment_rate << " $" << endl;

}

