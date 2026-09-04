# SnakeGame

## Despre proiect

Acest proiect reprezintă o variantă a binecunoscutului joc Snake, realizată în limbajul C++.
Jucătorul dirijează un șarpe care se plimbă pe un teren dreptunghiular și trebuie să adune
mere. De fiecare dată când șarpele înghite un măr, corpul lui devine mai lung, iar provocarea
crește pe măsură ce se apropie de propria coadă.

## Cum se joacă

1. Șarpele înaintează fără oprire în una dintre cele patru direcții posibile: în sus, în jos,
   spre stânga sau spre dreapta.
2. Direcția se controlează de la tastatură, în timp real.
3. Odată ce ajunge peste un măr, șarpele îl consumă, mai câștigă un segment și pe teren apare
   imediat un alt măr.
4. Partida se încheie în momentul în care șarpele iese în afara terenului sau se lovește de
   propriul corp.
5. Obiectivul este acumularea unui scor cât mai ridicat, adică un număr cât mai mare de mere
   mâncate.

## Tipurile de date folosite

- **Point** (`point.hpp`) — o structură simplă care reține o pereche de coordonate (`x` și `y`).
  Ajută la marcarea oricărei poziții de pe teren.
- **Direction** (`direction.hpp`) — o enumerare care descrie sensul în care se deplasează
  șarpele: Top, Left, Right, Bottom.
- **Apple** (`apple.hpp`) — o clasă pentru mărul aflat pe teren; păstrează locul unde se află și
  oferă acces la acesta.
- **Snake** (`snake.hpp`) — clasa șarpelui; ține evidența segmentelor din care e alcătuit,
  a lungimii sale și include acțiunile de deplasare, creștere și interogare a poziției.
- **Board** (`board.hpp`) — clasa terenului de joc, caracterizat prin lățimea și înălțimea sa.
- **GameEngine** (`game_engine.hpp`) — nucleul jocului; adună laolaltă șarpele, mărul și terenul
  și dirijează întreaga desfășurare prin metodele de inițializare și rulare.
- **Painter** (`painter.hpp`) — componenta de afișare, care redă pe ecran elementele jocului
  prin funcțiile de desenare a imaginilor și de scriere a textului.
- **Listener** (`listener.hpp`) — componenta care urmărește tastatura și transmite mai departe
  tasta apăsată de jucător.