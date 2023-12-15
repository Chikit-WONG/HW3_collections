# str1="1234abcd"
# print(str1[::-1])

def string_reverse(str1):
    rstr1=''
    index=len(str1)
    while index>0:
        rstr1+=str1[index-1]
        index-=1
    return rstr1
print(string_reverse('1234abcd'))


# str2=''
# str2+='1'+'2'
# print(str2)