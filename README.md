# Brandtools Cpp

Dies sind simple Tools in C++. Die 3 folgenden Tools sind derzeit vorhanden:

1. Brandkurven
2. Brandkurven writer
3. Kennwerte writer

# Compiling

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
Den Tools liegt eine Makefile bei über die die Compilation automatisiert ausgeführt werden kann. Falls Kenntnisse zur manuellen Compilation vorleigen kann iese ausgeführt werden. Amsonsten muss make installiert werden. (Achtung make und cmake sind 2 verschieden Programme!)

Linux:

```bash
sudo apt install make
```

Msys2(Windows):

```bash
pacman -S make
```

Nach der Installation von Make kann das Projekt automatisiert werden. dafür wird im Ordner mit der Makefile das Terminal geöffnet und make eingetippt. Dannach sollte die Compilation beginnen.

```bash
make
```

# Brandkurven

Das Tools Brandkurven kann von der Einheits-Temperaturzeitkurve, der Externen Brandkurven und der Hydro-Karbonbrandkurve die Gastemperatur, die nach einer bestimmten Zeit erreicht ist berechnen. Ebenfalls kann die Zeit nach der die Gastemperatur erreicht wird iteriert werden.

Um das Program zu starten kann auf die Compilierte *.exe geklickt werden. Dass sollte ein Terminal sich öffnen und die Optionen gewählt werden. Falls dies nicht funktioniert kann man das Terminal im Ordner öffnen und das Program starten.

```bash


Um das Program zu starten kann auf die Compilierte *.exe geklickt werden. Dass sollte ein Terminal sich öffnen und die Optionen gewählt werden. Falls dies nicht funktioniert kann man das Terminal im Ordner öffnen und das Program starten.

```bash
./brandkurven.exe
```
