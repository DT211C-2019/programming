/********************
*description
This is the controll class which contains the main method
*author
Paul Geoghegan
*date
18/2/21
********************/

public class Controll
{
	public static void main(String[] args)
	{

		Account dave = new Account("Dave", 0, false, 100);
		dave.getDetails();
		System.out.println(dave.getAccountNumber());

		CurrentAccount alex = new CurrentAccount(2, "Alex", 0, true, -45);
		alex.getDetails();
		System.out.println(alex.getAccountNumber());

		DepositAccount john = new DepositAccount(5, "John", 0, false, 467);
		john.getDetails();
		System.out.println(john.getAccountNumber());

	} //End main
} //End Controll

