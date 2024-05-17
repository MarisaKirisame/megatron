opam switch create megatron --empty || true
opam switch megatron
eval $(opam env)
opam update
opam upgrade -y
opam install dune yojson -y
dune exec megatron
