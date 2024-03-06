from Python.Functions.arithmetic import array_sum

n1 = int(input('Type the first score: '))
n2 = int(input('Type the second score: '))
n3 = int(input('Type the third score: '))
sum = array_sum([n1, n2, n3])
average = sum/3
if average >= 60:
    print(f"Approved!")
else:
    print(f"Reproved!")