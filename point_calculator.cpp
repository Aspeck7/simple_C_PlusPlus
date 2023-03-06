#include<iostream>
using namespace std;
int main()
{
int n;
int n_score;
int n_total;
int earned_points =0;
int total_points = 0;

cout <<"How many assignments are in the class? ";
cin >> n;


for(int i=0; i<n; i++)
{
cout <<"Score received for assignment " << (i+1) <<" : ";
cin >> n_score;
earned_points = earned_points + n_score;
cout <<"Total points possible for assignment " << (i+1) <<" : ";
cin >> n_total;
total_points = total_points + n_total;
}


cout << "Your total is " << earned_points << " out of " << total_points << ", or " << static_cast<double> (earned_points*100)/static_cast<double> (total_points) << "%.";
return 0;
}