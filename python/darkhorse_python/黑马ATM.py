money=5000000
name=None
name=input('Please enter your name:')
def query(show_header):
    # global name
    global money
    if show_header:
        print('-----check balance------')
    print(f'Hi {name},your remaining balance is {money} RMB.')
    print()

def saving(num):
    # global name
    global money
    money+=num
    print(f'Hi {name},you successfully deposited {num} RMB.')
    query(False)
    

def take_money(num):
    # global name
    global money
    money-=num
    print(f'Hi {name},you successfully take out {num} RMB.')
    query(False)
    
def main():
    print('-----main menu-----')
    print(f'Hi {name},welcome to Heima Bank ATM.Please select your choice:')
    print('check balance\tinput 1')
    print('deposit\t\tinput 2')
    print('withdraw money\tinput 3')
    print('exit\t\tinput 4')
    return int(input('Please select your choice.'))
while True:
    keyboard_input=main()
    print()
    if keyboard_input==1:
        query(True)
    elif keyboard_input==2:
        num=int(input('How much do you want to deposit?Pleas enter:'))
        saving(num)
    elif keyboard_input==3:
        num=int(input('How much do you want to withdraw?Pleas enter:'))
        take_money(num)
    else:
        print('Exited program')
        break
        
    
    