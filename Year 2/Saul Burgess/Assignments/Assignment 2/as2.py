# Date of Last Edit: 2020-12-18
# Author: Saul Burgess
# Descripton: An application to manage a shopping cart, this program will handle all elment of handling a shopping cart
# from entering in data to displaying both the cart and the products an individual can purchase. 

import os
import sys

#-----------------------------------------------------------------------------------------------------------------------
# Classes
#-----------------------------------------------------------------------------------------------------------------------



class Shopping_Cart():
    'The class for storing your shopping cart'
    def __init__(self, cart):
        self.cart = cart


    def __str__(self):
        'Returns a string of all products'
        string_return ='\n'.join([f'{key} : {value}' for key, value in self.cart.items()])
        return string_return


    def initialise_cart(self):
        'Initialises the cart dictionary'
        self.cart = {}
        

    def add_to_cart(self, item, price):
        'Adds an item to a cart, will check if the item is legitimate'
        try:
            if item.isdigit == 1:
                input("The item name must be a float")
                return

            if price.isdigit == 0:
                input("The price must be a float or integer.")
                return

            'Writes too cart'
            self.cart[item] = price
        
        except:
            input("Something went wrong, please try again.")


    def remove_item_from_cart(self, item):
        'removes an item to a cart, will check if the item is legitimate'
        try:
            if item.isdigit == 1:
                print("The item name must be a float")
                return

            'Writes too cart'
            del self.cart[item]
        
        except:
            input("Something went wrong, please try again.")



class Customer():
    'The customer class, containing a dictionary of all products availible to the customer and their funds availible'
    def __init__(self, products, funds, name, shopping_cart):
        self.products = products
        self.funds = funds
        self.name = name
        self.shopping_cart = shopping_cart


    def __str__(self):
        'Returns a dictionary of all products'
        string_return ='\n'.join([f'{key} : {value}' for key, value in self.products.items()])
        return string_return


    def initialise_products(self):
        'Initialises the product list, in case it ever needs to be reset'
        products = {
            "bread": 1.49,
            "milk": 1.01,
            "rice": 1.46,
            "eggs": 2.81,
            "apples": 2.21, 
            "wine": 12.0,
            "cigarettes": 13.80,
            "beer": 2.81,
            "chichen fillets": 8.33,
            "onions": 1.19}
        
        self.products = products
        return products


    def add_funds(self, funds):
        'Adds funds to your account'
        try:
            self.funds += funds
        except:
            input("Error: There was an issue setting your funds, please try again.")


    def remove_funds(self, funds):
        'Removes funds from your account'
        try:
            self.funds -+ funds
        except:
            input("Error: There was an issue setting your funds, please try again.")


    def set_funds(self, funds):
        'Directly sets the funds in your account'
        try:
            self.funds = funds
        except:
            input("Error: There was an issue setting your funds, please try again.")

    
    def make_shopping_cart(self):
        'Generates a shopping cart'
        self.shopping_cart = Shopping_Cart({})
        self.shopping_cart.initialise_cart()



class Bargain_Hunter(Customer):
    'Bargain hunter class'
    def __init__(self, products, funds, name, shopping_cart, loyalty_points):
        self.loyalty_points = loyalty_points
        Customer.__init__(self, products, funds, name, shopping_cart)
    

    def __str__(self):
        'Returns a dictionary of all products'
        string_return ='\n'.join([f'{key} : {value}' for key, value in self.products.items()])
        string_return += '\n\n This person has ' + str(self.loyalty_points) + ' loyalty points'
        return string_return


    def initialise_products(self):
        'Initialises the product list, in case it ever needs to be reset'

        self.products = {
            "bread": 1.49,
            "milk": 1.01,
            "rice": 1.46,
            "eggs": 2.81,
            "apples": 2.21}
        
        return self.products


    def add_loyalty_points(self, loyalty_points_to_add):
        'Adds loyalty points to account'
        try:
            self.loyalty_points += loyalty_points_to_add
        except:
            print("Error: There was an issue setting your loyalty points, please try again.")



class Loyal_Customer(Customer):
    'Loyal customer class'
    def __init__(self, products, funds, name, shopping_cart, year_of_first_shop):
        self.year_of_first_shop = year_of_first_shop
        Customer.__init__(self, products, funds, name, shopping_cart)
        

    def __str__(self):
        'Returns a dictionary of all products'
        string_return ='\n'.join([f'{key} : {value}' for key, value in self.products.items()])
        string_return += "\n\n This person started shopping in the store in " + str(self.year_of_first_shop)
        return string_return

    def initialise_products(self):
        'Initialises the product list, in case it ever needs to be reset'
        self.products = {
            "bread": 1.49,
            "milk": 1.01,
            "rice": 1.46,
            "eggs": 2.81,
            "apples": 2.21, 
            "perfume": 29.75,
            "cigars": 170.0,
            "caviar": 75.0,
            "laptop": 1199.0,
            "gold ring": 240.0}

        return self.products

    def set_year_of_first_shop(self, year_of_first_shop):
        'Sets the year you first shopped with the company'
        try:
            self.funds = year_of_first_shop
        except:
            print("Error: There was an issue setting your year of first shop, please try again.")



#-----------------------------------------------------------------------------------------------------------------------
# Option Definitions
#-----------------------------------------------------------------------------------------------------------------------



def create_a_customer():
    'Creates a customer'
    while True:
        Menu_Header()
        customer_type_selection=2020
        try:
            print("This store services bargain hunters and loyal customers")
            print(" - Loyal customers are any who have shopped here since 2015")
            print(" - Bargain hunters started shopping here more recently\n")
            customer_type_selection = int(input("What year did you start shopping here?: "))
            break
        except:
            input("You must enter a valid intiger. Press enter to continue: ")

    if (2015 - customer_type_selection) <= 0:
        while True:
            customer_name='John Smith'
            try:
                Menu_Header()
                print("Welcome Bargain Hunter!\n")
                customer_name = input("What is your name?: ")
                break
            except:
                Menu_Header()
                input("You must enter a valid string. Press enter to continue: ")
        while True:
            customer_funds=20000
            try:
                Menu_Header()
                customer_funds = int(input("How many funds do you have?: "))
                break
            except:
                Menu_Header()
                input("You must enter a valid int. Press enter to continue: ")
            
        person = Bargain_Hunter({}, customer_funds, customer_name, {}, 0)

    else:
        while True:
            customer_name='John Smith'
            try:
                Menu_Header()
                print("Welcome Loyal Customer!\n")
                customer_name = input("What is your name?: ")
                break
            except:
                Menu_Header()
                input("You must enter a valid string. Press enter to continue.")
        while True:
            customer_funds='20000'
            try:
                Menu_Header()
                customer_funds = int(input("How many funds do you have?: "))
                break
            except:
                Menu_Header()
                input("You must enter a valid int. Press enter to continue.")
            
        person = Loyal_Customer({}, customer_funds, customer_name, {}, customer_type_selection)

    #Initialises cart and product list
    person.make_shopping_cart()
    person.initialise_products()

    #Exits and returns the person object
    return person



def list_products(person):
    'Lists all products in the person object'

    #Checks if the user has filled the person field yet
    if person == None:
        Menu_Header()
        print("You must have at least one element in the shopping cart before you go to checkout")
        input("Press enter to continue:" )
        return

    'Displays the products that the current user can buy'
    Menu_Header()
    try:
        print(person)
        input("\n Press enter to continue: ")
        return
    except:
        input("Please select option 1 first! Press enter to continue: ")
        return



def add_remove_cart(cart):
    'Adds or removes elements from the cart, checking the product list'

    #Checks if the user has filled the person field yet
    if person == None:
        Menu_Header()
        print("You must have at least one element in the shopping cart before you go to checkout")
        input("Press enter to continue:" )
        return


    Menu_Header()
    try:
        cart = cart
    except:
        input("Please select option 1 first! Press enter to continue: ")
        return
    
    while True:
        try:
            Menu_Header()
            user_input = input("Do you want to add or remove an item? A/R: ")
            user_input = user_input.lower()
        except:
            input("Please select a valid string")
        
        if user_input == 'a':
            try:
                Menu_Header()
                item = input("What item would you like to add?: ")
                item = item.lower()

                if item in cart.products:
                    cart.shopping_cart.cart[item] = cart.products[item]
                    break

                else:
                    Menu_Header()
                    input("This item is not in your product list. Please try again")


            except:
                Menu_Header()
                input("Unable to access object")

        if user_input == 'r':
            try:
                Menu_Header()
                item = input("What item would you like to remove?: ")
                item = item.lower()

                if item in cart.products:
                    del cart.shopping_cart.cart[item]
                    break

                else:
                    Menu_Header()
                    input("This item is not in your cart. Please try again")


            except:
                Menu_Header()
                input("Unable to access object")



def list_cart(cart):
    'Lists what is currently in the cart'

    #Checks if the user has filled the person field yet
    if person == None:
        Menu_Header()
        print("You must have at least one element in the shopping cart before you go to checkout")
        input("Press enter to continue:" )
        return

    'Displays the users current cart'
    Menu_Header()
    try:
        print(cart)
        input("\n Press enter to continue: ")
        return
    except:
        Menu_Header()
        input("Please select option 1 first! Press enter to continue: ")
        return



def exit_program(person):
    'Checkout segment, will check if you have enough money to complete the transaction first'
    Menu_Header()

    #Checks if the user has filled the person field yet
    if person == None:
        Menu_Header()
        print("You must have at least one element in the shopping cart before you go to checkout")
        input("Press enter to continue:" )
        return

    #Grabs, then checks user input
    try:
        exit_input = input("Are you sure you want to do this? Y/N: ")
    except:
        print("Something has gone wrong, please try again.")
        return
        
    #If the user indicates yes, the program will end
    if exit_input == ('Y' or 'y'):
        total = sum(person.shopping_cart.cart.values())

        while True:
            Menu_Header()
            print("Your total bill is:", total, "euro\n")
            if total > person.funds:
                print("Warning! You do not have enough funds to complete this transaction. You must add additional funds!")
                input("Press enter to continue: ")
                Menu_Header()
                person.add_funds(int(input("How much do you want to add?: ")))
            else:
                print("Thank you!")
                sys.exit()



#-----------------------------------------------------------------------------------------------------------------------
# Utility Definitions
#-----------------------------------------------------------------------------------------------------------------------


def Menu_Header():
    'Script that clears the screen and prints a nice message'

    #Checks if the OS this is running on is windows or linux, then used appopriate clear message
    if os.name == 'posix':
        _ = os.system('clear')
    else:
        _ = os.system('cls')

    #Prints that 'nice message'
    print("-"*30)
    print("Assignment 2: Shopping Cart")
    print("-"*30)

  

#-----------------------------------------------------------------------------------------------------------------------
# DEF TEST!!!
#-----------------------------------------------------------------------------------------------------------------------



def test():
    person = create_a_customer
    list_products(person)
    add_remove_cart(person)
    list_cart(person.shopping_cart)
    add_remove_cart(person)
    list_cart(person.shopping_cart)
    exit_program(person)



#-----------------------------------------------------------------------------------------------------------------------
# Main
#-----------------------------------------------------------------------------------------------------------------------



#Prevents certain eceptions cropping up
person = None

while True:
    Menu_Header()
    print("1. Create a customer")
    print("2. List products")
    print("3. Add/remove a product from cart")
    print("4. See current shopping cart")
    print("5. Checkout\n")


    menu_input=0
    try:
        menu_input = int(input("Please enter a number (1-5 inclusive): "))
    except:
        pass

    if menu_input == 1:
        'Generate a customer'
        person = create_a_customer()


    if menu_input == 2:
        'List products'
        try:
            list_products(person)
        except:
            Menu_Header()
            input("You must select option 1 first. Press enter to continue: ")


    if menu_input == 3:
        'Add/remove from cart'
        try:
            add_remove_cart(person)
        except:
            Menu_Header()
            input("You must select option 1 first. Press enter to continue: ")


    if menu_input == 4:
        'Current Cart'
        try:
            list_cart(person.shopping_cart)
        except:
            Menu_Header()
            input("You must select option 1 first. Press enter to continue: ")


    if menu_input == 5:
        'Exit program'
        exit_program(person)
