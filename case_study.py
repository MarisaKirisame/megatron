import matplotlib.pyplot as plt
from matplotlib import font_manager
import numpy as np

FIG_SIZE = 5

font_manager.fontManager.addfont('LinBiolinum_Rah.ttf')
prop = font_manager.FontProperties(fname='LinBiolinum_Rah.ttf')
plt.rcParams['font.family'] = 'sans-serif'
plt.rcParams['font.sans-serif'] = prop.get_name()
plt.rcParams['font.size'] = 13

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
ax.hist(size, np.geomspace(1, 1000, 8).tolist(), edgecolor='black')
ax.set_xscale("log")

from matplotlib.ticker import StrMethodFormatter, NullFormatter
ax.xaxis.set_major_formatter(StrMethodFormatter('{x:.0f}'))
ax.xaxis.set_minor_formatter(NullFormatter())

ax.set_xlabel("Number of Nodes Changed Per Frame")

fig.set_dpi(300)
ax.tick_params(which="major", width=1, length=8)
ax.tick_params(which="minor", width=1, length=4)
fig.set_figheight(FIG_SIZE)
fig.set_figwidth(FIG_SIZE)

fig.savefig('CaseStudy.png', bbox_inches='tight')
