/***********************************************************************************************************************
 * @description: Contains the SalesEmployee subclass
 * @author: Saul Burgess
 * @date: 2021-02-11
***********************************************************************************************************************/

class SalesEmployee extends Employee {

    private double commissionEarned;

    public SalesEmployee(String firstName, String surName, int staffNumber, double annualSalary, double commissionEarned){
        super(firstName, surName, staffNumber, annualSalary);

        this.commissionEarned = commissionEarned;

    }

    //getters
    public double getcommissionEarned(){
        return this.commissionEarned; 
    }

    //setters
    public void setcommissionEarned(double commissionEarned){
        this.commissionEarned = commissionEarned;
    }

    //calculate pay, or the annual salary / 12 + commission earned
    public double calculatePay(){
        return (this.annualSalary/12)+this.commissionEarned;
    }

}//End salesemployee
