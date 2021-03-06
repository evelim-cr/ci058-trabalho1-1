#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

unsigned char *LerStringDin(int *tam);
void LimpaBuffer ();
int LeOpcao (int min, int max);
unsigned char *ngets (unsigned char *str, int n, FILE *fp);
void PressioneEnter ();
void intTobin(int num, int qtdbits, unsigned char *bin);
int binToint(unsigned char *bin, int qtdbits);
int pot(int base, int exp);
int EhFimTexto (unsigned char *texto, int len);
int EhImpar (int x);
void incrementa_sequencia(int *seq);
int EhSequenciaEsperada (unsigned char *seqbin, int seq);
void loadBar(int x, int n, int r, int w);