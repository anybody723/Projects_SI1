sum = 0
for i in range(1,3):
    name = int(input(f"Type the name of the {i} project: "))
    price = int(input(f"Type the price of the {i} project: "))
    sum += price
average = sum/3

print(f"Total: {sum}")
print(f"Average: {average}")
