/***********************************************************************************************************************
 * @description: Contains the employee superclass
 * @author: Saul Burgess
 * @date: 2021-02-11
***********************************************************************************************************************/

public class Employee {

    private String firstName;
    private String surName;
    private int staffNumber;
    protected double annualSalary;


    //Creates the employee object
    public Employee(String firstName, String surName, int staffNumber, double annualSalary){
        this.firstName = firstName;
        this.surName = surName;
        this.staffNumber = staffNumber;
        this.annualSalary = annualSalary;
    }

    //getters
    public String getfirstName(){
        return this.firstName; 
    }

    public String getsurName(){
        return this.surName;
    }

    public int getstaffNumber(){
        return this.staffNumber;
    }

    public double getannualSalary(){
        return this.annualSalary;
    }

    //Setters
    public void setfirstName(String firstName){
        this.firstName = firstName;
    }

    public void setsurName(String surName){
        this.surName = surName;
    }

    public void setstaffNumber(int staffNumber){
        this.staffNumber = staffNumber;
    }

    public void setannualSalary(double annualSalary){
        this.annualSalary = annualSalary;
    }


    //Calculate pay or annualsalary / 12
    public double calculatePay(){
        return this.annualSalary/12;
    }

    public String toString(){
        return this.firstName + " " + this.surName + " " + this.staffNumber + " " + this.annualSalary;
    }

}//End employee
