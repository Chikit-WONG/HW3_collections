def r(s):
    if len(s)<=1:
        return s
    return r(s[1:])+s[0]


s=input()
print(r(s))