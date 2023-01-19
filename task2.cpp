#include <iostream>
using namespace std;
string grade(int percentage);
main()
{
  int english_marks;
  int math_marks;
  int biology_marks;
  int chemistry_marks;
  int science_marks;
  int total_marks;
  float percentage;
  string final;
  string name;


  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your english marks: ";
  cin >> english_marks;
  cout << "Enter your math marks: ";
  cin >> math_marks;
  cout << "Enter your biology marks: ";
  cin >> biology_marks;
  cout << "Enter your chemistry marks: ";  
  cin >> chemistry_marks ;
  cout << "Enter your social science marks: ";  
  cin >> science_marks ;
  total_marks=english_marks+math_marks+biology_marks+chemistry_marks+science_marks;
 
  percentage=(total_marks * 0.2);
  
  final= grade( percentage);
  cout << final;
}
string grade(int percentage)
{
   
   string result;
  
  
   if(percentage>90 && percentage<=100)
   {
    result="A+";
   }
   else if(percentage>=80 && percentage<=90)
   {
    result="A";
   }
   else if(percentage>70 && percentage<=80)
   {
    result="B+";
   }
   else if(percentage>60 && percentage<=70)
   {
    result="B";
   }
   else if(percentage>50 && percentage<=60)
   {
    result="C";
   }
   else if(percentage>40 && percentage<=50)
   {
    result="D";
   }
   else if (percentage<40)
   {
    result="F";
   }
  return result;
   



}