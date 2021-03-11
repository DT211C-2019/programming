
public class CurrentAccount extends Account
{

	private double penaltyAmount;

	//Constructor for getting values when inicialiseing
	public CurrentAccount(double penaltyAmount, String accountName, int accountNumber, Boolean inCredit, double accountBalance)
	{
		super(accountName, accountNumber, inCredit, accountBalance);
		this.penaltyAmount = penaltyAmount;
	}

	//Withdraw method
	public void withdraw(double takeAmount)
	{
		setAccountBalance(getAccountBalance()-takeAmount);
	} //End withdraw

	public void checkCredit()
	{
		if(getAccountBalance() < 0)
		{
			System.out.println("You're in credit");
		} //End if
		else
		{
			System.out.println("You're not in credit");
		} //End else
	} //End checkCredit}

	public void checkCredit(String warningMessage) 
	{
		if(getAccountBalance() < 100)
		{
			System.out.println(warningMessage);
		} //End if
} //End checkCredit}


	@Override
	public String toString() {
		return "{" +
			" penaltyAmount='" + getPenaltyAmount() + "'" +
			"}";
	}


} //Ends CurrentAccount 
