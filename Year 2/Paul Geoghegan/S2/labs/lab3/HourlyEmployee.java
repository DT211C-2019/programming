/********************
*Controll
This class contains the main method for the program
*Author
Paul Geoghegan
*Date
11/2/21
********************/

package com.labs.lab3;

public class HourlyEmployee extends Employee
{

	//Attributes
	private double hoursWorked;
	private double hourlyRate;

	public HourlyEmployee(double hoursWorked, double hourlyRate, String firstName, String surName, int staffNumber, double annualSalary) {
		super(firstName, surName, staffNumber, annualSalary);
		this.hoursWorked = hoursWorked;
		this.hourlyRate = hourlyRate;
	}

	//Overwrites the calculatePay method from Employee
	public double calculatePay()
	{
		return hourlyRate*hoursWorked;
	} // End calculatePay

}
