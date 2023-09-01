import csv

with open("favorites.csv", "r") as file:
    reader = csv.reader(file)
    # next(row) # will skip the column header
    for row in reader:
        favorite = row[1]
        print(favorite)