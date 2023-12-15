info_dict={
    'Wanglihong':{'Department':'kejibu',
                  'Salary':3000,
                  'Degree':1},
    'Zhoujieluan':{'Department':'shichangbu',
                   'Salary':5000,
                   'Degree':2},
    'Linjunjie':{'Department':'shichangbu',
                   'Salary':7000,
                   'Degree':3},
    'Zhangxueyou':{'Department':'kejibu',
                   'Salary':4000,
                   'Degree':1},
    'Liudehua':{'Department':'shichangbu',
                   'Salary':6000,
                   'Degree':2}
}
print(f'Results of employees before appreciation and salary increase:{info_dict}')
print()
for name in info_dict:
    if info_dict[name]['Degree']==1:
        info_dict[name]['Degree']+=1
        info_dict[name]['Salary']+=1000
print(f'Results of employees before appreciation and salary increase:{info_dict}')
print()
print(type(info_dict['Linjunjie']['Degree']))