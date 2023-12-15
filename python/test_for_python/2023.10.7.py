stu_score={
    10:'Jack1',
    'Jack2':88,
    'Jack2':99
}
keys=stu_score.keys()
for key in keys:
    print(f'Student:{key},score:{stu_score[key]}')
print(len(stu_score))