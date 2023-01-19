#include <iostream>
using namespace std;
main()
{
    int x_coordinate;
    int y_coordinate;
    int h;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the x_coordinate: ";
    cin >> x_coordinate;
    cout << "Enter the y_coordinate: ";
    cin >> y_coordinate;   

    if ((x_coordinate>0 && x_coordinate<3*h) && (y_coordinate>0 && y_coordinate<h))
      {
        cout << "inside";
      }
    else if ((x_coordinate>h && x_coordinate<h*2) && (y_coordinate>0 && y_coordinate<4*h))
      {
        cout << "inside";
      }
         



    else if ( x_coordinate>h && y_coordinate>h )
       {
        cout << "outside";
       } 
    else if ( x_coordinate<(3*h) && ( y_coordinate>h && y_coordinate<4*h))
    {
      cout << "outside";
    } 
    else if ( x_coordinate>(0) && y_coordinate>(4*h) )
    {
      cout << "outside";
    } 


    else 
       {
         cout << "boader"; 
       }
      
      
}


