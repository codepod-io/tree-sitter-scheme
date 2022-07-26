===
quasiqoutation
===

`(eval proc to ,(+ 42 0))
`(splice to *list* ,@(42 0))

---

(program
  (quasiquotation
    (symbol)
    (symbol)
    (symbol)
    (unquotation
      (procedure_call
        name: (identifier)
        (arguments
          (decimal_number)
          (decimal_number)))))
  (quasiquotation
    (symbol)
    (symbol)
    (symbol)
    (splice
      (decimal_number)
      (decimal_number))))
