#include "Account.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	    setlocale(LC_ALL,"Russian");
   Account account1( 50 ); 
   Account account2( 25 ); 
   cout << "АКК1  " << account1.getBalance() << endl;
   cout << "АКК2  " << account2.getBalance() << endl;
   int withdrawalAmount; 

   cout << "\nВведите сумму снятия для АКК1: "; 
   cin >> withdrawalAmount; 
   cout << "\nпытаясь вычитать " << withdrawalAmount  << " от счет1 баланс\n\n";
   account1.debit( withdrawalAmount ); 

   cout << "АКК1  " << account1.getBalance() << endl;
   cout << "АКК2  " << account2.getBalance() << endl;

   cout << "\nВведите сумму снятия для АКК2: "; 
   cin >> withdrawalAmount;
   cout << "\nпытаясь вычитать " << withdrawalAmount  << " от счет2 баланс\n\n";
   account2.debit( withdrawalAmount );

   cout << "АКК1  " << account1.getBalance() << endl;
   cout << "АКК2  " << account2.getBalance() << endl;
   system("pause");
   return 0; 
} 