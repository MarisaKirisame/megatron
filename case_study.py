import matplotlib.pyplot as plt

fig, ax = plt.subplots()

size = [
    1,1,1,1,
    2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
    3,3,3,3,
    4,4,4,4,4,
    5,5,5,5,
    6,6,6,6,6,6,
    7,7,7,7,7,7,7,
    8,8,8,8,
    9,9,
    10,10,10,
    11,
    12,12,12,12,12,
    13,
    14,
    15,
    16,
    17,17,17,17,17,
    18,18,
    19,19,19,
    20,20,
    21,
    25,
    27,27,
    28,
    30,30,
    32,32,
    36,36,
    37,
    39,39,39,
    44,
    45,
    51,51,
    53,
    55,
    60,60,
    67,67,
    72,
    78,
    80,
    86,
    89,
    91,
    112,
    159,
    168,
    177,
    179,
    228,
    240,
    264,
    290,
    335,
    347,
    486,
    714,
    774,
    787
]
print(len(size))
print(len([x for x in size if x <= 20]))
ax.hist(size, [1,2,5,10,20,50,100,200,500,1000], edgecolor='black')
ax.set_xscale("log")

from matplotlib.ticker import StrMethodFormatter, NullFormatter
ax.xaxis.set_major_formatter(StrMethodFormatter('{x:.0f}'))
ax.xaxis.set_minor_formatter(NullFormatter())

ax.set_xlabel("Delta Size")
ax.set_ylabel("Number of Delta")

plt.show()