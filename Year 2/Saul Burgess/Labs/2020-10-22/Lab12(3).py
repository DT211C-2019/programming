def prompt_open(file, rw):
    while True:
        try:
            ouput = open(file, rw)
            break
        except:
            file = input("Error cannot open file, specify new file: ")
    return ouput

file = prompt_open(input("Please specify a file: "), 'r')
file.close() 