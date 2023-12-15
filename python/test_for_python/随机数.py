import time
current_time_in_seconds=int(time.time())
age=int(input())
drink='ok' if age>=18 else'not ok'
print(current_time_in_seconds)
print(drink)