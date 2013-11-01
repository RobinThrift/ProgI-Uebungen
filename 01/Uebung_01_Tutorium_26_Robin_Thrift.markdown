#Übungsblatt 1

---

##Aufgabe 1

###a)
Ein Algorithmus ist eine in eindeutige, kleine Teilschritte zerlegte abstrakte Anweisung um ein bestimmtes Problem zu lösen (unabhängig von Programmiersprachen oder (Laufzeit-)Umgebungen). Neben den Schritten die zur Lösung des Problems nötig sind, müssen auch die Typen von Ein- bzw. Ausgabeparametern definiert sein.

###b)
Ein Programm ist häufig eine mögliche (konkrete) Implementierung eines Algorithmus. Aber nicht jedem Programm muss ein Algorithmus im formalen Sinne zu Grunde liegen. Ein Algorithmus ist also eine Abstrakte Beschreibung zur Lösung eines Problems und ein Programm ist die konkrete Implementierung in einer Programmiersprache.

###c)
Der gegebene Algorithmus ist ein sehr einfacher Sortiergsalgorithmus (Bubblesort). Durch das rekursive vergleichen zweier benachbarter Zahlen kann eine Zahlenreihe der Größe nach sortiert werden.

| Schrittnr. | Zustand vor Algorithmus-Schritt | Algorithmus-Schritt |
| :--------- | :------------------------------ | :------------------ |
|1|10, 5, 1|10 wird ausgewählt|
|2|10, 5, 1|10 wird mit 5 verglichen|
|3a|10, 5, 1|10 ist größer als 5 => 10 und 5 werden vertausch|
|1|5, 10, 1|5 wird ausgewählt|
|2|5, 10, 1|5 wird mit 10 verglichen|
|3b|5, 10, 1|5 ist kleiner als 10 => 10 wird ausgewählt|
|2|5, 10, 1|10 wird mit 1 verglichen|
|3a|5, 10, 1|10 ist größer als 1 => 10 und 1 werden vertauscht|
|1|5, 1, 10|5 wird ausgewählt|
|2|5, 1, 10|5 wird mit 10 verglichen|
|3a|5, 1, 10|5 ist größer als 1 => 5 und 1 werden vertauscht|
|1|1, 5, 10|1 wird ausgewählt|
|2|1, 5, 10|1 wird mit 5 verglichen|
|3b|1, 5, 10|1 ist kleiner als 5 => 5 wird ausgwählt|
|2|1, 5, 10|5 wird mit 10 verglichen|
|3b|1, 5, 10|5 ist kleiner als 10|
|4|1, 5, 10|ENDE|

###d)
Nein, da in diesem Algorithmus die Fälle für Listen die weniger als zwei Elemente enthalten nicht berücksichtigt wurden. Wenn die List nur ein Element enthalten würde, würde eine Implementierung bei Schritt 3 abstürzten, bei einer leeren Liste sogar schon bei Schritt 1. Für alle anderen Listen sollte der Algorithmus das korrekte Ergebnis zurückliefern.

##Aufgabe 2

Variablen sind benannte "Behälter" für Werte. Einer Variablen kann ein spezifischer Wert zugeordnet werden, der sich auch ändern kann. Variablen können zum Beispiel Speicheradressen sein. Daten die im Speicher liegen werden durch Adressen eindeutig identifiziert. 
Gegeben sei der Speicherblock:
|Adresse|Daten|
|:------|:----|
|1000|101|
|2000|111|

Dann würde ein Aufruf der Adresse 1000 den Wert "101" zurückliefern. Analog dazu würde das schreiben von "100" auf Adresse 2000 den Wert "111" ersetzen.


##Aufgabe 3
Eine Anweisung ist eine eindeutige Bezeichnung für einen Befehl der ausgeführt werden muss, wie z. B. "add(1, 2)" um die Zahlen 1 und 2 zu addieren. Programme in imperativen Programmiersprechen setzten sich (primär) aus aufeinander folgenden Anweisungen zusammen, die nacheinander ausgeführt werden.


##Aufgabe 4

###a) 
Viele Programme würden nicht erfolgreich laufen, wenn man z. B. Sonderfälle nicht beachtet. Hat man z. B. ein Programm in dem eine Zahl durch eine andere geteilt werden muss, so muss erst geprüft werden ob der Divisor nicht 0 ist.


###b)
![](file://localhost/Users/RobinThrift/Google%20Drive/Uni/Courses/WiSe13-14/ProgI/Excerises/01/chart1_white.png)

###c)
Oftmals muss ein Teil eines Programms mehrmals ausgeführt (wiederholt) werden, wie z. B. der Sortieralgorithmus von Aufgabe 1c. Hierfür können Schleifen verwendet werden, die einen bestimmten Code so oft wiederhohlen, bis eine Abbruchbedingung erfüllt ist (etwa das eine einer List erreicht wurde). Abbruchbedingungen verhindern demnach, das Schleifen sich unendlich wiederhohlen.

###d)
![](file://localhost/Users/RobinThrift/Google%20Drive/Uni/Courses/WiSe13-14/ProgI/Excerises/01/chart2.png)