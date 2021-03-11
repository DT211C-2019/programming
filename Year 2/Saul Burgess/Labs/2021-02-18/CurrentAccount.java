/***********************************************************************************************************************
 * @description: Extends Account and adds penalty amount
 * @author: Saul Burgess
 * @date: 2021-02-18
***********************************************************************************************************************/
class CurrentAccount extends Account {
    
    private double penaltyAmount;


    public CurrentAccount(String AccountName, int accountNumber, boolean inCredit, double acctBalance, double penaltyAmount){
        super(AccountName, accountNumber, inCredit, acctBalance);

        this.penaltyAmount = penaltyAmount;
    }


    public double getPenaltyAmount() {
        return this.penaltyAmount;
    }

    public void setPenaltyAmount(double penaltyAmount) {
        this.penaltyAmount = penaltyAmount;
    }

    @Override
    public void withdraw(double takeAmount) {
        super.withdraw(takeAmount);
        this.setPenaltyAmount(this.penaltyAmount+10);
    }

    public void checkCredit(){
        if (this.acctBalance > 0) {
            System.out.println("The account is in credit.");
        } else {
            System.out.println("The Account is not in credit.");
        }
    }

    public void checkCredit(String warningMessage){
        if (this.acctBalance < 100) {
            System.out.println(warningMessage);
        }
    }

    @Override
    public String toString() {
        return "{" +
            " penaltyAmount='" + getPenaltyAmount() + "'" +
            "}";
    }

}
