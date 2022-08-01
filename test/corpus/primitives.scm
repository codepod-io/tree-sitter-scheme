=======
numbers
=======

-4
1523e-2
#b#e101+i
#d0.1224##
#E#o174-i
#I#d912@235
#x#I1af@aaff
-325.352f+2
4711#/90##i
#b+111+1001
+215i
#xff##/9a###
+4711+900i
#I#o+nan.0i
#b#E-inf.0i
+inf.0

---

(program
  (decimal_number)
  (decimal_number)
  (binary_number)
  (decimal_number)
  (octal_number)
  (decimal_number)
  (hexadecimal_number)
  (decimal_number)
  (decimal_number)
  (binary_number)
  (decimal_number)
  (hexadecimal_number)
  (decimal_number)
  (octal_number)
  (binary_number)
  (infnan))

===
quoted_datum
===

'symbol
'3
'(everything is quoted)

---

(program
  (symbol)
  (symbol)
  (quote (list)))

===
byte_vetor
===

#u8(192 47 11 08 15 90 210)

---

(program
  (byte_vector
    (decimal_number)
    (decimal_number)
    (decimal_number)
    (decimal_number)
    (decimal_number)
    (decimal_number)
    (decimal_number)))

======
string
======

"test-string _|@1423g3"

---

(program
  (string))

====
bool
====

#true
#f

---

(program
  (boolean)
  (boolean))

=====
chars
=====

#\k
#\x9f
#\newline

---

(program
  (character)
  (character)
  (character))

===
identifiers
===

1error
^error
no-error2
#!key
##internal
...

---

(program
  (decimal_number) (identifier)
  (identifier)
  (identifier)
  (identifier (keyword))
  (identifier (internal))
  (identifier (elipsis)))
