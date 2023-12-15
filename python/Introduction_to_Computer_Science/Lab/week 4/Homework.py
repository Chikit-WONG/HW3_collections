import secrets
a = secrets.randbelow(100)+1

judge = False

for i in range(10):
    b = input("Enter a number:")

    try:
        b = int(b)
        if 1 <= b or b <= 100:
                judge = True
    except ValueError:
        print("What you inputted is Invalid.")
        judge = False
        break

    if judge:
        b = int(b)
        if a == b:
            print("correct!")
            break
        else:
            if b > a:
                    print("too high")
            elif b < a:
                print("too low")
            elif a == b:
                print("correct")

print("Game over the correct answer is", a)
