opam switch create megatron --empty || true
opam switch megatron
eval $(opam env)
opam update
opam upgrade -y
opam install core dune menhir ppx_deriving yojson core_unix -y
./run.sh
