set -e

process(){
  echo "processing $1..."
  tar -xf $1.tar.xz
  python3 generate.py $1.trace
  dune exec megatron -- $1.out
}

rm Layout*.cpp || true
rm *.out || true
process discord_nologin
process espn
process google_hover
process google_searchbar
process google_searchpage
process github_nologin
process wikipedia_idle
process wikipedia_hover
process hn_type
process speedometer2
rm *.trace
python3 report.py
