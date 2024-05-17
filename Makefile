nightly:
	opam switch create megatron --empty || true
	opam switch megatron	
	eval $(opam env)
	opam update
	opam upgrade -y
	opam install dune -y
	dune exec megatron
