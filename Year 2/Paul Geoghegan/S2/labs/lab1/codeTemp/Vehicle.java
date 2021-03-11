/********************
*Vehicle
This class will manage a vehicle
*Author
Paul Geoghegan
*date
28/01/21
 ********************/

package com.example.lab1;

public class Vehicle
{

	private String ownerName;
	private String registrationNumber;
	private String colour;
	private int maximumSpeed;
	private int numberOfWheels;
	private boolean automatic;

	//This sets up a constructor to give values to the ownerName and registrationNumber
	public Vehicle(String ownerName, String registrationNumber)
	{

		//Sets values
		this.ownerName = ownerName;
		this.registrationNumber = registrationNumber;

	} //End constructor

	//This constructor will give values to all variables in the Vehicle class
	public Vehicle(String ownerName, String registrationNumber, String colour, int maximumSpeed, int numberOfWheels, boolean automatic)
	{


		//Sets values
		this.ownerName = ownerName;
		this.registrationNumber = registrationNumber;
		this.colour = colour;
		this.maximumSpeed = maximumSpeed;
		this.numberOfWheels = numberOfWheels;
		this.automatic = automatic;

	} //End constructor

	//This overwrites the string method to print the details
	public String toString()
	{

		//Sets up string
		String str = ownerName+" Ownes a"+colour+" Vehicle";
		str+="The registration of which is"+registrationNumber;
		str+="It has "+numberOfWheels+"and has a maximum speed of"+maximumSpeed;
		return str;
	} //End toString

} //End Vehicle
