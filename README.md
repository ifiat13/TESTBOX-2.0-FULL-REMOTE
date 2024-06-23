# TESTBOX-2.0-FULL-REMOTE
Aplicația creata este ușor de utilizat într-un final ea se rezumă la 3 comenzi in serial monitor la Arduino Nano si anume 1,2,d(setam un anumit senzor sau ii deconectam pe ambii),si la un panel intuitiv in CANoe(scrie la fiecare buton pentru ce este folosit) care comanda un Arduino Uno.
Dar sa revenim la pașii de urmat pana sa ajungem in stadiul utilizării si anume trebuie conectat hardware-ul. 
Cablurile pentru protocoalele de comunicare trebuie conectate de la testbox 2.0 full remote la Vector VN în funcție de ce protocoale se folosesc pe proiect, acele cabluri vor fi conectate, 
se vor conecta la mufele din testbox 2.0 senzorii și tot din testbox 2.0 full remote vor merge și două cabluri banană pentru alimentarea senzorilor.
Urmează alimentarea testbox-ului 2.0 full remote la o priza normală, conectarea celor două plăcuțe Arduino la laptop pentru asigurarea comunicării seriale.
În final mai rămâne de conectat și mufele de la debugger la Arduino nano și de la Arduino nano în cei doi senzori.

În urma conectării cablurilor și a alimentării testbox-ului 2.0 full remote mai sunt necesare următoarele modificări in CANoe:

Din simulation setup se va adaugă un nou nod
În nodul nou creat, se va insera script-ul Send_recieve_Serial-Arduino și se va salva
La acest pas, se va adăuga în CANoe la variabile de sistem următorul fișier .vsysvar
Dupa care se va adauga panelul în CANoe:TestBox.xvp
După finalizarea pasului 4, este necesară pornirea aplicației CANoe după care se va selecta în panel-ul adăugat ComPortul, adică portul pe care se realizează comunicarea cu Arduino UNO. 
După selectarea portului de comunicare, ledul roșu se va face verde și testbox-ul full remote se poate comanda din panel. Pentru a comanda cel de-al doilea Arduino, Nano, primul pas constă în deschiderea aplicației Arduino, urmând selectarea portului pe care este conectat.
Comenzile pentru acest Arduino cum am amintit mai sus sunt 1 sau 2 pentru senzorul din stânga sau din dreapta sau d , în funcție de cum s-a pus panglica pe senzor. 
Dacă s-a pus 1 pe Left, atunci, la scrierea comenzii 1 se va realiza conectarea la senzorul Left, iar la scrierea comenzii 2, conectarea se va face la senzorul Right.
 
