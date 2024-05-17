nightly:
	opam switch create megatron || true
	opam switch megatron
	opam update
	opam upgrade -y
	dune exec megatron
