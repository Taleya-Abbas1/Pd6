#include<iostream>
#include<string>
using namespace std ;
string checkStatus(int examHour , int examMinutes , int studentHours , int studentMinutes);
main()
{
  int examHour , examMinutes , studentHours ,  studentMinutes ;
  cout<<"Enter exam starting time(hour):";
  cin>>examHour ;
  cout<<"Enter exam Starting time(minutes):";
  cin>>examMinutes;
  cout<<"Enter student hour of arrival :";
  cin>>studentHours ;
  cout<<"Enter student minuutes of arrival :";
  cin>>studentMinutes;
  cout<<checkStatus( examHour , examMinutes , studentHours ,studentMinutes);




}
string checkStatus(int examHour , int examMinutes , int studentHours , int studentMinutes)
{
  int examStartingMins;
  examStartingMins = (examHour * 60 ) + examMinutes ;
  int studentArrivalMins;
  studentArrivalMins = (studentHours * 60) + studentMinutes ;
  int minsDifference ;
  int minDifference ;
  minsDifference = studentArrivalMins  - examStartingMins ;
  minDifference = examStartingMins - studentArrivalMins  ; 
  int hours , mins;
   if( examHour < studentHours)
   {
     if(minsDifference < 60)
     {
      return "late !  " +to_string(minsDifference)+ "  minutes after the start" ;
     }
    if( minsDifference >= 60)
    {
     hours = minsDifference/60 ;
     mins = minsDifference%60 ;
    return "late ! "  +to_string(hours)+ " : " +to_string(mins)+ "  hours after the start" ;
   }
  } 
  if(examHour > studentHours)
   {
    if( minDifference < 60)
   {
     return "on time !  " +to_string(minDifference)+ "  minutes before the start" ;
   }
   if( minDifference >=60 )
   {
     hours = minDifference/60 ;
     mins = minDifference%60 ;
     return "Early ! "   +to_string(hours)+ " : " +to_string(mins)+ "  hours before the start" ;
   }
  }
}