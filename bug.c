int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); //This will print 20
  free(ptr); //ERROR: This is undefined behavior because ptr is not allocated using malloc or calloc
  return 0;
}