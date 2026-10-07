int main() {

  int ndia, bruto, grat, desc;
  float liq;

  printf("Digite a quantidade de dias trabalhado: ");
  scanf("%d", &ndia);

  bruto = ndia * 45;
  grat = bruto + (bruto * 0,05); 
  desc = grat * (grat * 4 / 100);
  liq = (float)grat - desc;

  printf("O valor líquido do salário é: %.2f", liq);

    return 0;