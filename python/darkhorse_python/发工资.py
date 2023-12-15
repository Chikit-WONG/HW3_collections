money=10000
count=0
for i in range(1,21):
    import random
    score=random.randint(1,11)
    if score<5:
        print(f'staff{i},your score is {score},less than 5,no wages,next')
        continue
    if money >=1000:
        print(f'staff{i},your score is {score},here is your wages')
        money-=1000
        count+=1
    elif money==0:
        print(f'Insufficient balance.The current balance is {money},which is not enough to pay the salary.It will not be pay anymore.We will come back next month.')
        break
    else:
        print(f'The remain balance is {money}.')
    print(f'There are {count} staffs get the salary.')