/***********************************************************************************************************************
 * @description: Control class
 * @author: Saul Burgess
 * @date: 2021-02-11
***********************************************************************************************************************/

public class control{

    public static void main(String[] args) {

        //Creates objects
        Employee Bob = new Employee("bob","smith",45943,(double)27000);
        Employee John = new HourlyEmployee("John","smith",45943,(double)27000,14,10);
        Employee Mary = new SalesEmployee("Mary","smith",45943,(double)27000,14000);
        
        //Demo's bob
        System.out.println("Bob Object:\n" + Bob + "\n");

        //Demo calculatepay
        System.out.println("Bob pay: " + Bob.calculatePay());
        System.out.println("John pay: " + John.calculatePay());
        System.out.println("Mary pay: " + Mary.calculatePay());

    }//End main

}//End employee