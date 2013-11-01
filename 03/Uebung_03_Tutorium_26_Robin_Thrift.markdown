#Programmieren 1 - Übungsblatt 3

---

##Aufgabe 1

###a)

####(1) 
14.F<sub>16</sub> => 10100.1111<sub>2</sub>

Jeder Ziffer werden grundsätzlich erstmal 4 Bits zur Verfügung gestellt, da mit 4 Bits die größte Ziffer des Hexadezimalsystems dargestellt werden kann (F = 1111). Dann kann jede Ziffer einfach in eine Binärzahl umgewandelt werden, dafür kann z. B. einfach kurz in Dezimalsystem umgerechnet werden um die Bits für eine Stelle zu berechnen (F<sub>16</sub> = 15<sub>10</sub> = 1111<sub>2</sub>).


Um eine Zahl aus einem anderen Zahlensystem ins Dezimalsystem umzurechnen kann diese einfache Formel umgewandelt werden, wo A der Zahl entspricht und r dem Radix (der Basis). a<sub>*i*</sub> ist die Ziffer an der Stelle *i*. *n* ist die Anzhal der Ziffern vor dem Komma und *m* die Anzahl Ziffern hinter dem Komma.

$$
V(A) = \sum_{\substack{i = -m}}^{n-1} a_ir^i
$$

Somit ergibt sich für 14.F<sub>16</sub> = 20.9375<sub>10</sub>.

####(2)
100101.101<sub>2</sub> kann analog zu (1) berechnet werden, d. h. um diese zahl in eine Hexadezimalzahl umzurechnen weisen wir je 4 Bit einer Ziffer im Hexadezimalsystem zu. Somit ergibt sich (von rechts angefangen):

- 0101<sub>2</sub> => 5
- 0101<sub>2</sub> => 5
- 0010<sub>2</sub> => 2

100101.101<sub>2</sub> entspricht somit 25.5<sub>16</sub>

Für die Berechnung des Wertes im Dezimalsystem kann die gleiche Formel wie aus (1) verwendet werden.

100101.101<sub>2</sub> = 37.625<sub>10</sub>



###b)