===
line_comments
===

;; comment like its hot
(define *CONSTANT* ;; lisp?
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

===
uncommented_datum
===

#;(or var foo)

---

(program
  (comment
    (or_conditional
      (identifier)
      (identifier))))

===
labels
===

# 3 = (label? #t)
# 4 #

---

(program
  (label
    (procedure_call
      name: (identifier)
      (arguments
        (boolean))))
  (label))

===
multiline_comment
===

#| This is a multiline
  comment
  end |#

---

(program
  (comment))

