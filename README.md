# 🌊 Esercizi in C – Common Core 42 & Pratica Personale

Benvenuto/a in questa collezione di esercizi base e intermedi scritti in **C**, pensati per chi affronta Exam 02 del Common Core di **42**, studia informatica a basso livello o vuole semplicemente tenersi in allenamento.

> ✅ Tutti i file sono indipendenti e compilabili singolarmente. (alcuni non hanno il main, bisognerebbe implementarlo = feel free to do it)
> 💡 Ottimo allenamento per logica, stringhe, liste, ricorsione e manipolazione di bit.

---

### 🔠 Stringhe
- `ft_itoa.c` – intero → stringa
- `ft_split.c` – separa una stringa in parole
- `rev_wstr.c` – parole in ordine inverso
- `rostring.c` – sposta la prima parola alla fine
- `str_capitalizer.c` – ogni parola con iniziale maiuscola
- `rstr_capitalizer.c` – solo lettere finali maiuscole
- `ulstr.c` – inverte il case

### 🧮 Numeri & Conversioni
- `ft_atoi_base.c` – convertitore base → decimale
- `add_prime_sum.c` – somma numeri primi ≤ n
- `fprime.c` – fattorizzazione in primi
- `is_power_of_2.c` – verifica potenza di 2
- `lcm.c` / `gcd.c` – minimo comune multiplo / massimo comun divisore

### 🧠 Bitwise
- `print_bits.c` – stampa binario
- `reverse_bits.c` – inverte i bit
- `swap_bits.c` – scambia nibble alto e basso

### 📊 Array e Ordinamento
- `sort_int_tab.c` – bubble sort
- `ft_range.c` – intervallo crescente
- `ft_rrange.c` – intervallo decrescente

### 🔗 Liste Collegate
- `ft_list_size.c` – conta i nodi
- `ft_list_foreach.c` – applica una funzione
- `ft_list_remove_if.c` – rimuove in base a valore
- `sort_list.c` – ordina i nodi (bubble swap in-place)

### 🧩 Flood Fill
- `flood_fill.c` – riempimento DFS in matrice 2D

### ✍️ Parsing, Caratteri, Manipolazione
- `first_word.c` / `last_word.c` – estrae prima/ultima parola
- `expand_str.c` – spaziatura uniforme tripla
- `epur_str.c` – rimuove spazi extra
- `repeat_alpha.c` – ripete ogni lettera n volte (a → 1, b → 2, ...)
- `rot_13.c`, `rotone.c`, `alpha_mirror.c` – cifrari e traslazioni
- `camel_to_snake.c` / `snake_to_camel.c` – conversione nomi variabili
- `search_and_replace.c` – sostituisce un solo carattere
- `inter.c`, `union.c`, `wdmatch.c` – gestione stringhe multiple

### 📤 Output
- `print_hex.c` – stampa intero in esadecimale
- `tab_mult.c` – tabellina moltiplicativa
- `ft_putnbr.c` – stampa un intero ricorsivamente

---

## ⚙️ Compilazione

Compila un file con:

```bash
gcc -Wall -Wextra -Werror nomefile.c -o output
./output
