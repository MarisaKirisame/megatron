nightly:
	opam install dune
	opam update
	opam upgrade -y
	dune exec megatron
