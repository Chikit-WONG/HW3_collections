nums=[]
lucky=[]
n=int(input('Please enter a number:'))
i=1
while i<=n:
    nums.append(i)
    if nums[i-1]%6==0:
        lucky.append(i)
    i+=1
print(f'nums: {nums}')
print(f'lucky: {lucky}')

