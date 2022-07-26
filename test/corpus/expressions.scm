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
      (identifier))))

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
                  (identifier)
                  (identifier))))))))))

===
conditional
===

(if variable 'missing-branch)
(if variable #true #false)
(when variable 'body)

(cond
  ((and var1 var2) => 'and-test)
  ((or var1 var2) 'or-test)
  (var1)
  (else 'alternaitve))

(case variable
  ((4) 'return)
  ((2) => 'nonesense)
  (() => 'reached)
  (else => 'receipent))

(case variable
  (() 'return)
  (else 'receipent))
---

(program
  (if_conditional
    test: (identifier)
    consequence: (symbol))
  (if_conditional
    test: (identifier)
    consequence: (boolean)
    alternative: (boolean))
  (when_conditional
    test: (identifier)
    body: (body (symbol)))
  (cond_conditional
    (cond_clause
      test: (and_conditional (identifier) (identifier))
      consequence: (symbol))
    (cond_clause
      test: (or_conditional (identifier) (identifier))
      consequence: (body (symbol)))
    (cond_clause
      test: (identifier))
    (else_clause
      (body (symbol))))
  (case_conditional
    on: (identifier)
    (case_clause
      test: (decimal_number)
      consequence: (body (symbol)))
    (case_clause
      test: (decimal_number)
      consequence: (symbol))
    (case_clause
      consequence: (symbol))
    (else_clause
      (symbol)))
  (case_conditional
    on: (identifier)
    (case_clause
      consequence: (body (symbol)))
    (else_clause
      (body (symbol))))
  )

===
assignment
===

(set! x #true)
(set! x (string->list "test"))

---

(program
  (assignment
    binding: (identifier)
    value: (boolean))
  (assignment
    binding: (identifier)
    value: (procedure_call
             name: (identifier)
             (arguments
               (string)))))

===
binding_let
===

(let lp ((i 0))
  (lp (+ i 1)))

(letrec ((i (+ 2 1)))
  (lp (+ i 1)))

---

(program
  (binding_let
    label: (identifier)
    (binding
      (identifier)
      (decimal_number))
    (body
      (procedure_call
        name: (identifier)
        (arguments
          (procedure_call
            name: (identifier)
            (arguments
              (identifier)
              (decimal_number)))))))
  (binding_let
    (binding
      (identifier)
      (procedure_call
        name: (identifier)
        (arguments
          (decimal_number)
          (decimal_number))))
    (body
      (procedure_call
        name: (identifier)
        (arguments
          (procedure_call
            name: (identifier)
            (arguments
              (identifier)
              (decimal_number))))))))

===
begin
===

(begin
  (define x 0))

(define a
  (begin 'no-definitions))

---

(program
  (binding_begin
    (binding_variable
      name: (identifier)
      value: (decimal_number)))
  (binding_variable
    name: (identifier)
    value: (begin
             (symbol))))

===
do_loop
===

(do
  ((i 0 (+ 1 i)))
  ((= i 5) i)
  'I-dont-know)

(do ((i 0 5))
    ((= i 5)))

---

(program
  (do_loop
    (iteration_step
      var: (identifier)
      init: (decimal_number)
      step: (procedure_call
              name: (identifier)
              (arguments
                (decimal_number)
                (identifier))))
    test: (procedure_call
            name: (identifier)
            (arguments
              (identifier) (decimal_number)))
    result: (identifier)
    (body (symbol)))
  (do_loop
    (iteration_step
      var: (identifier)
      init: (decimal_number)
      step: (decimal_number))
    test: (procedure_call
            name: (identifier)
            (arguments
              (identifier) (decimal_number)))))

===
delay
===

(delay (+ 4 2))

---

(program
  (delay
    (procedure_call
      name: (identifier)
      (arguments
        (decimal_number) (decimal_number)))))
