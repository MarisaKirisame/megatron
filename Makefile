nightly:
	opam switch create megatron --empty || true
	opam switch megatron
	opam update
	opam upgrade -y
	eval $(opam env)
	opam install dune
	dune exec megatron
