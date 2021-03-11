/********************
*Controll
This is the class file containing the main method called Controll
*Author
Paul Geoghegan
*date
28/01/21
********************/

package com.example.lab1;

public class Controll
{

	public static void main(String[] args)
	{

		//Creates vehicles
		Vehicle johnsCar = new Vehicle("John", "11d463");
		Vehicle fredsTruck = new Vehicle("Fred", "08d1198", "Red", 100, 18, false);

		//Prints vehicles
		System.out.println(fredsTruck);

	} //End Main
} //End Controll
