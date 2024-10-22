#include <iostream>
#include <exception>

class InsufficientFundsException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient funds for this withdrawal.";
    }
};

class InvalidAmountException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Withdrawal amount cannot be negative.";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
        } else {
            balance = initialBalance;
        }
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        } else if (amount > balance) {
            throw InsufficientFundsException();
        } else {
            balance -= amount;
            std::cout << "Withdrawal successful! Remaining balance: $" << balance << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    double initialBalance, withdrawalAmount;

    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;

    BankAccount account(initialBalance); 

    std::cout << "Enter withdrawal amount: ";
    std::cin >> withdrawalAmount;

    try {
        account.withdraw(withdrawalAmount);
    } catch (const InvalidAmountException& e) {
        std::cerr << e.what() << std::endl; 
    } catch (const InsufficientFundsException& e) {
        std::cerr << e.what() << std::endl; 
    }

    return 0;
}
