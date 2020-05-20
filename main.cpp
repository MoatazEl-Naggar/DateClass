#include <iostream>
#include<string>
using namespace std;

class myDate {        // The class
  public:          // Access specifier
    string sMonth;  // Attribute
    string sDay;  // Attribute
    string sYear;      // Attribute
    myDate (int x, int y, int z); // Constructor declaration
public:              // Access specifier
    string mySetDay(int sDay);   // Method/function declaration
public:              // Access specifier
    string mySetMonth(int sMonth);   // Method/function declaration
public:              // Access specifier
    string mySetYear(int sYear);   // Method/function declaration
public:              // Access specifier
    string mySetDate(string sDayMonthYear);   // Method/function declaration
};

// Constructor definition outside the class
myDate::myDate(int x, int y, int z) {
  sMonth = to_string(x);
  sDay = to_string(y);
  sYear = to_string(z);
}

string myDate::mySetDay(int pDay) {

 return to_string(pDay);


}

string  myDate::mySetMonth(int pMonth) {

 return to_string(pMonth);


}

string myDate::mySetYear(int pYear) {
return to_string(pYear
);


}

string  myDate::mySetDate(string pDayMonthYear) {

 return pDayMonthYear;


}

int main() {
  myDate DateObj1(1, 1, 1999);
  myDate DateObj2(1, 1, 1999);

  // Print values
  cout << DateObj1.sYear << " " << DateObj1.sMonth << " " << DateObj1.sDay << "\n";
  cout << DateObj2.sYear << " " << DateObj2.sMonth << " " << DateObj2.sDay << "\n";

 int pDay;

 cout << "Enter Day  : ";
 cin >> pDay;

 DateObj1.sDay=DateObj1.mySetDay(pDay);

 int pMonth;

cout << "Enter Month  : ";
 cin >> pMonth;

 DateObj1.sMonth=DateObj1.mySetMonth(pMonth);

 int pYear;

cout << "Enter Year  : ";
 cin >>  pYear;

 DateObj1.sYear=DateObj1.mySetYear(pYear);

// Print values
  cout << DateObj1.sYear << " " << DateObj1.sMonth << " " << DateObj1.sDay << "\n";
/*
cout << "Enter Day  : ";
   cin >>  pDay;

 DateObj2.sDay=DateObj2.mySetDay(pDay);

cout << "Enter Month  : ";
  cin >>  pMonth;

 DateObj2.sMonth=DateObj2.mySetMonth(pMonth);

cout << "Enter Year  : ";
  cin >>  pYear;

 DateObj2.sYear=DateObj2.mySetYear(pYear);



 // Print values
  cout << DateObj2.sYear << " " << DateObj2.sMonth << " " << DateObj2.sDay << "\n";
*/
  return 0;
}

