height = int(input('Type your height: '))
sex = str(input('Type your sex: '))
weight = 0
if sex == "F":
    weight = 62.1 * height - 44.7
else:
    weight = 72.7 * height - 58
print(f"You ideal weight is: {weight}")
