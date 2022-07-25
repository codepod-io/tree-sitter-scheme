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

===
syntax_definition
===

(define-syntax syntaxtoken
  (syntax-rules (reserved)
    ((ignored-identifier arg1 arg2)
     (return (+ arg1 arg2)))))

---

(program
  (binding_syntax
    name: (identifier)
    (transformer
      (reserved (identifier))
      (syntax_rule
        (pattern
          (identifier)
          (identifier)
          (identifier))
        (template
          (procedure_call
            name: (identifier)
            (arguments
              (procedure_call
                name: (identifier)
                (arguments
                  (variable)
                  (variable))))))))))
