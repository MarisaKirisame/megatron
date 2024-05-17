nightly:
	opam switch create megatron --empty || true
	opam switch megatron
	opam env
	echo $$(opam env)
	eval $$(opam env)
	opam update
	opam upgrade -y
	opam install dune -y
	dune exec megatron
