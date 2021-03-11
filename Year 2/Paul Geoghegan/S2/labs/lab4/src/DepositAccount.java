public class DepositAccount extends Account
{

	private double interestRate;

	//Constructor for getting values when inicialiseing
	public DepositAccount(double interestRate, String accountName, int accountNumber, Boolean inCredit, double accountBalance)
	{
		super(accountName, accountNumber, inCredit, accountBalance);
		this.interestRate = interestRate;
	}

	//Getter and setter for intrestRate
	public double getInterestRate() {
		return this.interestRate;
	}
	public void setInterestRate(double interestRate) {
		this.interestRate = interestRate;
	}

	//Deposit method
	public void deposit(double depAmount)
	{
		setAccountBalance(getAccountBalance()+depAmount);
	} //End deposit

} //End DepositAccount
