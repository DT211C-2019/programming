General program premise: "Description: This program reads specified files of a specified format, then when queried 
keywords returns the document that contains the keyword. This program can also display the provided document and the 
user can opt to end the program."

This program, in general has three maint challanges:
1. reading the document
2. making that document a list seperated by sub-documents
3. making those sub-documents a dictionary

I'll tackle these problems one by one.

1: This is the simplest of the challanges, loading the program can be done easily with the 'open' command. The real
question though, is whether to edit the file or not. As the assignment does not explictly state that we cannot do this
I considered simply using the document as another form of memory, and inserting more tokens to allow for easy parsing.
After a few seperate attempts, I eventually landed on simply opening the document and doing all necessary changes in 
program memory.

2. .split is is a very powerful Python command, using this, aswell as the token. Allowed me to split the document into
multiple strings. After this I opted to remove the 0th element, as in both example documents this caused empty strings 
to be created at the 0th address of the list.

3. This is the most dificult, and personally took me time to understand. Unlike in C, Dicts exist. This allows me to 
make an array that is indexed by strings instead of by values. However considering I decided to use the 'set' datatype
to get my unique words, it was difficult to make the list, I eventually opted to make two strings both with the same
numerical index. I then merged these two together along the same index to get the dictionary of Unique Words : documents
