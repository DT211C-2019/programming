/***********************************************************************************************************************
 * @description: Control class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class Control {
    public static void main(String[] aStrings) {
        // Creates Date
        Date A = new Date(27, 9, 00);

        // Creates Job
        Job B = new Job(2300, "Engineer", 0001);

        // Creates Person and uses Date from before
        Person C = new Person("John", "Smith", A, "Male");

        // Creates and Employee using Job and Date from before
        Employee D = new Employee(B, 33433, A, 33434, "Jane", "Smith", A, "Female");

        // Test cases
        System.out.println(A);
        System.out.println(B);
        System.out.println(C);
        System.out.println(D);

    }// End Main
}// End Control