import random
num=random.randint(1,10)
guess_num=int(input('Please input a number'))
if guess_num==num:
    print('correct')
else:
    if guess_num>num:
        print('too big')
    else:
        print('too small')
    guess_num=int(input('Please input a number'))
    if guess_num==num:
        print('correct')
    else:
        if guess_num>num:
            print('too big')
        else:
            print('too small')
        guess_num=int(input('Please input a number'))
        if guess_num==num:
            print('correct')
        else:
            print(f'over,you are wrong.The correct answer is {num}.')