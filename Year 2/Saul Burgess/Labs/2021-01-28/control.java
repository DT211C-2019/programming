/***********************************************************************************************************************
 * Control: Main class
 * Author: Saul Burgess
 * Date: 2021-01-28
***********************************************************************************************************************/

public class control {
    public static void main(String[] args) {

        //Hello world
        System.out.print("Hello world!");

        //Creates first class with first constructor
        Vehicle newOBJ = new Vehicle("John", 12345);
        System.out.print(newOBJ);

        //Creates second class with second constructor
        Vehicle secondOBJ = new Vehicle("John", 12345, 27, "red", true, 4);
        System.out.println(secondOBJ);


    }
}