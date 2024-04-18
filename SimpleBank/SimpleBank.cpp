#include <iostream>
#include <string>
using namespace std;
/*
 *

#### **Account Class**
- **Attributes**:
  - Account number
  - Account holder name
  - Balance
- **Methods**:
  - Constructor(s) to create an account
  - Deposit(amount)
  - Withdraw(amount)
  - GetBalance()

#### **Customer Class**
- **Attributes**:
  - Customer ID
  - Name
  - List of Accounts (this can be a vector of Account objects)
- **Methods**:
  - Constructor(s) for creating a customer
  - AddAccount(Account)
  - RemoveAccount(accountNumber)
  - GetAccountDetails(accountNumber)

#### **Bank Class**
- **Attributes**:
  - Name of the bank
  - List of Customers (vector of Customer objects)
- **Methods**:
  - Constructor(s) for the bank
  - AddCustomer(Customer)
  - RemoveCustomer(customerID)
  - FindCustomer(customerID)

### 2. Functionality to Implement

#### **Basic Account Operations**
- Allow for basic operations such as depositing and withdrawing money.
- Checking balance.

#### **Customer Management**
- Adding new customers to the bank.
- Adding or removing accounts for customers.
- Retrieving a customer’s account details.

#### **Interface**
- Implement a simple text-based menu system that allows the user to:
  - Create a new bank account.
  - Access an existing account to make deposits or withdrawals.
  - Check account balances.
  - Add a new customer.
  - Exit the program.

*/
class Account{

private:
	string accountNumber;
	string clientName;
	double balance; 

public: 
	Account(string number,string name){
		accountNumber = number;
		clientName = name;

	}

void deposit(double amount){
	if (amount > 0){
		balance += amount;
		cout << "Deposit: $" <<amount << endl;
	}else {
		cout << "Invalid amount" << endl;
	}
}

void withdraw(double amount){
	if(amount > 0 && amount <=balance){
		balance -=amount;
		cout << "Withdrew: $" << amount << endl;

	}else{
		cout << "Invalid Transaction"<< endl;
	}

}

class Customer{
  private:
    string customerId;
    string customerName;
    vector<Account> accounts;

  public:

  
}
void getAccountInfo(){
	cout <<"Account Number: "<< accountNumber << endl;
	cout <<"Owner: " << clientName << endl;
	cout <<"Current Balance: " << balance << endl;

}
double getBalance()const{
return balance;
}
};
int main(){
	Account newAccount("001","Mateus");
	newAccount.deposit(50);
	newAccount.withdraw(-1);
	newAccount.withdraw(20);
	newAccount.getAccountInfo();
}
