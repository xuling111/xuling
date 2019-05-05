#include<iostream>
using namespace std;
int main()
{

    int values[SIZE]={2,4,6,8,10};

}

unsigned *vPtr;


for(size_t i=0;i<5)
    cout<<values[i]<<'';
(d)
vPtr=values;
vPtr=&values[0];
(e)
for(size_t j=0;j<SIZE;++j)
    cout<<*(vPtr+j)<<'';
(f)
cout<<fixed<<showpoint<<setprecision(l);
for(size_t k=0;k<SIZE;++k)
    cout<<&(value+k)<<'';
(g)cout<<fixed<<showpoint<<setprecision(l);
for(size_t m=0;m<SIZE;++m)
    cout<<vPtr[m]<<'';
    (h)
values[5];
*(values+5)
vPtr[5]
*(vPtr+5)
(i)
1002500+3*3=1002509;3.3
(j)
vPtr指向的地址是value[4]=1002500+4*2=1002508;
执行后引用地址是1002500；2
