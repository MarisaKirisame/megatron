nightly:
	opam switch create megatron --empty || true
	opam switch megatron
	opam update
	opam upgrade -y
	eval $(opam env)
	dune exec megatron
