========
variable
========

(define variable #f)
(define variable (+ 2 #d2))

---

(program
  (binding_variable
    name: (identifier)
    value: (boolean))
  (binding_variable
    name: (identifier)
    value: (procedure_call
             name: (identifier)
             (arguments
               (decimal_number)
               (decimal_number)))))

======
lambda
======

(lambda (arg1 arg2) 'variable)

---

(program
  (lambda
    (arguments
      (identifier)
      (identifier))
    (body
      (symbol))))


==========
no_args_procedures
==========

(define (proc1) 'variable)
(define  proc2 (lambda () 'variable))

---

(program
  (binding_procedure
    name: (identifier)
    (body
      (symbol)))
  (binding_procedure
    name: (identifier)
    (lambda
      (arguments)
      (body
        (symbol)))))

==========
vararg_procedures
==========

(define proc1 (lambda arg1 'variable))
(define proc2 (lambda (arg1 . arg2) 'variable))
(define (proc3 . arg1) 'variable)

---

(program
  (binding_procedure
    name: (identifier)
    (lambda
      (arguments (vararg_identifier))
      (body (symbol))))
  (binding_procedure
    name: (identifier)
    (lambda
      (arguments
        (identifier)
        (vararg_identifier))
      (body
        (symbol))))
  (binding_procedure
    name: (identifier)
    (arguments
      (vararg_identifier))
    (body
      (symbol))))

==========
multi_args_procedures
==========

(define proc1 (lambda (arg1 arg2) 'variable))
(define (proc2 arg1 arg2) 'variable)

---

(program
  (binding_procedure
    name: (identifier)
    (lambda
      (arguments
        (identifier)
        (identifier))
      (body
        (symbol))))
  (binding_procedure
    name: (identifier)
    (arguments
      (identifier)
      (identifier))
    (body
      (symbol))))

===
define_values
===

(define-values (a b . c)
  (values 1 2 3))

---

(program
  (binding_values
    (bindings
      (identifier)
      (identifier)
      (identifier))
    (body
      (procedure_call
        (identifier)
        (arguments
          (decimal_number)
          (decimal_number)
          (decimal_number))))))

===
record
===

(define-record-type
  struct (make-struct a b c)
  struct?
  (a geta)
  (b getb)
  (c getc setc))

---

(program
  (binding_record
    type: (identifier)
    (constructor
      name: (identifier)
      (identifier)
      (identifier)
      (identifier))
    predicate: (identifier)
    (field
      name: (identifier)
      accessor: (identifier))
    (field
      name: (identifier)
      accessor: (identifier))
    (field
      name: (identifier)
      accessor: (identifier)
      mutator: (identifier))))
