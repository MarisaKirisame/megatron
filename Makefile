nightly:
	opam update
	opam upgrade -y
	dune exec megatron
