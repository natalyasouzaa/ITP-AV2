# ITP - Avaliação 2 

**Identificação**

Nome: Natalya Souza

Projeto: Opção 1 - Boletim de uma pequena turma

**Descrição**

O programa Boletim de uma Pequena Turma foi desenvolvido em linguagem C para facilitar o registro e a análise das notas dos estudantes de uma turma. Ele permite calcular as médias individuais, verificar a situação de cada estudante e obter um resumo do desempenho geral da turma.

**Funcionalidades**

- Cadastro de 1 a 10 estudantes e seus nomes.

- Registro de três notas por estudante, entre 0 e 10.

- Cálculo das médias individuais.

- Cálculo da média geral da turma.

- Exibição de uma tabela com nomes, notas, médias e situações.

- Identificação da maior média e dos estudantes empatados.


**Compilação e execução**

O programa foi desenvolvido em linguagem C e está disponível no arquivo main.c

Para compilar utilizando o GCC, execute: gcc -std=c11 -Wall -Wextra main.c -o programa

Para executar em compiladores online, basta inserir o código-fonte, selecionar a linguagem C e clicar em Run.

Após iniciar o programa, informe a quantidade de estudantes, seus nomes e as três notas de cada um para visualizar os resultados.


**Testes**


Teste 1 – Funcionamento normal

Entrada:

Quantidade de estudantes: 1

Nome: Ana

Notas: 5, 6 e 7

Resultado:

Média individual: 6,00

Situação: Atingiu a meta

Média geral da turma: 6,00

Maior média: 6,00

Estudante com maior média: Ana

Teste 2 – Nota inválida

Entrada:

Quantidade de estudantes: 1

Nome: Bia

Nota 1: 11

Resultado:

Exibição de mensagem de nota inválida.

Solicitação de uma nova nota.

**Vídeo**

link da apresentação no YouTube.
