#include <iostream>
#include<string>
using namespace std;
class Accout
{
public:
    explict Accout(int);
    Accout()
    void setMoney(int)
    int getMoney;
    void displayMessage;
    int m_money;
    Accout::Accout(int money)
    {
        setMoney(money);
    }
Accout::Accout()
void Accout::setMoney(int money)
{
    if(money>=0)
        m_money=money;
    else
    {
        cout<<"账户余额不能等于0:";
        m_money=0
    }
    cout::getMoney
    return m_money;
}
void Accout::credit(int AddMoney)
{
    if(AddMoney>=0)
        m_money+=AddMoney;
    else
        cout<<"存入值无效：”<<endl;
}
void Accout::displayMessage
{
    cout<<"当前余额为:"<<getMoney<<endl;
}

}





