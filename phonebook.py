# people = dict()
people = {
    "Ghie": "06395094039",
    "Bas": "06849347536"
}

name = input("Name: ")

name = name.capitalize()

if name in people:
    number = people[name]
    print(f"Number: {number}")
