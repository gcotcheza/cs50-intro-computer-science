# from cs50 import get_int

# x = get_int("x: ")
# y = get_int("y: ")

# print (x + y)



# x = input("x: ") // x will be string
# y = input("y; ") // y will be string
# print (x + y) // prints 12 because it concatenates x and y



# x = int(input("x: "))
# y = int(input("y; "))
# print (x + y) // prints the sum of x and y



x = int(input("x: "))
y = int(input("y; "))

z = x / y
# print (z)
print (f"{z:.50f}") // results in floating point imprecision
