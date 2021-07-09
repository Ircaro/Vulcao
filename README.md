# Vulcão 

_Você é o responsável pelo próximo turno na supervisão do vulcão Kilauea. Seu trabalho consiste em monitorar ‘P’, a pressão interna do vulcão, e, caso ela ultrapasse ‘T’, o limite para erupção, soar o alarme._

### Entrada

A primeira linha da entrada consiste de ‘T’ (1 <= T <= 100000), um inteiro correspondente ao limite de pressão para erupção. As próximas linhas contêm inteiros ‘P’ (1 <= P <= 100000), denotando as medições da pressão interna do vulcão, até que a entrada termine com 0 (zero).

### Saída

Seu programa deve imprimir “ALARME”, caso ocorra ‘P > T’ em alguma leitura, e “O Havai pode dormir tranquilo”, caso contrário.

Entrada | Saída 
:-----: | :-----: 
4 2 3 4 5 0 | ALARME
100 51 0 15 20 99 50 0 | O Havai pode dormir tranquilo
