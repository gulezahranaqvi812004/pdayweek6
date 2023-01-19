#include <iostream>
using namespace std;
string sign(int date , string month);
main ()
{
  int date;
  string month;
  string final;

  cout << "Enter your date of birth: ";
  cin >> date;
  cout << "Enter month: ";
  cin >> month;

  final=sign(date , month);
  cout << final;
}
string sign(int date , string month)
{
  string result;
  
  if((month=="march" && date>=21) || (month=="april" && date<19))
  {
    result="aries";
  }
  else if((month=="may" && date>=20) || (month=="april" && date>=20))
  {
     result="taurus";
  }
   else if((month=="may" && date>=21) || (month=="june" && date<=20))
  {
     result="gemini";
  }
  else if((month=="june" && date>=21) || (month=="july" && date<=22))
  {
     result="cancer";
  }
  else if((month=="july" && date>=23) || (month=="august" && date<=22))
  {
    result="leo";
  }
  else if((month=="august" && date>=23) || (month=="september" && date<=22))
  {
     result="virgo";
  }
  else if((month=="september" && date>=23) || (month=="october" && date<=22))
  {
     result="libra";
  }
  else if((month=="october" && date>=23) || (month=="november" && date<=21))
  {
     result="scorpio";
  }
  else if((month=="november" && date>=22) || (month=="december" && date<=21))
  {
     result="sagittarius";
  }
  else if((month=="december" && date>=22) || (month=="january" && date<=21))
  {

     result="capricon";
  }
  else if((month=="january" && date>=20) || (month=="february" && date<=18))
  {
     result="aquarius";
  }
  else if((month=="february" && date>=19) || (month=="march" && date<=20))
  {
     result="pisces";
  }
  return result;
}