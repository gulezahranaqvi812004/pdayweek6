#include<iostream>
using namespace std;
string temperature_check(string temperature,string humidity);
main()
{
  string temperature;
  string humidity;
  string result;
  cout << "Enter temperature: ";
  cin >> temperature;
  cout << "Enter humidity: ";
  cin >> humidity;
  result= temperature_check( temperature, humidity);
  cout << result;

}
string temperature_check(string temperature,string humidity)
{
    string final;
    if (temperature=="warm" && humidity=="dry")
   {
    final = "play tennis";
   }
   if (temperature=="warm" && humidity=="humid")
   {
    final= "swim";
   }
   if (temperature=="cold" && humidity=="dry")
   {
    final= "Play basketball";
   }
   if (temperature=="cold" && humidity=="humid")
   {
    final= "watch TV";
   }
   return final;
}