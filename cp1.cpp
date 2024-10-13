#include<iostream>
#include<string>
using namespace std;
string decideActivity(string temperature , string humidity );
main()
{
  string temperature , humidity;
  cout<<"Enter temperature (warm or cold):" ;
  cin>>temperature ;
  cout<<"Enter the humidity :" ;
  cin>>humidity ;
  cout<<decideActivity(temperature , humidity );
  
}
string decideActivity(string temperature ,string humidity )
{
  string recommendedActivity;
  if (temperature == "warm" )
   {
    if(humidity == "dry")
    {
     recommendedActivity = "Play tennis" ;
    }
    if(humidity == "humid")
    {
     recommendedActivity = "swim" ;
    }
   }
  if(temperature == "cold")
  {
    if(humidity == "dry")
    {
     recommendedActivity = "Play basketball" ;
    }
    if(humidity == "humid")
    {
     recommendedActivity = "Watch TV" ;
    }
   }
   return recommendedActivity ;
}