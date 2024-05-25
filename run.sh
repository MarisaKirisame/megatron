set -e

process(){
  tar -xf $1.tar.xz
  python3 generate.py $1.trace
  dune exec megatron -- $1.out
}

rm *.trace
process google_hover
process google_searchbar
process google_searchpage
process github_nologin
process wikipedia_idle
process wikipedia_hover
process hn_type
rm *.trace
python3 report.py
