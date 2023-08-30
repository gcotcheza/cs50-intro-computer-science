from sys import argv


# if len(argv) == 2:
#     print(f"Hello, {argv[1]}")
# else:
#     print("hello, world")


# for i in range(len(argv)):
#     print(argv[i])

# for arg in argv:
#     print(arg)

# Will slice the list and show only from index 1 till index 4
for arg in argv[1:4]:
    print(arg)