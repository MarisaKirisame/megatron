from bs4 import BeautifulSoup
import bs4
import json

with open('html/dijkstra.html', 'r') as file: html_doc = file.read()

soup = BeautifulSoup(html_doc, 'html.parser')

max_depth = 0
max_width = 0
total_spine = 0
cnt = 0
zro_children_cnt = 0
one_children_cnt = 0

def walk(x, depth, spine):
  global max_depth
  global max_width
  global total_spine
  global cnt
  global zro_children_cnt
  global one_children_cnt
  children = []
  max_depth = max(max_depth, depth)
  total_spine += spine
  cnt += 1
  if isinstance(x, bs4.NavigableString) or len(x.contents) == 0:
    zro_children_cnt += 1
  if not isinstance(x, bs4.NavigableString):
    max_width = max(max_width, len(x.contents))
    if len(x.contents) == 1:
      one_children_cnt += 1
    for c in x.contents:
      children.append(walk(c, depth + 1, spine + 1 + len(x.contents)))
  return {"children": children}

tree = walk(soup.body, 0, 0)
print(max_depth, max_width, int(total_spine / cnt), cnt, zro_children_cnt, one_children_cnt)

with open('data.json', 'w') as file: json.dump(tree, file)
