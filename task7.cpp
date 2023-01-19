#include <iostream>
using namespace std;

main()
{
  int arrival_minute;
  int arrival_hour;
  int start_minute;
  int start_hour;
  int output_minute;
  int output_hour;
  int cal_time;
  int cal_hour;
  int cal_min;
  int paper_time;
  int arrival_time;

  cout << "Exam starting time(hour): ";
  cin >> start_hour;
  cout << "Exam starting time(minutes): ";
  cin >> start_minute; 
  cout << "Student hour of arrival: ";
  cin >> arrival_hour;
  cout << "Student minute of arrival: ";
  cin >> arrival_minute;

  paper_time=(start_hour*60)+start_minute;
  arrival_time=(arrival_hour*60)+arrival_minute;

  if(paper_time==arrival_time)
  {
    cout << "On time";
  }

  else if (paper_time<arrival_time)
  {
    cal_time=arrival_time-paper_time;
    if(cal_time<=30)
    {
      cout << "Late" << endl;
      cout << cal_time << " minutes after start" << endl;
    }
    else if (cal_time>59)
    {
       cal_min=cal_time%60;
       cal_hour=cal_time/60;
       cout << "Late" << endl;
       cout << cal_hour << ":" << cal_min << " after start";
    }
    else
    {
     cout  << "Late " << endl;
     cout <<  cal_time << " minutes after start" << endl ;
    }
  }
 else if (paper_time>arrival_time)
    {
    cal_time=paper_time-arrival_time;
    if(cal_time<=30)
    {
      cout << "On time" << endl;
      cout << cal_time << " minute before start" << endl;
    }
      else if (cal_time>59)
    {
       cal_min=cal_time%60;
       cal_hour=cal_time/60;
       cout << "Early" << endl;
       cout << cal_hour << ":" << cal_min << " before start" << endl;
    }
    else
    {
       cout << "Early " << endl;
       cout <<  cal_time << " minutes before start";
    }
    }
}