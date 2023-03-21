#include <iostream>
using namespace std;

bool isLeap(int year);
int monthLength(int year, int month);

int main(void) {
for(int yr = 1995; yr < 2023; yr++)
cout << yr << " -> " << isLeap(yr) << endl;
  
for(int yr = 2000; yr < 2002; yr++) {
  for(int mo = 1; mo <= 12; mo++)
    cout << monthLength(yr,mo) << " ";
    cout << endl;
}
return 0;
}

bool isLeap(int year) {
 if(year % 4 == 0){
   return true;
 }
  else return false;
}

int monthLength(int year, int month) {
 int days;
  switch(month){
    case 1: days = 31;break;
    case 2: if(isLeap(year)) days = 29;
      else days = 28; break;
    case 3: days = 31;break;
    case 4: days = 30;break;
    case 5: days = 31;break;
    case 6: days = 30;break;
    case 7: days = 31;break;
    case 8: days = 31;break;
    case 9: days = 30;break;
    case 10: days = 31;break;
    case 11: days = 30;break;
    case 12: days = 31;break;
  }
  return days;
}
