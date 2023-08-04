/******************************************************************************
this is a program, which reads the grades of 10 courses,calculates the average 
of the grades and inform us about the maximum grade.The  grade will be printed 
with 2 decimal places precision. 
*******************************************************************************/
#include <iostream>
/*Χρησιμοποιείται αυτή η κεφαλίδα για να μπορούμε να χρησιμοποιήσουμε την setprecision()*/
#include <iomanip>
using namespace std;
int main()
{
    float grade, max_1=6,max_2=5,average=0,sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        cout<<endl;
        cout<<" Δώσε την βαθμόλογία σου για το εκάστοτε μάθημα";
        cout<<endl;
        cin>>grade;
        cout<<endl;
        cout<<"H βαθμολόγια στο εκάστοτε μάθημα είναι: "<<grade;
        /*Ευρέση της μέγίστης βαθμόλογίας μέσω της If*/
        if (grade>max_1)
        {
            max_1=grade;
            cout<<endl;
            cout<<" Η μέγιστη βαθμόλογία είναι: "<<setprecision(3)<<max_1;
        }
    
        sum=sum+grade;
    }
    cout<<endl;
    cout<<"Το αθροίσμα είναι:"<<sum;
    cout<<endl;
    average=sum/10;
    cout<<"Ο μέσος όρος των μαθημάτων είναι:"<<average;
return 0;
}