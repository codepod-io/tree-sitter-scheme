===
shebang
===

#!/usr/bin/env gsi -:-8,f8
1

---

(program
  (decimal_number))

===
includes
===

(load "file" environment)
(include "file.scm")
(include-ci "file")

---

(program
  (load_procedure
    (string)
    environment: (identifier))
  (includer
    (string))
  (includer
    (string)))

===
import
===

(import
  (my-library-1 120)
  (only   (my-library-2) a-function)
  (except (my-library-3) b-function)
  (prefix (library) lib)
  (rename (library) (my new)))

---

(program
  (import_declaration
    (import_set
      (identifier)
      (identifier))
    (import_set
      (import_set
        (identifier))
      (identifier))
    (import_set
      (import_set
        (identifier))
      (identifier))
    (import_set
      (import_set
        (identifier))
      (identifier))
    (import_set
      (import_set
        (identifier))
      (identifier)
      (identifier))))
