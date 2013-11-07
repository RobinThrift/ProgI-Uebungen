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



##Aufgabe 3

###a)

**(1)** $$$ x=4+3 \cdot (y=1+(z=\underline{3 \cdot 2}+1)) $$$   
**(2)** $$$ x=4+3 \cdot (y=1+(z=\underline{6+1})) $$$  
**(3)** $$$ x=4+3 \cdot (y=\underline{1+(z=7)}) $$$  
**(4)** $$$ x=4+\underline{3 \cdot (y=8)} $$$  
**(5)** $$$ x=\underline{4+24} $$$  
**(6)** $$$ x=24 $$$  


###b)
**(1)** $$$ \underline{8 + 7} \leq 16^{2 * 7 + 3 == 17} $$$   
**(2)** $$$ 15 \leq 16^{\underline{2 * 7 + 3} == 17} $$$   
**(3)** $$$ 15 \leq 16^{\underline{17 == 17}} $$$  
**(4)** $$$ \underline{15 \leq 16^1} $$$   
**(5)** $$$ 1 $$$

###c)
5 + 1 > 2 * 2 && (x = 7 * 2 == 28 / 7.0) || 1  
Trivial, da egal was der linke Ausdruck ist, wird das Ergebnis 1 sein.


##Aufgabe 4
Der Präprozessor scannt den Quellcode bevor er dem Compiler übergeben wird und sorgt dafür, dass die benötigten, inkludierten Dateien angefügt werden und definierte Konstanten durch ihre Werte ersetzt werden.

Dieses Programm würde "3" ausgeben, da der Präprozessor #define unabhängig vom `if` C-Statement ausführen würde und somit den Wert für `CDE` setzt.