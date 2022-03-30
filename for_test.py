i = 2
is_prime = int(input())
while True:
    if i != is_prime:
        if is_prime % i == 0:
            print("False")
            break
        else:
            i += 1
    print("True")
    break