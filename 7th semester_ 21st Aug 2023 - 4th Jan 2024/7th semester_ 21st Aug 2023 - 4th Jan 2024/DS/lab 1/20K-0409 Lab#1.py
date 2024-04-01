
# 1. Lists/Input and Output:

import math
cubes = [1, 8, 27, 64, 125]
cubes.append(7**3)
print(cubes)

# slices
letters = ['a', 'b', 'c', 'd', 'e']
letters[2:5] = ['C', 'D', 'E']
print(letters)

# open files
with open('text.txt', 'r+', encoding='utf-8') as f:
    read_data = f.read()
    print(read_data)
    f.write('\nThis is updated line\n')
    print(read_data)


# 2. determinant of quadratic equation

a, b, c = map(float, input('Enter values of a, b, c,  use spaces: ').split())

D = b**2-4*a*c

if D > 0:
    r1 = (-b+math.sqrt(D))/(2*a)
    r2 = (-b-math.sqrt(D))/(2*a)
    print("Root 1: ", r1)
    print("Root 2: ", r2)
elif D == 0:
    root = -b/(2*a)
    print("Root: ", root)
else:
    print("Only Complex roots")

    # 3. smaller


def smaller(array, size, n):
    c = 0
    for i in range(size):
        if array[i] < n:
            c += 1  # increment c if element is smaller than n
    return c


x = [31, 56, 11, 5, 24, 14, 19, 23, 22]
size = len(x)

r1 = smaller(x, size, 23)
print(r1)

r2 = smaller(x, size, 14)
print(r2)

#  4. Duplicates

list = [12, 24, 35, 24, 88, 120, 155, 88, 120, 155]
unique = set()
result = []

for i in list:
    if i not in unique:
        unique.add(i)
        result.append(i)
print(result)

# 5. intersection

l1 = [1, 3, 6, 78, 35, 55]
l2 = [12, 24, 35, 24, 88, 120, 155]

s1 = set(l1)
s2 = set(l2)

insec = s1 & s2

insecList = list(insec)

print(insecList)

# 6. BMI

weight = float(input("Weight in kg: "))
height = float(input("Height in meters: "))

bmi = weight / (height ** 2)

print(f"BMI is: {bmi:.2f}")

if bmi < 18.5:
    print("Underweight.")
elif 18.5 <= bmi < 24.9:
    print("Normal weight.")
else:
    print("Overweight.")

    # 7. Sales

growthMul = 1.3
sales = 5000
sales7years = sales * (growthMul ** 7)

print(f"Sales after 7 years: {sales7years:.2f}$")

# 8. stone
mkg = float(input("Weight in kg: "))
Mstone = (mkg * 2.2) / 14
print(f"Weight in stone is: {Mstone:.2f} stones")

# 9.
house = ["hall", 11.3, "kitchen", 6, "bedroom", 12.5]
print(house)
print(house[0:2])

# 10.

st1 = ["Aun", [3.5, 3.6, 3.7, 3.8, 3.9, 4.0]]
st2 = ["Bilal", [3.2, 3.4, 3.5, 3.5, 3.6, 3.7]]
st3 = ["Imran", [2.9, 3.0, 3.1, 3.2, 3.2, 3.3]]
Students = [st1, st2, st3]
print(Students)

for i in Students:
    name = i[0]
    scores = i[1]
    print(f"Student Name: {name}")
    print(f"GPA Scores: {scores}")
