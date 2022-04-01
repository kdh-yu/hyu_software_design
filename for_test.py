name = ['Amit' , 'psu', 'Sumit', 'Pooja' , 'Mini' , 'Ronit' , 'Sumit', 'Abdul', 'Poonam', 'psu', 'apple', 'Amit']
def previous(lst,name):
    for j in range(len(lst)):
        if lst[j] == name:
            print(f"{name} is at index {j}.")
            break
previous(name,"psu")