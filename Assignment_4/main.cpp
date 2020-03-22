/*Tax Machine by Hissamuddin Shaikh*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    /*Variable Setup*/
    char filingtype;
    float filingamount;
    float taxamount;
    /*Input Setup for Taxing Category*/
    cout << endl <<"  Tax Machine " << endl << endl;
    cout << "  A - Single Filers" << endl;
    cout << "  B - Married filing jointly or qualifying Widow/Widower" << endl;
    cout << "  C - Married filing separately" << endl;
    cout << "  D - Head of Household" <<endl << endl;
    cout << endl <<"  Please select option A, B, C or D, depending on your filing status: ";
    cin  >> filingtype;
    /*Error Control*/
    if (filingtype == 'a')
       filingtype = 'A';
    else if (filingtype == 'b')
       filingtype = 'B';
    else if (filingtype == 'c')
        filingtype = 'C';
    else if (filingtype == 'd')
        filingtype = 'D';
    /*Input Setup for Taxable Income*/
    cout << endl << "  Please enter the amount of money (Taxable Income) that you are filing for - ";
    cin >> filingamount;
    /*Setup for if statement execution, based on filing type*/
    switch (filingtype) {
    case 'A':
        if (filingamount <=6000)
        {
            taxamount = (filingamount)*(0.10);
        }
        else if (filingamount <= 27950)
        {
            taxamount = (filingamount)*(0.15);
        }
         else if (filingamount <= 67700)
        {
            taxamount = filingamount*(0.27);
        }
        else if (filingamount <= 141250)
        {
            taxamount = filingamount*(0.30);
        }
        else if (filingamount <= 307050)
        {
            taxamount = filingamount*(0.35);
        }
        else
        {
            taxamount = filingamount*(0.386);
        }
    break;
    case 'B' :
         if (filingamount <=12000)
        {
            taxamount = (filingamount)*(0.10);
        }
        else if (filingamount <= 46700)
        {
            taxamount = (filingamount)*(0.15);
        }
         else if (filingamount <= 112850)
        {
            taxamount = filingamount*(0.27);
        }
        else if (filingamount <= 171950)
        {
            taxamount = filingamount*(0.30);
        }
        else if (filingamount <= 307050)
        {
            taxamount = filingamount*(0.35);
        }
        else
        {
            taxamount = filingamount*(0.386);
        }
    break;
    case 'C' :
         if (filingamount <=6000)
        {
            taxamount = (filingamount)*(0.10);
        }
        else if (filingamount <= 23350)
        {
            taxamount = (filingamount)*(0.15);
        }
         else if (filingamount <= 56425)
        {
            taxamount = filingamount*(0.27);
        }
        else if (filingamount <= 85975)
        {
            taxamount = filingamount*(0.30);
        }
        else if (filingamount <= 153525)
        {
            taxamount = filingamount*(0.35);
        }
        else
        {
            taxamount = filingamount*(0.386);
        }
    break;
    case 'D' :
         if (filingamount <=10000)
        {
            taxamount = (filingamount)*(0.10);
        }
        else if (filingamount <= 37450)
        {
            taxamount = (filingamount)*(0.15);
        }
         else if (filingamount <= 96700)
        {
            taxamount = filingamount*(0.27);
        }
        else if (filingamount <= 156600)
        {
            taxamount = filingamount*(0.30);
        }
        else if (filingamount <= 307050)
        {
            taxamount = filingamount*(0.35);
        }
        else
        {
            taxamount = filingamount*(0.386);
        }
    break;
    }
    /*Display Result*/
    cout << endl << "  Your Federal Tax this year, based on your income and tax-filing status, is "
    << fixed << setprecision(2) << taxamount << " US Dollars."<< endl;
    return 0;
}
