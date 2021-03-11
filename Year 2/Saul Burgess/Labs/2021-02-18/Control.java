/***********************************************************************************************************************
 * @description: Control class
 * @author: Saul Burgess
 * @date: 2021-02-18
***********************************************************************************************************************/
public class Control {
    public static void main(String[] args) {

        Account A = new Account("A", 94947340, true, 44000);
        DepositAccount B = new DepositAccount("B", 34455656, true, 33000, 5);
        CurrentAccount C = new CurrentAccount("C", 2334454, false, 0, 0);

        //Testing Account
        System.out.println(A.toString());
        A.withdraw(1000);
        System.out.println(A.toString());
        A.deposit(1000);
        System.out.println(A.toString());
        A.getDetails();
        A.validatedAccount();
        System.out.println(A.getAccountNumber());
        System.out.println("\n");

        //Testing DepositAccount
        B.withdraw(1000);
        B.getDetails();
        B.validatedAccount();
        System.out.println(B.getAccountNumber());
        System.out.println("\n");

        //Testing CurrentAccount
        System.out.println(C.toString());
        C.withdraw(100);
        System.out.println(C.toString());
        C.checkCredit();
        C.checkCredit("Your account balance is under 100");
        C.getDetails();
        C.validatedAccount();
        System.out.println(C.getAccountNumber());
    }
}
