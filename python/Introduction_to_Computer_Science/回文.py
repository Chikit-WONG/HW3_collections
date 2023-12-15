def is_pul(s):
    if len(s)==1 or len(s)==0:
        return True
    if s[0]==s[-1]:
        return True
    shorter_s=s[1:len(s)-1:1]
    is_pul(shorter_s)
    return False
    
    
s=input()
print(is_pul(s))