import csv

with open('capture.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    file = open('test.csv', 'w')
    writer = csv.writer(file)
    line_count = 0
    for row in csv_reader:
        newrow = []
        for word in row:
            newrow.append(word.strip())
            print(newrow)
        #row.replace(" ", "")

        writer.writerow(newrow)
    file.close()
