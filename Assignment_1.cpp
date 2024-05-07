#include <iostream>
#include <string>
using namespace std;
int main()
{
 float DCF, DS, OOP, EEE, WAD;
 int fail_n = 0;
 int grace_n = 0;
 string grace;
 float graceMarks = 0;
 // Input and validation for DCF
 cout << "Enter DCF Marks : ";
 cin >> DCF;
 if (DCF < 0 || DCF > 100)
 {
 cout << "Invalid value for DCF\n";
 return 0;
 }
 else if (DCF < 33 && DCF >= 30)
 {
 grace_n++;
 graceMarks = 33 - DCF; // going to apply grace marks
 grace = "DCF";
 }
 else if (DCF < 30)
 {
 fail_n++;
 }
 // Input and validation for DS
 cout << "Enter DS Marks : ";
 cin >> DS;
 if (DS < 0 || DS > 100)
 {
 cout << "Invalid value for DS\n";
 return 0;
 }
 else if (DS < 33 && DS >= 30)
 {
 grace_n++;
 graceMarks = 33 - DS; // Apply grace marks
 grace = "DS";
 }
 else if (DS < 30)
 {
 fail_n++;
 }
 // Input and validation for OOP
 cout << "Enter OOP Marks : ";
 cin >> OOP;
 if (OOP < 0 || OOP > 100)
 {
 cout << "Invalid value for OOP\n";
 return 0;
 }
 else if (OOP < 33 && OOP >= 30)
 {
 grace_n++;
 graceMarks = 33 - OOP; // Apply grace marks
 grace = "OOP";
 }
 else if (OOP < 30)
 {
 fail_n++;
 }
 // Input and validation for EEE
 cout << "Enter EEE Marks : ";
 cin >> EEE;
 if (EEE < 0 || EEE > 100)
 {
 cout << "Invalid value for EEE\n";
 return 0;
 }
 else if (EEE < 33 && EEE >= 30)
 {
 grace_n++;
 graceMarks = 33 - EEE; // Apply grace marks
 grace = "EEE";
 }
 else if (EEE < 30)
 {
 fail_n++;
 }
 // Input and validation for WAD
 cout << "Enter WAD Marks : ";
 cin >> WAD;
 if (WAD < 0 || WAD > 100)
 {
 cout << "Invalid value for WAD\n";
 return 0;
 }
 else if (WAD < 33 && WAD >= 30)
 {
 grace_n++;
 graceMarks = 33 - WAD; // Apply grace marks
 grace = "WAD";
 }
 else if (WAD < 30)
 {
 fail_n++;
 }
 // Determine overall result
 if (fail_n == 0 && grace_n == 0)
 {
 float totalM = DCF + DS + OOP + EEE + WAD;
 float percentage = (totalM / 500) * 100;
 cout << "Result: Passed\n";
 cout << "Percentage: " << percentage << "%\n";
 if (percentage >= 60)
 {
 cout << "Division: First Division\n";
 }
 else if (percentage >= 45)
 {
 cout << "Division: Second Division\n";
 }
 else if (percentage >= 33)
 {
 cout << "Division: Third Division\n";
 }
 }
 else
 {
 if (grace_n == 1 && fail_n == 0)
 {
 cout << "Passed in grace marks " << graceMarks << ", Grace Subject is
" << grace << endl;
 }
 else if (fail_n == 1 && grace_n == 0)
 {
 cout << "Result : Supplementary\n";
 }
 else
 {
 cout << "Result : fail\n";
 }
 }
 return 0;
}
