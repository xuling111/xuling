#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    const size_t bestScoresSize=5;
    array<int,bestScoresSize>bestScores={1,2,3,4,5};
    for(size_t i=0;i<5;i++)
        cout<<bestScores[i]<<endl;
}
