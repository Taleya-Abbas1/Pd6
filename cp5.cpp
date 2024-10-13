#include<iostream>
using namespace std;
float calculate(string fruit , string dayofweek , double quantity);
main()
{
  string fruit ;
  string dayofweek ;
  double quantity;
  cout<<"Enter the name of fruit(banana, apple,orange,grapefruit,kiwi,pineapple,grapes):";
  cin>>fruit;
  cout<<"Enter the day of week(monday , tuesday , wednesday , thursday , friday , saturday, sunday :";
  cin>>dayofweek;
  cout<<"Enter the quantity of fruit:";
  cin>>quantity;
  cout<< calculate(fruit ,  dayofweek ,  quantity);




}
float calculate(string fruit , string dayofweek , double quantity)
{
  float price;
  if(dayofweek == "monday" || dayofweek =="tuesday" || dayofweek == "wednesday" || dayofweek == "thursday" || dayofweek == "friday"  )
  {
   if( fruit == "banana")
   {
     price = 2.50 * quantity ;
   }
    if( fruit == "apple")
   {
     price = 1.20 * quantity ;
   }
   if( fruit == "orange")
   {
     price =  0.85 * quantity ;
   }
   if( fruit == "grapefruit")
   {
     price = 1.45 * quantity ;
   }
   if( fruit == "kiwi")
   {
     price = 2.70 * quantity ;
   } 
   if( fruit == "pineapple")
   {
     price = 5.50 * quantity ;
   } 
   if( fruit == "grapes")
   {
     price = 3.85 * quantity ;
   }
  }
   if( dayofweek == "sunday" || dayofweek == "saturday" )
   {
     if( fruit == "banana")
     {
     price = 2.70 * quantity ;
     } 
     if( fruit == "apple")
     {
     price = 1.25 * quantity ;
     } 
     if( fruit == "orange")
     {
     price = 0.90 * quantity ;
     } 
     if( fruit == "grapefruit")
     {
     price = 1.60 * quantity ;
     }
     if( fruit == "kiwi")
     {
     price = 3.00 * quantity ;
     } 
     if( fruit == "pineapple")
     {
     price = 5.60 * quantity ;
     }
     if( fruit == "grapes")
     {
     price = 4.20 * quantity ;
     }
   }
    else
    {
      cout<<"error";
     }
  return price ;
}