class Bank_Account:
    'A class for holding bank account information'

    def __init__(self, IBAN, acc_num, funds, transactions):
        self.IBAN = IBAN
        self.acc_num = acc_num
        self.funds = funds
        self.transactions = transactions

    def add_transaction(self, new_transaction):
        self.transactions.append(new_transaction)

    def withdraw(self, funds_to_takeaway):
        self.funds -= funds_to_takeaway

    def deposit(self, funds_to_deposit):
        self.funds += funds_to_deposit

class MinimumBankAccount(Bank_Account):
    'Child class of bank account to demonstrate overrides'
    def __init__(self, IBAN, acc_num, funds, transactions, minimum_value):
        self.minimum_value = minimum_value
        Bank_Account.__init__(self, IBAN, acc_num, funds, transactions)

    def withdraw(self, funds_to_takeaway):
        if (self.funds - funds_to_takeaway) < self.minimum_value:
            print("This would withdraw too many funds!")
        else:
            self.funds -= funds_to_takeaway

#Initialise objects
p1 = MinimumBankAccount('12458', '93678', 200, [1,2,3,4], 100)

#calc
print("Attempt to withdraw exceeding minimum")
p1.withdraw(110)

print("Normal withdraw")
p1.withdraw(10)