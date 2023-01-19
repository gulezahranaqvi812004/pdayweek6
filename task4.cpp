#include <iostream>
using namespace std;
float rate(char service, char time,int minutes);
main()
{
  char service;
  char time;
  int minutes;
  float result;

  cout << "Enter which type of customer you are(Residential or premium):select (r/p):  ";
  cin >> service;
  cout << "(Press 'D' for day time or Press 'N' for night time)call: ";
  cin >> time;
  cout << "Enter the number of minutes you used the service: ";
  cin >> minutes;

  result=rate(service,  time , minutes);
  if(result!=0)
  {
  cout << "The cahrges are : " << result << "$";
  }
  else
  {
    cout << "Invalid";
  }
}
float rate(char service, char time ,int minutes)
{
   float charges;

   if(time=='D' && service=='p')
   {
     if(minutes<75)
     {
       charges=25.00;
     }
     else if(minutes>75)
     {
        charges=(0.1*minutes)+25.00;
     }
   }
   else if(time=='N' && service=='p')
   {
     if(minutes<75)
     {
       charges=25.00;
     }
     else if(minutes>75)
     {
        charges=(0.5*minutes)+25.00;
     }
   }
   else if( service=='r')
   {
     if(minutes<50)
     {
       charges=10.00;
     }
     else
     {
        charges=(0.2*minutes)+10.00;
     }
    
   }
   
   else
   {
    
      return 0;  
   }

 return charges;

}