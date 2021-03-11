
public class Controll
{

	public static void main(String[] args)
	{

		//Creates animals
		Animal spot = new Animal("Spot", "Dog", true);
		Animal leo = new Animal("Leo", "Horse", false);
		Animal jess = new Animal("Jess", "Cat", true);

		//Prints spot
		System.out.println(spot.toString());
		spot.makeNoise();

		//Prints Leo
		System.out.println(leo.toString());
		leo.makeNoise();

		//Prints Jess
		System.out.println(jess.toString());
		jess.makeNoise();

		//This sets then gets the animals name
		spot.setName("Patches");
		System.out.println(spot.getName());


	} //End main

} //End Controll
