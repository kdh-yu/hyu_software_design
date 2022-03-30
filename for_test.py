def find_max(list):
    list.sort(reverse=True)
    return list[0]
list = [int(i) for i in input("Please input : ").split()]
print(find_max(list))