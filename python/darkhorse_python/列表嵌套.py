import random
teacher=['A','B','C','D','E','F','G','H']
classroom=[[],[],[]]
for i in range(8):
    a=random.randint(0,2)
    classroom[a].append(teacher[i])
print(f'classroom1: {classroom[0]}')
print(f'classroom2: {classroom[1]}')
print(f'classroom3: {classroom[2]}')
