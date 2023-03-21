# Inlamning2
## Programmering inbyggda system- Dino Mangafic - Vanessa Lemos

### Uppgift
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
#### Skriv ett program som läser in en textfil som innehåller en sekvens med valutanamn och valutavärden. Först kommer ett namn på en valuta, sen hur mycket en enhet av den valutan kostar i svenska öre.

Exempel:

SEK 100 NOK 140 USD 950

Detta exempel säger: 1 SEK kostar 100 öre, 1 NOK kostar 140 öre, 1 USD kostar 950 öre.

Programmet ska öppna filen och läsa in ett förutbestämt antal valutor från filen.

Dvs: Ni kan hårdkoda vilken fil som ska öppnas, och hur många valutor den filen innehåller.

Filens innehåll ska avkodas och fyllas in i en struktarray. Varje strukt ska innehålla en pekare till valutanamnet och ett heltal som ger värdet på en enhet av valutan.

Mellan varje element i filen finns det minst ett space/tab/newline-tecken.

När filen har avkodats och innehållet har behandlats skall all information skrivas ut i en tabell med valutans namn och värde, varje par på en egen rad.

Skapa lämpliga testfiler där tab och nya rader händer på olika platser. Minst en av era testfiler ska innehålla minst 20 valutor. Namn och värde på valutor kan hittas på Internet.

### Det går bra att anta att en fil aldrig innehåller mer än 100 valutor, och att filen i sig inte är större än 10 000 bytes.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Hint 1: Läs in hela filen i en minnesbuffer innan innehållet behandlas.

Hint 2: Om ni bygger era egna strängar som ska behandlas, kom ihåg att avsluta dem med ’\0’-tecknet.

Hint 3: För att konvertera nummer kan funktionen strtol() vara till hjälp.
