/********************
*Controll
This class contains the main method for the program
*Author
Paul Geoghegan
*Date
11/2/21
********************/

package com.labs.lab3;

public class Controll
{

	public static void main(String[] args)
	{

		Employee person1 = new Employee("John", "Smyth", 1, 30000);

		System.out.println(person1.calculatePay());

	} //End main

} //End Controll
