# Brandtools Cpp

Dies sind simple Tools in C++. Die 3 folgenden Tools sind derzeit vorhanden:

1. Brandkurven
2. Brandkurven writer
3. Kennwerte writer

# Kompilation

## Projekt herunterladen

Das Projekt kann als zip beim grünen <> Code Button heruntergeladen werden, oder mit git:

```bash
git clone https://github.com/ad2108/Brandtools-Cpp.git
```

## Compiler
Um die Tools zu compilieren ist g++ notwendig. Dies ist ein GNU-Compiler.

Linux:

```bash
sudo apt install g++
```

Msys2(Windows):

```bash
pacman -S mingw-w64-x86_64-gcc
```

Unter Windows können die Tools im gcc Ordner, oder nach setzen der TEMP Variablen über Doppelklick, bzw. Terminal ausgeführt werden.

## Make
Den Tools liegt eine Makefile bei über die die Kompilation automatisiert ausgeführt werden kann. Falls Kenntnisse zur manuellen Kompilation vorliegen kann diese ausgeführt werden. Sonst sollte make installiert werden. (Achtung make und cmake sind 2 verschieden Programme!)

Linux:

```bash
sudo apt install make
```

Msys2(Windows):

```bash
pacman -S make
```

Nach der Installation von Make kann das Projekt automatisiert compiliert werden. Dafür wird im Ordner mit der Makefile das Terminal geöffnet und make eingetippt. Danach sollte die Kompilation beginnen. Falls sich make nicht über das Terminal öffnen lässt ist es wichtig zu überprüfen, ob die PATH Variablen richtig gesetzt sind.

```bash
make
```

# Brandkurven

![image](images/brandkurven.png)

*Abbildung 1: Screenshot brandkurven.exe*

Das Tool Brandkurven kann von der Einheits-Temperaturzeitkurve, der Externen Brandkurve und der Hydro-Karbonbrandkurve die Gastemperatur, die nach einer bestimmten Zeit erreicht ist berechnen. Ebenfalls kann die Zeit nach der eine bestimmte Gastemperatur erreicht wird iteriert werden.

Um das Programm zu starten kann auf die kompilierte brandkurven.exe geklickt werden. Dann sollte ein Terminal sich öffnen und die Optionen gewählt werden. Falls dies nicht funktioniert kann man das Terminal im Ordner öffnen und das Programm wie folgt starten:

```bash
./brandkurven.exe
```

# Brandkurven writer

![image](images/brandkurven_writer.png)

*Abbildung 2: Screenshot brandkurven_writer.exe*

Dieses Tool kann Dateien erstellen, die die errechneten Werte der Brandkurven enthalten. Für alle Zahlenwerte können Gleitkommazahlen verwendet werden.(Achtung , wird nicht akzeptiert!)

Zahlenformat: 1 = 1.0 = 1.0e1

Tipp: Um eine \*.csv zu erzeugen wird als Trennzeichen ein ; gesetzt.

Einheiten:

0. Zeit min.
1. Temperatur °C

Tipp: Zur Umrechnung auf Sekunden beim Umrechnungsfaktor für die Zeit 60 eingeben.

# Kennwerte writer

![image](images/kennwerte_writer.png)

*Abbildung 3: Screenshot kennwerte_writer.exe*

Dieses Tool kann Dateien erstellen, die die errechneten Materialkennwerte für Stahl, Edelstahl und Beton enthalten. Dabei wird die Dichte, die spezifische Wärmekapazität und die Wärmeleitfähigkeit in Abhängigkeit von der Temperatur berechnet und in der Datei ausgegeben. Die Temperaturspanne für die Gültigkeit der errechneten Werte ist zwischen 20°C bis 1200°C.

Je nach Anforderungen können die Einheiten mit Umrechnungsfaktoren umgerechnet werden. Das Zahlenformat entspricht dabei dem des Brandkurven wirters.

Einheiten:

0. Temperatur °C
1. Dichte kg/m³
2. spezifische Wärmekapazität J/kgK
3. Wärmeleitfähigkeit W/mK

