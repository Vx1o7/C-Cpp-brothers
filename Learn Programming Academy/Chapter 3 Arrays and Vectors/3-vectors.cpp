#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // vector <char> vowels,    empty here in this case
    // vector <char> vowels (5), declared that there are 5 vowels but they are declared at value 0

    vector <char> vowels = {'a', 'e', 'i', 'o', 'u'};
    cout<<"\nThe first vowel is: "<<vowels[0]<<endl;
    cout<<"And the last vowel is: "<<vowels[4]<<endl;

    // vector <int> scores (3),   declared for 3 scores but each value for these 3 is 0
    // vector <int> scores (3, 100), declared for 3 scores but now here each value for 3 is 100

    vector <int> test_scores = {100, 97, 84};

    cout<<"\n\nFinding Values of test scores using Array Method:"<<endl;
    cout<<"\nThe first score is: "<<test_scores[0]<<endl;
    cout<<"The second score is: "<<test_scores[1]<<endl;
    cout<<"The third score is: "<<test_scores[2]<<endl;

    cout<<"\n\nFinding Values of test scores using Vector Method:"<<endl;
    cout<<"\nThe first score is: "<<test_scores.at(0)<<endl;
    cout<<"The second score is: "<<test_scores.at(1)<<endl;
    cout<<"The third score is: "<<test_scores.at(2)<<endl;
    cout<<"There are "<<test_scores.size()<<" data entered in this vector"<<endl;

    cout<<"Enter the 3 new scores: ";
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<"Updated Test scores: "<<endl<<endl;
    cout<<"\nThe first score is: "<<test_scores.at(0)<<endl;
    cout<<"The second score is: "<<test_scores.at(1)<<endl;
    cout<<"The third score is: "<<test_scores.at(2)<<endl;

    int new_score;
    cout<<"Enter a new score to include in the database: ";
    cin>>new_score;
    test_scores.push_back(new_score);

    cout<<"Enter an another new score to include in the database: ";
    cin>>new_score;
    test_scores.push_back(new_score);

    cout<<"Final test scores\n"<<endl;
    cout<<"\nThe first score is: "<<test_scores.at(0)<<endl;
    cout<<"The second score is: "<<test_scores.at(1)<<endl;
    cout<<"The third score is: "<<test_scores.at(2)<<endl;
    cout<<"The fouth score is: "<<test_scores.at(3)<<endl;
    cout<<"The fifth score is: "<<test_scores.at(4)<<endl;
    cout<<"Finally, there are "<<test_scores.size()<<" data entered in this vector"<<endl;


    // Example for an 2D- vector

    vector <vector<int>> movie_scores
    {
        {2, 5, 3, 4},
        {0, 4, 4, 2},
        {1, 5, 2, 5}
    };

    cout<<"Heres the database for reviewer #1 sample using array method: "<<endl;
    cout<<movie_scores[0][0]<<endl;
    cout<<movie_scores[0][1]<<endl;
    cout<<movie_scores[0][2]<<endl;
    cout<<movie_scores[0][3]<<endl;

    cout<<"Heres the database for reviewer #2 sample using vector method: "<<endl;
    cout<<movie_scores.at(1).at(0)<<endl;
    cout<<movie_scores.at(1).at(1)<<endl;
    cout<<movie_scores.at(1).at(2)<<endl;
    cout<<movie_scores.at(1).at(3)<<endl;     
    return 0;
}