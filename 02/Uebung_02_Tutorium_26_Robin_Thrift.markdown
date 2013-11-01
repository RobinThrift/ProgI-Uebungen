#Programmieren 1 - Übungsblatt 2


##Aufgabe 1

###a)
**Zeile 01**: `Main` sollte `main` sein, da C case-sensitive ist, sind "main" und "Main" zwei unterschiedliche Worte. Da der C-Compiler eine `main` Funktion erwartet würde dieser Quellcode nicht compilieren.

**Zeile 04**: Zwar kein direkter Syntaxfehler, aber wenn die Person eine neue Zeile nach dem "Wo sind die Fehler?" anzeigen wollte, so hätte diese lieber ein "\" anstelle eines "/" vor dem "n" schreiben sollen.

**Zeile 04**: Am Ende der Zeile fehlt das Semikolon.

**Zeile 06**: Es fehlt die geschweifte Klammer "}" um die Funktion `main` zu beenden.



##Aufgabe 2

###a)
`printf` akzeptiert als ersten Parameter einen String, welcher "Platzhalter" enthalten kann, sowie als weitere Parameter Werte/Variablen um diese zu füllen. Die Platzhalter enthalten bereits Angaben über den Typ des Wertes, welcher eingesetzt wird. So kann z. B. mit `"%d"` eine Ganzzahl (mit dem Radix 10) ausgegeben werden. Zudem lassen sich so weitere Formatierungen festlegen, so wie, die Genauigkeit von Fließkommazahlen oder wie viele Zeichen eine Zahl einnehmen soll und ob sie mit Nullen vorne aufgefüllt werden soll, etc.



##Aufgabe 3
###c)
`./countletters_html(.exe) < faust.txt > letters.html`