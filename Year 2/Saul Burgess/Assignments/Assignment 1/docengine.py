'''
Description: This program reads specified files of a specified format, then when queried keywords returns the document 
that contains the keyword. This program can also display the provided document and the user can opt to end the program.

Author: Saul Burgess
Date of Last Edit: 2020-11-08
'''

import os

#-----------------------------------------------------------------------------------------------------------------------
# Functions
#-----------------------------------------------------------------------------------------------------------------------

def clear_screen():
    '''Clears the screen using appropriate system call, depending on system'''
    if os.name == 'nt':
        _ = os.system('cls')
    else:
        _ = os.system('clear')


def load_listing(file_path):
    '''Loads a document from the passed file listing'''
    doc = open(file_path, 'r').read()
    document_list = doc.split('<NEW DOCUMENT>')
    document_list.pop(0)

    return document_list


def word_dict_constructer(file_path):
    '''Generates a dictionary of all unique words, followed by which files
    they appear in'''
    doc = open(file_path, 'r').read()
    
    #Removes bad characters
    doc = doc.lower()
    doc = doc.replace('<new document>', '')
    doc = doc.replace('\n',' ')
    
    rm_elements = "!£$%^""&*()_+¬`¦[]{};'~,./\|?*"
    for i in rm_elements:
        doc = doc.replace(i, " ")

    #Generates a set containing all the unique words in the listing
    unique_words = set(doc.split())

    #Uses above function to create a safe list of all documents
    document_list = load_listing(file_path)
    
    #Generates a list of strings, demonstrating what documents have which unique words
    #Note: This is super slow, so slow in fact that it causes upwards of 5~ wait times in execution
    unique_words_by_document = [''] * (len(unique_words)+1)
    iter = 0
    for i in unique_words:
        iter+=1
        for j in range(0, len(document_list)):
            if i in document_list[j].lower():
                unique_words_by_document[iter] += (str(j+1)+' ')
    unique_words_by_document.pop(0)

    #Uses the list above, and the set generated before to create a dictionary of the same key
    dict = {}
    for i in unique_words:
        for j in unique_words_by_document:
            dict[i] = j
            unique_words_by_document.remove(j)
            break

    return dict

#-----------------------------------------------------------------------------------------------------------------------
# Main
#-----------------------------------------------------------------------------------------------------------------------

current_listing = None
menu_input = None
loaded_documents = None

while True:
    try:
        #Standard menu
        print("The current document listing is:", current_listing)
        print("\n1. Load listing")
        print("2. Search listing for terms")
        print("3. Read Document")
        print("4. Quit Program\n")
        menu_input = int(input())
        clear_screen()
    
    except:
        print("Please enter a value within the range")
        input("Press any key to continue.")
        clear_screen()



    #1 allows the user to load new .txt files on the fly
    if menu_input == 1:
        while True:
            try:
                current_listing = input("Please enter a filepath: ")
                loaded_documents = load_listing(current_listing)
                clear_screen()
                break
            except:
                clear_screen()
                print("Invalid, press e to exit or any other key to reenter")
                error_entry = input()
                if error_entry == 'e':
                    break
                clear_screen()
        


    #2 allows the user to search through terms in the listing
    elif menu_input == 2:
        while True:
            #Catch in case the user tries to do this before giving the program a file to read
            if current_listing == None:
                print("Please select option 1, you cannot search an empty document")
                input("Press any key to continue: ")
                clear_screen()
                break
            else:
                try:
                    #Artefact of my bad code, this load can take upwards of 5~ seconds
                    print("Loading: Please wait!")
                    dictionary = word_dict_constructer(current_listing)
                    clear_screen()

                    #Sanatises the users inputs a tiny bit
                    search_input = input("Enter a search term: ")
                    search_input = search_input.lower()
                    clear_screen()

                    #Search code, checks if the value is in the dictionary
                    if search_input in dictionary:
                        print("These files contain this term: ", dictionary[search_input])
                        input("Press enter to continue: ")
                        clear_screen()
                        break
                    else:
                        print("This term is not availible in the listing")
                        input("Press enter to continue: ")
                        clear_screen()
                        break
                except:
                    #This has happened to me once, when for some reason my docs2 was corrupted.
                    print("Error, an invalid dictionary has been created. This is caused by a bad text file")
                    input("Press enter to continue: ")
                    clear_screen()
                    break



    #Displays a file for a user to read
    elif menu_input == 3:
        while True:
            if current_listing == None:
                print("Please select option 1, you cannot read an empty document")
                input("Press any key to continue: ")
                clear_screen()
                break
            else:
                try:
                    print("This Document Listing contains", len(loaded_documents), "listings")
                    listing = (int(input("Document Listing: "))-1)
                    print("------------------------------")
                    print(loaded_documents[listing])
                    print("------------------------------")

                    input("\nPress any key to continue:")
                    clear_screen()
                    break

                except: 
                    print("Invalid, press e to exit or any other key to reenter")
                    error_entry = input()
                    if error_entry == 'e':
                        break
                clear_screen()


    #Exits program
    elif menu_input == 4:
        print("Goodbye!")
        break