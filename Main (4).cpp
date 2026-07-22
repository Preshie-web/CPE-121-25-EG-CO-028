#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    string name;
    int score1, score2, score3;
    float average;

    cout << "PEACE MBOk" << endl;
    cin >> name;

    cout << "50" << endl;
    cin >> score1;

    cout << "34" << endl;
    cin >> score2;

    cout << "20" << endl;
    cin >> score3;

    average = (score1 + score2 + score3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Students name: " << name << endl;
    cout << "Average score: " << average << endl; 
    return 0;
}