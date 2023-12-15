person={}
def add_person(database):
    
    person['name']=input("Enter name:")
    person['age']=input('Enter age:')
    person['favourite color']=input('Enter favourite color:')
    database.append(person)
    print("Person added successfully.")

def remove_person(database):
    name=input("Enter name of person to remove:")
    for person in database:
        if person['name']==name:
            database.remove(person)
            print("Person removed successfully!")
            return
    print("Person not found in database.")
    
def search_person(database):
    print("Seearch options:")
    print("1.Search by name:")
    print("2.Search by age:")
    print("3.Search by favourite color:")
    option=int(input("Enter serach option(1-3)"))
    if option==1:
        name=input("Enter name to search for:")
        for person in database:
            if person['name']==name:
                print(person)
                return
        print("Person not found in database.")
    elif option==2:
        age=input("Enter age to search for:")
        for person in database:
            if person['age']==age:
                print(person)
                return
        print("Person not found in database.")
    elif option==3:
        favourite_color=input("Enter favourite color to search for:")
        for person in database:
            if person['favorite color']==favourite_color:
                print(person)
                return
        print("Person not found in database.")
    else:
        print("Invalid search option.")
        
database=[]
while True:
    print("Options:")
    print("1.Add person")
    print("2.Remove person")
    print("3.Search person")
    print("4.Quit")
    option=int(input("Enter option(1-4):"))
    if option==1:
        add_person(database)
    elif option==2:
        remove_person(database)
    elif option==3:
        search_person(database)
    else:
        print("Welcome to use it next time.")
        break
        
    

    
    
        
    