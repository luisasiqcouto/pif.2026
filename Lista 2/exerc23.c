#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio, duracao_seg;
    int inicio_em_segundos, total_segundos;
    int h_fim, m_fim, s_fim;

    printf("Digite o horario de inicio (Horas Minutos Segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_seg);

    inicio_em_segundos = h_inicio * 3600 + m_inicio * 60 + s_inicio;

    total_segundos = inicio_em_segundos + duracao_seg;

    total_segundos %= 86400;

    h_fim = total_segundos / 3600;
    m_fim = (total_segundos % 3600) / 60;
    s_fim = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}