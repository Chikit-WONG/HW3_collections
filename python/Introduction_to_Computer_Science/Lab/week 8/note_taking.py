def read_notes():
    try:
        with open('notes.txt','r',encoding="UTF-8") as f:
            print('saved notes:')
            print(f.read())
    except Exception as e:
       print(f"There is an error,the error is {e}.")
        
def write_notes():
    note=input('Enter your note:')
    with open("notes.txt",'a',encoding='UTF-8') as f:
        f.write(note+'\n')
        
def main():
    read_notes()
    write_notes()

if __name__=='__main__':
    main()
        