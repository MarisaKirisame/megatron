exception EXN of string

let panic msg = raise (EXN msg)
