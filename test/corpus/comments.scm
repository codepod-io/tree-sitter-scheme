===
comments
===

;; Comment like it R5RS
(define *CONSTANT* ;; this is lisp, right?
  (or #true #false)) ;; 42

---

(program
  (comment)
  (binding_variable
    name: (identifier)
    (comment)
    value: (or_conditional
             (boolean) (boolean)))
  (comment))
