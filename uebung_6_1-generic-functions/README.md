# Übung 6.1

## Lernziele

In dieser Übung soll das Thema *generische Programmierung* mittels Templates sowie die Behandlung von Ausnahmen mittels Exceptions vertieft und angewendet werden.

- Generische Programmierung kennzeichnet sich dadurch aus, dass Klassen oder Funktionen nicht für einen bestimmten Datentyp implementiert sind, sondern nur bestimmte Anforderungen an die Typen stellen.

## Aufgabe 6-1: Vorbereitung

**a):**

Schreiben Sie eine generische Funktion *min*, die das Minimum zweier Werte liefert.

$$min : T \times T \rightarrow T \quad \text{mit} \quad a,b \mapsto \text{min} \lbrace a, b \rbrace$$

- Die Funktion setzt voraus, dass sich zwei Werte mit einem Operator wie < vergleichen lassen, der konkrete Datentyp hingegen spielt keine Rolle.

**b):**

Schreiben Sie eine generische Funktion *swap*, die zwei Werte tauscht.

- Hierbei werden keine Anforderungen an den Datentyp gestellt.

**c):**

Erstellen Sie einen Testtreiber, um die Korrektheit Ihrer Implementierung zu zeigen.
