

public class Animal
{

	private String name;
	private String breed;
	private boolean domesticAnimal;

	//This constructor sets the name of the animal
	public Animal(String name)
	{

		this.name = name;

	} //End constructtor

	//This constructor will give values to all of the variables
	public Animal(String name, String breed, boolean domesticAnimal)
	{

		this.name = name;
		this.breed = breed;
		this.domesticAnimal = domesticAnimal;

	} //End constructor

	//This will allow the user to set the name
	public void setName(String name)
	{

		//Sets name
		this.name = name;

	} //End setName

	//This gets the name of the animal
	public String getName()
	{

		//Returns name
		return name;

	} //End getName

	//This plays a noise depending on the animal breed
	public void makeNoise()
	{

		//Checks what breed the animal is
		switch(breed)
		{

			case "Dog":
			{

				//Barks
				System.out.println("Bark");
				break;

			} //End dog case}
			case "Horse":
			{

				//Nays
				System.out.println("Nay");
				break;

			} //End horse case
			case "Cat":
			{

				//meows
				System.out.println("Meow");
				break;

			} //End cat case

		} //End switch

	} //End makeNoise

	//This will make the class printable
	public String toString()
	{

		String str=name+" is a "+breed+" and their domestication state is "+domesticAnimal;
		return str;
	} //End toString

} //End Animal
