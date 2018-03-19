triangles = []

for i in range(1,15):
    triangles.append((i*(i+1))/2)
print(triangles)
count = 0

def calculate_value(word):
    val = 0
    for ele in word.lower():
        val += (ord(ele) - 96)
    return val

with open("coded_triangle_numbers.txt", 'r') as file:
    text = file.read().split(',')
    print(len(text))
    for word in text:
        if calculate_value(word) in triangles:
            count += 1

print(count)
print(calculate_value('sky') in triangles)