#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout <<"No" << "\t" << setw(9) <<"Name" << "\t" << setprecision(4)<< "Marks" <<endl ;
 for (int r = 0; r < 5; r++) {
     cout << setw(2) << (r+1) << "\t" ;
     cout << setw(9) << names[r] <<"\t";
	   cout.setf(ios::floatfield,ios::fixed);
     cout << setprecision(2) << marks[r] << endl;
 }
}
