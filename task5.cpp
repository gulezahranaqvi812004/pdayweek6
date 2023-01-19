#include <iostream>
using namespace std;
float price(string fruit,string day, float quantity);
main()
{
  string fruit;
  float quantity;
  string day;
  float result;

  cout << "Enter the name of fruit: ";
  cin >> fruit;
  cout << "Enter day: ";
  cin >> day;
  cout << "Enter quantity of fruit: ";
  cin >> quantity;
  result=price(fruit, day, quantity);
  if(result!=0)
  { 
    cout << result;
  }
  else 
  {
    cout << "Invalid entry;";
  }
}

float price(string fruit,string day, float quantity)
{
    float rate;

  if(fruit=="banana")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*2.7;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*2.5;
    }
    else
    {
      rate =0;
    }

  }
  else if(fruit=="apple")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*1.25;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*1.2;
    }
        else
    {
      rate =0;
    }
  }
  else if(fruit=="orange")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*0.9;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*0.85;
    }
        else
    {
      rate =0;
    }
  }
  else if(fruit=="grapefruit")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*1.6;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*1.45;
    }
        else
    {
      rate =0;
    }
  }
  else if(fruit=="kiwi")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*3.0;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*2.7;
    }
        else
    {
      rate =0;
    }
  }
   else if(fruit=="pineapple")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*5.6;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*5.5;
    }
        else
    {
      rate =0;
    }
  }
  else if(fruit=="grapes")
  {
    if(day=="sunday" || day=="saturday")
    {
      rate=quantity*4.2;
    }
    else if(day=="monday" || day=="tuesday" ||day=="wednesday" || day=="thursday" || day=="friday")
    {
        rate=quantity*3.85;
    }
        else
    {
      rate =0;
    }
  }
  else if (fruit!=" banana" || fruit!= "grapes" ||fruit!= "apple" || fruit!= "orange" ||fruit!= "grapefruit" ||fruit!=" kiwi" || fruit!="pineapple" || day!="monday" || day!="tuesday" ||day!="wednesday" || day!="thursday" || day!="friday" || day!="sunday" || day!="saturday")
  {
  
    rate=0;
  }
  
 
 return rate;
}