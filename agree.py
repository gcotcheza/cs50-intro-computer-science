s = input("Do you agree? ")

# if s == "Y" or s == "y":
#     print("Agreed")
# elif s == "N" or s == "n":
#     print("Not agreed")

# if s in ["Y", "y"]:
#     print("Agreed")
# elif s in ["N", "n"]:
#     print("Not agreed")


# if s.lower() in ["y", "yes"]:
#     print("Agreed")
# elif s.lower() in ["n", "no"]:
#     print("Not agreed")

s = s.lower()
if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("Not agreed")