#include <iostream>
using namespace std;

int main ()
{
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};
    cout<<"\nThe first vowel is: "<<vowels[0]<<endl;
    cout<<"And the last vowel is: "<<vowels[4]<<endl;

    // cin>>vowels[5];

    cout<<endl<<endl;
    double hi_temps [] = {38.7, 32.6, 29.8, 39.5, 43.8};
    cout<<"The first temperature is: "<<hi_temps[0]<<endl;
    hi_temps[0] = 40.6;
    cout<<"The first temperature is now: "<<hi_temps[0]<<endl;

    int test_scores [5];

    cout<<"\nThe first score is: "<<test_scores[0]<<endl;
    cout<<"The second score is: "<<test_scores[1]<<endl;
    cout<<"The third score is: "<<test_scores[2]<<endl;
    cout<<"The fourth score is: "<<test_scores[3]<<endl;
    cout<<"The fifth and last score is: "<<test_scores[4]<<endl;

    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];

    cout<<"\n\n Updated score: "<<endl;
    cout<<"\nThe first score is: "<<test_scores[0]<<endl;
    cout<<"The second score is: "<<test_scores[1]<<endl;
    cout<<"The third score is: "<<test_scores[2]<<endl;
    cout<<"The fourth score is: "<<test_scores[3]<<endl;
    cout<<"The fifth and last score is: "<<test_scores[4]<<endl;


    return 0;
}