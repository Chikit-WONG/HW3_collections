m_list = []
m_list2 = []
dic1 = {}
dic2 = {}
sentence = input()

for i in sentence:
    judge = True
    for j in m_list:
        if i == j or i == ' ':
            judge = False
    if judge == True:
        m_list.append(i)

for i in m_list:
    key = i
    value = sentence.count(i)
    dic1[i] = value
    m_list2.append(value)

for i in range(len(m_list2) - 1, -1, -1):
    for j in range(len(m_list2) - i - 1):
        if m_list2[j] < m_list2[j + 1]:
            temp = m_list2[j]
            m_list2[j] = m_list2[j + 1]
            m_list2[j + 1] = temp

for i in m_list2:
    for j in dic1:
        if dic1[j] == i:
            dic2[j] = i

print(dic2)