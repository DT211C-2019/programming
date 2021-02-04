/***********************************************************************************************************************
 * Control: Main class
 * Author: Saul Burgess
 * Date: 2021-02-04
***********************************************************************************************************************/

public class control {
    public static void main(String[] args){
        //Creating objects
        Animal Leo = new Animal("Leo", "Dog", true);
        Animal Spot = new Animal("Spot", "Wolf", false);
        Animal Jen = new Animal("Jen", "Cat", true);

        //Print out each object
        System.out.println(Leo);
        System.out.println(Spot);
        System.out.println(Jen);

        //Change attribute name
        System.out.println(Leo.getName());
        Leo.setName("Dave");
        System.out.println(Leo.getName());
        System.out.print("\n");

        //Make noise
        System.out.println(Leo.makeNoise());
        System.out.println(Spot.makeNoise());
        System.out.println(Jen.makeNoise());

    }//End main
}//End control class
