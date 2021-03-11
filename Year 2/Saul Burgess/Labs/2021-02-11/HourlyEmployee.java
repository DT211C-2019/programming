/***********************************************************************************************************************
 * @description: Contains the HourlyEmployee subclass
 * @author: Saul Burgess
 * @date: 2021-02-11
***********************************************************************************************************************/

class HourlyEmployee extends Employee {

    private double hoursWorked;
    private double hourlyRate;

    //creates the hourlyeployeee object
    public HourlyEmployee(String firstName, String surName, int staffNumber, double annualSalary, double hoursWorked, double hourlyRate){
        super(firstName, surName, staffNumber, annualSalary);

        this.hoursWorked = hoursWorked;
        this.hourlyRate = hourlyRate;

    }

    //getters
    public double gethoursWorked(){
        return this.hoursWorked; 
    }

    public double gethourlyRate(){
        return this.hourlyRate; 
    }

    //setters
    public void sethoursWorked(double hoursWorked){
        this.hoursWorked = hoursWorked;
    }

    public void sethourlyRate(double hourlyRate){
        this.hourlyRate = hourlyRate;
    }

    //calculate pay, or hoursword * hourlyrate
    public double calculatePay(){
        return this.hoursWorked*hourlyRate;
    }

}//End hourlyemployee
