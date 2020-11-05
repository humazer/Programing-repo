int main() {
   int resistance_1 = 12.0; // Сопр рез 1
   int resistance_2 = 3.0; // Сопр рез 2
   int resistance_3 = 12.0; // Сопр рез 3
   float result = 1.0 / (1.0 / resistance_1 + 1.0 / resistance_2 + 1.0 / resistance_3); // По формуле 1/R = 1/R1 + 1/R2 + 1/R3
   return 0;
}
