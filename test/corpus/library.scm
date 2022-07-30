===
library
===

(define-library
  tree-sitter-r5rs
  (import (scheme base))
  (export tree-sitter-r7rs)
  (begin (define my-val #true))
  (include "afile")
  (include-library-declarations "test" "some" "decl")
  (cond-expand
    (identifier )
    (scheme)
    (else (include "anotherfile"))))

---

(program
  (library
    (identifier)
    (library_declaration
      (import_declaration
        (import_set
          (identifier)
          (identifier))))
    (library_declaration
      (export
        (identifier)))
    (library_declaration
      (binding_begin
        (binding_variable
          (identifier)
          (boolean))))
    (library_declaration
      (includer
        (string)))
    (library_declaration
      (string))
    (library_declaration
      (cond_expand_clause
        (feature_requirement
          (identifier)))
      (cond_expand_clause
        (feature_requirement
          (identifier)))
      (library_declaration
        (includer
          (string))))))
