/***********************************************************************************************************************
 * @description: SuperClass Account, holds all account details
 * @author: Saul Burgess
 * @date: 2021-02-18
***********************************************************************************************************************/
class Account implements ValidatedAccount {
    private String accountName;
    private int accountNumber;
    private boolean inCredit;
    protected double acctBalance;
    protected static int currentNumber = 1000;


    public Account(String accountName, int accountNumber, boolean inCredit, double acctBalance){
        this.accountName = accountName;
        this.accountNumber = currentNumber++;
        this.inCredit = inCredit;
        this.acctBalance = acctBalance;
    }

    
    public String getAccountName() {
        return this.accountName;
    }

    public void setAccountName(String accountName) {
        this.accountName = accountName;
    }

    public int getAccountNumber() {
        return this.accountNumber;
    }

    public void setAccountNumber(int accountNumber) {
        this.accountNumber = accountNumber;
    }

    public boolean isInCredit() {
        return this.inCredit;
    }

    public boolean getInCredit() {
        return this.inCredit;
    }

    public void setInCredit(boolean inCredit) {
        this.inCredit = inCredit;
    }

    public double getAcctBalance() {
        return this.acctBalance;
    }

    public void setAcctBalance(double acctBalance) {
        this.acctBalance = acctBalance;
    }

    public void deposit(double depAmount){
        this.acctBalance = this.acctBalance + depAmount;
    }

    public void withdraw(double takeAmount){
        this.acctBalance = this.acctBalance - takeAmount;
    }

    @Override
    public void getDetails() {
        System.out.println(this.accountName + " " + this.acctBalance);

    }

    @Override
    public void validatedAccount() {
        System.out.println("The balance is: " + this.acctBalance);

    }

    @Override
    public String toString() {
        return "{" +
            " accountName='" + getAccountName() + "'" +
            ", accountNumber='" + getAccountNumber() + "'" +
            ", inCredit='" + isInCredit() + "'" +
            ", acctBalance='" + getAcctBalance() + "'" +
            "}";
    }

}