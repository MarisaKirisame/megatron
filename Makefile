nightly:
	opam switch create megatron --empty || true
	opam switch megatron
	opam update
	opam upgrade -y
	dune exec megatron
