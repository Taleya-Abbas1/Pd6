#include<iostream>
using namespace std;
int Volleyball(string year, int holiday, int hometown);
main()
{
    string year;
    int holiday, hometown;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holiday;
    cout<<"Enter number of weekend: ";
    cin>>hometown;
    cout<<Volleyball(year,holiday, hometown);
}

int Volleyball(string year, int holiday, int hometown)
{
    int weekends=48;
    int weeksInSofia=weekends-hometown;
    float weekend_plays=weeksInSofia*3/4;
    float holidays_play=holiday*2/3;
    float total_game=weekend_plays + holidays_play;
    if(year=="leap")
    {
        total_game=total_game + (total_game*15/100);
    }
    return total_game;
}