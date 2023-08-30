import csv

#open and append line at a time.
# file = open("phonebook.csv", "a")

# name = input("Name: ")
# number = input("Number: ")

# writer = csv.writer(file)
# writer.writerow([name, number])

# file.close()


# using with and as file, no need call the file.close function
# with open("phonebook.csv", "a") as file:

#     name = input("Name: ")
#     number = input("Number: ")

#     writer = csv.writer(file)
#     writer.writerow([name, number])



with open("phonebook.csv", "a") as file:

    name = input("Name: ")
    number = input("Number: ")

    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})