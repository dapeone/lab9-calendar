#include <iostream>
#include <string>

using namespace std;

int main() {
  int commonYear[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string Month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int number = 0;
  int day = 1;
  int number_day_week = 1;
  int month = 1;
  int bufer = 0;
  int counter = 0;
  int year;
  cin >> year;
  
  for (int i = 2; i < year + 1; i++) {
    
    if (i % 400 == 0) {
      commonYear [1] = 29;
    }

    else if (i % 100 == 0) {
      commonYear [1] = 29;
    }

    else if (i % 4 == 0) {
      commonYear [1] = 29;
    }

    if (i == year) {
            
      while (month < 13) {
        month = month + 1;
        cout << Month[number] << endl << "Mo" << "   " << "Tu" << "   " << "We" << "   " << "Th" << "   " << "Fr" << "   " << "Sa" << "   " << "Sa" << "   " << endl;
        
        if (bufer != 0) { 
          while (counter < 7 - bufer) {
            cout << "     ";
            counter = counter + 1;
            number_day_week = number_day_week + 1;
          }
        }
    
        bufer = 0;
        counter = 0;
  
        while (day < commonYear[number] + 1) {
          while (number_day_week < 8) {
            if (day < 10) {
              cout << day << "    ";
            }
            else if (day < commonYear[number] + 1) {
              cout << day << "   ";
            }
            else {
              bufer = bufer + 1;
            }
            number_day_week = number_day_week + 1;
            day = day + 1;        
          }
      
          number_day_week = 1;
      
          cout << endl;
        }
        day = 1;
        
        number = number + 1;
        cout << " " << endl;        
      }

      number = 0;  
      month = 1;
    }

    else {
      while (month < 13) {
        month = month + 1;
        if (bufer != 0) { 
          while (counter < 7 - bufer) {
            counter = counter + 1;
            number_day_week = number_day_week + 1;
          }
        }
    
        bufer = 0;
        counter = 0;
  
        while (day < commonYear[number] + 1) {
          while (number_day_week < 8) {
            if (day < 10) {
            }
            else if (day < commonYear[number] + 1) {
            }
            else {
              bufer = bufer + 1;
            }
            number_day_week = number_day_week + 1;
            day = day + 1;
        
          }
      
          number_day_week = 1;
      
        }
        day = 1;
        
        number = number + 1;
    
      }
      number = 0;  
      month = 1;
       
    }
    commonYear [1] = 28;
  } 
}
