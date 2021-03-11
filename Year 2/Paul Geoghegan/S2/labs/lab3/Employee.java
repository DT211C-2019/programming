/********************
*Employee
This class will allow the user to create and manage different employees
*Author
Paul Geoghegan
*Date
11/2/21
********************/

package com.labs.lab3;

public class Employee
{

	//Attributes
	private String firstName;
	private String surName;
	private int staffNumber;
	private double annualSalary;

	//Gets and sets firstName
	public String getFirstName() {
		return this.firstName;
	}
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}

	//Gets and sets surName
	public String getSurName() {
		return this.surName;
	}
	public void setSurName(String surName) {
		this.surName = surName;
	}

	//Gets and sets staffNumber
	public int getStaffNumber() {
		return this.staffNumber;
	}
	public void setStaffNumber(int staffNumber) {
		this.staffNumber = staffNumber;
	}

	//Gets and sets annualSalary
	public double getAnnualSalary() {
		return this.annualSalary;
	}
	public void setAnnualSalary(double annualSalary) {
		this.annualSalary = annualSalary;
	}

	//Constructor for getting all of the different attributes
	public Employee(String firstName, String surName, int staffNumber, double annualSalary)
	{
		//Sets values
		this.firstName = firstName;
		this.surName = surName;
		this.staffNumber = staffNumber;
		this.annualSalary = annualSalary;
	} //End constructor

	//This method will calculate the average pay per month of an employee
	public double calculatePay()
	{
		return annualSalary/12;
	} //End calculatePay

	public String toString()
	{
		String str=firstName+" "+surName+"is an employee\n";
		str+="Their staff number is"+staffNumber+" and they earn $"+annualSalary+" per year";
		return str;
	} //End toString

} //End Employee}
