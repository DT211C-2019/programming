class Rectangle():
    def __init__(self, length, width, area):
        self.length = length
        self.width = width
        self.area = area

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