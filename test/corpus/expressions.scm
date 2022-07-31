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
(read input-port)
(read)
((loadsomething))

((action) arg1 (get-arg))

---

(program
  (procedure_call
    name: (identifier)
    (arguments
      (decimal_number)
      (decimal_number)))
  (procedure_call
    name: (identifier)
    (arguments
      (identifier)))
  (procedure_call
    name: (identifier))
  (procedure_call
    name: (procedure_call
            name: (identifier)))
  (procedure_call
    name: (procedure_call
            name: (identifier))
    (arguments
      (identifier)
      (procedure_call
        name: (identifier)))))

===
syntax_definition
===

(define-syntax syntaxtoken
  (syntax-rules (reserved)
    ((ignored-identifier arg1 arg2)
     (return (+ arg1 arg2)))))

(let-syntax
  (amacro (syntax-rules ()
            ((_ arg1 arg2)
             (return (+ arg1 arg2)))))
  'none)

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
                  (identifier)))))))))
  (binding_let_syntax
    (syntax_binding
      keyword: (identifier)
      (transformer
        (reserved)
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
                    (identifier)))))))))
    (body (symbol))))

===
if_conditional
===

(if variable 'missing-branch)
(if variable #true #false)

---

(program
  (if_conditional
    test: (identifier)
    consequence: (symbol))
  (if_conditional
    test: (identifier)
    consequence: (boolean)
    alternative: (boolean)))

===
when_conditional
===

(when variable 'body)

---

(program
  (when_conditional
    test: (identifier)
    body: (body (symbol))))

===
unless_conditional
===

(unless variable 'body)

---

(program
  (unless_conditional
    test: (identifier)
    body: (body (symbol))))

===
cond_conditional
===

(cond
  ((and var1 var2) => 'and-test)
  ((or var1 var2) 'or-test)
  (var1)
  (else 'alternaitve))

---

(program
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
      (body (symbol)))))

===
case_conditional
===

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
      (body (symbol)))))

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

(let-values
  ((a 2)
   ((a b c) (values 1 2 3)))
  'end)

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
              (decimal_number)))))))
  (binding_let
    (multi_bindings
      formal: (identifier)
      value: (decimal_number))
    (multi_bindings
      formal: (identifier)
      formal: (identifier)
      formal: (identifier)
      value: (procedure_call
               name: (identifier)
               (arguments
                 (decimal_number)
                 (decimal_number)
                 (decimal_number))))
    (body
      (symbol))))

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
    (body
      (binding_variable
        name: (identifier)
        value: (decimal_number))))
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
(delay-force 42)

---

(program
  (delay
    (procedure_call
      name: (identifier)
      (arguments
        (decimal_number) (decimal_number))))
  (delay
    (decimal_number)))

===
parameterize
===

(parameterize ()
  (read))

(parameterize ((input-port (current-input-port)))
  (read input-port))

---

(program
  (parameterize
    (body
      (procedure_call
        name: (identifier))))
  (parameterize
    (binding
      name: (identifier)
      value: (procedure_call
        name: (identifier)))
    (body
      (procedure_call
        name: (identifier)
        (arguments
          (identifier))))))

===
guard
===

(guard (value ((> value 0)))
  (do-stuff))

---

(program
  (guard
    value: (identifier)
    (guards
      (guard
        test: (procedure_call
                name: (identifier)
                (arguments
                  (identifier)
                  (decimal_number)))))
    (body
      (procedure_call
        name: (identifier)))))

===
case_lambda
===

(case-lambda
  (variable (call1) (call2))
  ((var1 var2) (call1) (call2))
  ((variable1 . rest) (call1) (call2)))

---

(program
  (case_lambda
    (clause
      formal: (identifier)
      (body
        (procedure_call
          name: (identifier))
        (procedure_call
          name: (identifier))))
    (clause
      formal: (identifier)
      formal: (identifier)
      (body
        (procedure_call
          name: (identifier))
        (procedure_call
          name: (identifier))))
    (clause
      formal: (identifier)
      formal: (identifier)
      (body
        (procedure_call
          name: (identifier))
        (procedure_call
          name: (identifier))))))
