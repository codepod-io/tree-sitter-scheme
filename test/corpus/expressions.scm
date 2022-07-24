===
lambda
===

(lambda x x)

---

(program
  (lambda
    (arguments
      (vararg_identifier))
    (body
      (variable))))

===
procedure_call
===

(+ 2 #d2)

---

(program
  (procedure_call
    name: (identifier)
    (arguments
      (decimal_number)
      (decimal_number))))
