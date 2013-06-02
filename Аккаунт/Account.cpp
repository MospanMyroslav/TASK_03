#include <iostream>
using namespace std;
#include "Account.h" 


Account::Account( int initialBalance )
{
   balance = 0; 

   if ( initialBalance > 0 )
      balance = initialBalance;


   if ( initialBalance < 0 )
      cout << "Начальный баланс не может быть отрицательным.\n" << endl;
} 


void Account::credit( int amount )
{
   balance = balance + amount; 
} 

void Account::debit( int amount )
{
   if ( amount > balance )
      cout << "Дебетовая сумма превысила баланс счета.\n" << endl;

   if ( amount <= balance ) 
      balance = balance - amount;
} 

int Account::getBalance()
{
   return balance; 
} 


