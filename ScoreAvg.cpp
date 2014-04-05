//Score Average
//Gets the average of scores!!! Who woulda thought?

#include<iostream>
using namespace std;

int main(){
    int score1;
    int score2;
    int score3;
    int sum;
    int avg;
    
    cout << "Enter three scores \n";
    cin >> score1;
    cin >> score2;
    cin >> score3;
    
    sum = score1 + score2 + score3;
    
    avg = sum / 3;
    
    cout << "The average is " << avg << "\n";
    
    system("PAUSE");
    return 0;
}
