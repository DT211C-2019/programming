/***********************************************************************************************************************
 * @description: Extends Account and adds intrest rate and associated requirements
 * @author: Saul Burgess
 * @date: 2021-02-18
***********************************************************************************************************************/
class DepositAccount extends Account {
    
    private double intrestRate;

    public DepositAccount(String AccountName, int accountNumber, boolean inCredit, double acctBalance, double intrestRate){
        super(AccountName, accountNumber, inCredit, acctBalance);

        this.intrestRate = intrestRate;
    }


    public double getIntrestRate() {
        return this.intrestRate;
    }

    public void setIntrestRate(double intrestRate) {
        this.intrestRate = intrestRate;
    }

    @Override
    public void withdraw(double takeAmount) {
        System.out.println("You cannot withdraw from a deposit account!");
    }

    @Override
    public String toString() {
        return "{" +
            " intrestRate='" + getIntrestRate() + "'" +
            "}";
    }

}
