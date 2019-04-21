#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void guessGame();
bool isCorrect(int,int);
int main()
{
    srand(time(0));
    guessGame();
}
void guessGame()
{
    int answer;
    int guess;
    char response;

do
{
    answer=1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\n:"<<"Can you guess my number?\n"<<"Please type your first guess."<<endl;
    cin>>guess;
    cout<<"Excellent!You guessed the number!\n"
    <<"Would You like to try again (y or n)?";
    cin>>response;
    cout<<endl;
}while(response=='y');
}
bool isCorrect(int m,int a)
{
    if(m==a)
        return true;
    if(m<a)
        cout<<"Too low.Try again:";
    else
        cout<<"Too high.Try again:";
    return false;
}


