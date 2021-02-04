/***********************************************************************************************************************
 * Vehicle: Holds information for the program on vehicles 
 * Author: Saul Burgess
 * Date: 2021-01-28
***********************************************************************************************************************/

public class Vehicle {

    //Defines class variables
    String owner_Name;
    int registration_Number;
    int maximum_Speed;
    String colour;
    boolean automatic_Or_Not_Automatic;
    int number_Of_Wheels;
    boolean recentCar;


    //First Constructor with a few arguments
    public Vehicle(String Owner_Name, int Registration_Number) {
        this.owner_Name = Owner_Name;
        this.registration_Number = Registration_Number;
    }//End Constructor 

    //Second constructor with all arguments
    public Vehicle (String Owner_Name, int Registration_Number, int Maximum_Speed, String Colour, boolean automatic_Or_Not_Automatic, int number_of_Wheels){
        this.registration_Number = Registration_Number;
        this.maximum_Speed = Maximum_Speed;
        this.colour = Colour;
        this.automatic_Or_Not_Automatic = automatic_Or_Not_Automatic;
        this.number_Of_Wheels = number_of_Wheels;
    }

    //To-string method
    public String toString(){
        return "\n" + this.owner_Name + " " + this.registration_Number + " " + this.maximum_Speed + " " + this.maximum_Speed + " " + this.colour + " " + this.automatic_Or_Not_Automatic + " " + number_Of_Wheels;
    }

    //Sets recent car based on if the care is older then 2002 or '02'
    public void setRecentCar(){
        if (this.registration_Number > 02000000000){
            recentCar = true;
        } else{
            recentCar = false;
        }
    }

}//End Class
