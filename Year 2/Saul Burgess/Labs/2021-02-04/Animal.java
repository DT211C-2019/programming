/***********************************************************************************************************************
 * Description: Contains the Animal class
 * Author: Saul Burgess
 * Date: 2021-02-04
***********************************************************************************************************************/

public class Animal {
    //Defines Class Variables
    private String name;
    private String breed;
    private boolean domesticAnimal;


    public Animal(String name, String breed, boolean domesticAnimal){
        this.name = name;
        this.breed = breed;
        this.domesticAnimal = domesticAnimal;
    }//End 3-arg


    public Animal(String name){
        this.name = name;
    }//End 1-arg 


    public String toString(){
        String temp;

        if (this.domesticAnimal == true){
            temp = "it is a domestic animal.";
        }else{
            temp = "it is not a domestic animal.";
        }//End if/else

        return "This animal is called " + this.name + ". It is a " + this.breed + " " + temp + "\n";
    }//End toString


    public void setName(String name){
        this.name = name;
    }//End setName


    public String getName(){
        String ret = this.name;
        return ret;
    }//End getName

    
    public String makeNoise(){
        if (this.breed == "Wolf"){
            return "Howl";
        }
        else if (this.breed == "Cat"){
            return "Meow";
        }
        else{
            return "Woof";
        }

    }//End makeNoise
}//End animal class