import matplotlib.pyplot as plt
import csv


x = []
y = []
real = []
imag = []

with open('../points/data.txt', newline='') as input:
    file = csv.reader(input, delimiter=',')
    for row in file:
        x.append(float(row[0]))
        y.append(float(row[1]))

plt.scatter(x, y, c="cyan", s=5.0)
plt.savefig("input.png")
plt.clf()

with open('../points/out.txt', newline='') as output:
    file = csv.reader(output, delimiter=',')
    for row in file:
        real.append(float(row[0]))
        imag.append(float(row[1]))

markerline, stemlines, baseline = plt.stem(x, real, markerfmt='C0o')
markerline, stemlines, baseline = plt.stem(x, imag, markerfmt='C1o')
plt.setp(baseline, color='k', linewidth=1)
plt.savefig("output.png")
