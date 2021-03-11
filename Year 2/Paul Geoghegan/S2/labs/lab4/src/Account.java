
public class Account implements ValidatedAccount
{

	private String accountName;
	private int accountNumber;
	Boolean inCredit;
	private double accountBalance;
	private static int startingNumber = 1000;

	//Constructor for getting values for inicialisation
	public Account(String accountName, int accountNumber, Boolean inCredit, double accountBalance) {
		this.accountName = accountName;
		this.accountNumber = startingNumber++;
		this.inCredit = inCredit;
		this.accountBalance = accountBalance;
	}

	//Getter and setter for accountName
	public String getAccountName() {
		return this.accountName;
	}
	public void setAccountName(String accountName) {
		this.accountName = accountName;
	}

	//Getter and setter for accountNumber
	public int getAccountNumber() {
		return this.accountNumber;
	}
	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}

	//Getter and setter for inCredit
	public Boolean getInCredit() {
		return this.inCredit;
	}
	public void setInCredit(Boolean inCredit) {
		this.inCredit = inCredit;
	}

	//Getter and setter for accountBalance
	public double getAccountBalance() {
		return this.accountBalance;
	}
	public void setAccountBalance(double accountBalance) {
		this.accountBalance = accountBalance;
	}

	public void getDetails()
	{
		System.out.println(getAccountName()+" currently has a balance of"+getAccountBalance());
	} //End getDetails

	public void valuableAccount()
	{
		System.out.println("The current account balanc is "+getAccountBalance());
	} //End valuableAccount

	//Deposit method
	public void deposit(double depAmount)
	{
		setAccountBalance(accountBalance+depAmount);
	} //End deposit

	//Withdraw method
	public void withdraw(double takeAmount)
	{
		setAccountBalance(getAccountBalance()-takeAmount);
	} //End withdraw

	@Override
	public String toString() {
		return "{" +
			" accountName='" + getAccountName() + "'" +
			", accountNumber='" + getAccountNumber() + "'" +
			", inCredit='" + "'" +
			", accountBalance='" + getAccountBalance() + "'" +
			"}";
	}

} //End Account