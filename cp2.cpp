#include<iostream>
#include<string>
using namespace std;
float Average(float marksEnglish , float marksMaths , float marksChemistry , float marksSocialScience , float marksBiology );
string calculateGrade(float average );
main()
{
 float marksEnglish, marksMaths ,  marksChemistry , marksSocialScience ,  marksBiology , average  ; 
 string name = "" ;
 string output ;
 cout<<"Enter the name of student :" ;
 cin>>name ;
 cout<<endl<<"Enter english marks:" ;
 cin>>marksEnglish ;
 cout<<"Enter maths marks:" ;
 cin>>marksMaths ;
 cout<<"Enter chemistry marks:" ;
 cin>>marksChemistry ;
 cout<<"Enter social Science marks: " ;
 cin>>marksSocialScience ;
 cout<<"Enter biology marks:" ;
 cin>>marksBiology  ;
 average =Average( marksEnglish , marksMaths , marksChemistry , marksSocialScience , marksBiology );
 cout<< "Student name :" <<name ;
 cout<<endl<<"Percentage:" <<average ;
 cout<<"\ngrade :" <<calculateGrade(average);
} 
float Average(float marksEnglish , float marksMaths , float marksChemistry , float marksSocialScience , float marksBiology )
{
 float average ;
 float total ;
 total = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology  ;
 average = (total /500)* 100 ;
 return average ;

}
string calculateGrade(float average)
{
  string grade ;
  if(average >= 90 && average < 100 )
 {
   grade = "A+" ;
 }
 if (average >= 80 && average <90 )
    {
        grade = "A";
    }
    if (average >= 70 && average <80)
    {
        grade = "B+";
    }
    if (average >= 60 && average <70)
    {
        grade = "B";
    }
    if (average >= 50 && average <60)
    {
        grade = "C";
    }
    if (average >=40 && average<50)
    {
        grade = "D";
    }
    if(average <40)
    {
        grade = "F";
    }
    return grade;

}


