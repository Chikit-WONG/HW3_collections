#coding:UTF-8


# fr=open("C:\word.txt",'r',encoding="UTF-8")
# fw=open("C:\wordbak.txt",'w',encoding="UTF-8")
# for line in fr:
#     line=line.strip()
#     words=line.split(",")
#     if words[4]=='test':
#        continue
#     fw.write(line)
#     fw.write('\n')
# fr.close()
# fw.close()
    
fr=open("C:\word.txt",'r',encoding='UTF-8')
fw=open("C:\wordbak.txt",'w',encoding="UTF-8")
for line in fr:
    line=line.strip()
    if line[4]=='test':
        continue
    fw.write(line)
    fw.write('\n')
fr.close()
fw.close()