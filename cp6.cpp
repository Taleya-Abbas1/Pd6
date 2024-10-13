#include<iostream>
#include<string>
using namespace std;
string hotelPrices(string month, int numberOfStays);
main()
{
 string month ;
 int numberOfStays ;
 cout<<"Enter the month of stay(may , june , july , august ,september , october ):";
 cin>>month ;
 cout<<"Enter the number of stays:";
 cin>>numberOfStays;
 cout<< hotelPrices(month,  numberOfStays);




}
string hotelPrices(string month, int numberOfStays)
{
 float discount  ;
 float Discount ;
 string result ;
 float studio ;
 float apartment ;
 if(month == "may" || month == "october")
 {
   if(numberOfStays < 7)
   {
   studio = numberOfStays * 50 ;
   apartment = numberOfStays * 65 ;
   result = "studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ;
   }
   if(numberOfStays > 7 && numberOfStays <= 14)
   {
   discount = (numberOfStays * 50 * 5)/100 ;
   studio = (numberOfStays * 50 ) - discount ;
   apartment = numberOfStays * 65 ;
   result = "studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ; 
   }
   if( numberOfStays > 14 )
   {
   discount = (numberOfStays * 50 * 30)/100 ;
   studio = (numberOfStays * 50 ) - discount ;
   Discount  =(numberOfStays * 65 * 10)/100 ;
   apartment = (numberOfStays * 65 ) - Discount ;
   result ="studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ; 
   }
 }
 if( month == "june" || month == "september")
 {
   if(numberOfStays <= 14 )
   {
    studio = 75.20 * numberOfStays ;
    apartment = 68.70 * numberOfStays ;
     result ="studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ; 
   }
   if(numberOfStays > 14 )
   {
    discount = (75.20 * numberOfStays * 20 )/ 100;
    studio = ( 75.20 * numberOfStays ) - discount ;
    Discount = (68.70 * numberOfStays * 10 )/100 ;
    apartment = (68.70 * numberOfStays ) - Discount ;
    result ="studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ; 
   }
 }
 if( month == "july" || month == "august" )
  { 
     if(numberOfStays <= 14 )
     {
     studio = 75.20 * numberOfStays ;
     apartment = 68.70 * numberOfStays ;
     result ="studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment) ; 
     }
     if(numberOfStays > 14 )
     {
     studio = ( 75.20 * numberOfStays );
     Discount = (68.70 * numberOfStays * 10 )/100 ;
     apartment = (68.70 * numberOfStays ) - Discount ;
     result ="studio = $"  +to_string(studio)+ ",  Apartment = $"  +to_string(apartment); 
     }
 }
  return result;
 
}