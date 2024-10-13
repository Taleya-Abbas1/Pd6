#include<iostream>
#include<string>
using namespace std;
string zodiacSign(int date , string month);
main()
{
  int date ;
  string month ;
  cout<<"Enter the date of birth:" ;
  cin>>date ;
  cout<<"Enter the month of birth:" ;
  cin>>month ;
  cout<<"Zodiac Sign :" <<zodiacSign(date , month) ;

}
string zodiacSign(int date , string month)
{
 if(month == "March")
 {
   if(date >= 21) 
  {
   return "Aries" ;
  }
 }
 if(month == "April")
 {
   if (date <= 19 )
   {
    return "Aries" ;
   } 
   if (date >=20 )
   {
    return "Taurus" ;
   }
 }
  if(month == "May" )
  {
    if (date <=20)
    {
     return "	Taurus" ;
    }
    if (date >=21)
    {
     return "Gemini";
    }
  }
   if(month == "June" )
  {
    if (date <=20)
    {
     return "Gemini" ;
    }
    if (date >=21)
    {
     return "Cancer";
    }
  }
  if(month == "July" )
  {
    if (date <=22)
    {
     return "Cancer" ;
    }
    if (date >=23)
    {
     return "Leo";
    }
  }
  if(month == "August" )
  {
    if (date <=22)
    {
     return "Leo" ;
    }
    if (date >=23)
    {
     return "Virgo";
    }
  }
    if(month == "September" )
  {
    if (date <=22)
    {
     return "Virgo" ;
    }
    if (date >=23)
    {
     return "Libra";
    }
  }
    if(month == "October" )
  {
    if (date <=22)
    {
     return "Libra" ;
    }
    if (date >=23)
    {
     return "Scorpio";
    }
  }
  if(month == "November" )
  {
    if (date <=21)
    {
     return "Scorpio" ;
    }
    if (date >=22)
    {
     return "Sagittarius";
    }
  }
  if(month == "December" )
  {
    if (date <=20)
    {
     return "Sagittarius" ;
    }
    if (date >=21)
    {
     return "Capricorn";
    }
  }
     if(month == "January" )
  {
    if (date <=19)
    {
     return "Capricorn" ;
    }
    if (date >=20)
    {
     return "Aquarius";
    }
  }
     if(month == "February" )
  {
    if (date <=18)
    {
     return "Aquarius" ;
    }
  }
} 
 
 




