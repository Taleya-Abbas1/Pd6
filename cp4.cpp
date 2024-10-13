#include<iostream>
using namespace std;
float service(char type ,char time,int mins);
main()
{
  char type ;
  char time ;
  float mins;
  float output ;
  cout<<"Enter the service code(r/R/p/P):";
  cin>>type;
  cout<<"Enter the time(D/N):";
  cin>>time;
  cout<<"Enter the number of minutes used :" ;
  cin>>mins;
  output = service(type ,time , mins);
  cout<<"Service Type:"<<type;
  cout<<endl<<"Total minutes used:"<<mins;
  cout<<endl<<"Amount Due is: $" <<service(type , time , mins );




}
float service(char type , char time ,int mins)
{
  float amountDue ;
  if(type == 'r' || type == 'R' && time == 'D'  || time  == 'N')
  {
    if(mins<50 )
    {
     amountDue = 10 ; 
    }
    if(mins>50)
    {
     amountDue = (10 + (mins%10) * 0.20 );
    }
   }
  if(type == 'P' || type == 'p' )
  {
    if(time == 'D' &&  mins < 75 )
    {
     amountDue = 25  ;
    }
     if(time == 'D' &&  mins > 75)
    {
     amountDue = 25 + (mins%3)* 0.10 ;
    }
    if(time == 'N' && mins>100)
    {
     amountDue = 25 + (mins%2) * 0.05;
    }
    if(time == 'N' && mins<100)
    {
     amountDue = 25;
    }
  }
  return amountDue;
}