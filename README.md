# 🃏 Super Trunfo Paises

Este projeto em C simula um jogo de cartas no estilo *Super Trunfo*, utilizando paises como tema. Cada carta representa uma cidade com atributos como população, área, PIB, pontos turísticos, e mais. O jogador compara atributos entre cartas para determinar o vencedor.

## 📌 Funcionalidades

- Cadastro manual de duas cartas representando cidades.
- Cálculo automático de:
  - Densidade populacional
  - PIB per capita
  - Super Poder (soma de todos os atributos + inverso da densidade)
- Comparação entre atributos escolhidos pelos jogadores.
- Validação especial: para densidade populacional, a **menor** vence.

## 📋 Atributos das Cartas

Cada carta possui os seguintes atributos:

- Código da carta
- Nome do país
- Estado
- Nome da cidade
- População
- Área (km²)
- PIB (em bilhões de reais)
- Número de pontos turísticos
- Densidade populacional (calculado)
- PIB per capita (calculado)
- Super Poder (calculado)

## 🧮 Como funciona

O programa executa as seguintes etapas:

1. O usuário insere os dados de **duas cidades**.
2. O programa calcula atributos derivados.
3. O usuário escolhe **dois atributos** para comparar entre as cartas.
4. O programa exibe os valores comparados e determina qual carta possui o maior valor (ou menor, no caso da densidade populacional).

## 🖥️ Exemplo de Uso

Ao executar o programa, será exibido um menu de entrada como este:

```
==================
Cadastro da Carta 1
==================
Digite os dados abaixo Carta 1:
Nome do Pais: Brasil
Letra do Estado: SP
Codigo da carta: A01
Nome da cidade: São Paulo
Quantidade populacional: 12000000
Numero de pontos turisticos: 20
Area em Km2: 152145
O PIB: 230000000000
```

Após o cadastro das duas cartas, você verá:

```
Escolha o primeiro atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Populacional (MENOR vence!)
6 - PIB per Capita
7 - Super Poder
```

Depois de escolher os atributos, o programa exibirá os valores comparados e determinará o vencedor.

## 🛠️ Arquivos/Códigos Criados

- `CartasSuperTrunfo.c`: código principal do jogo com todas as lógicas de entrada, processamento e saída.
- Lógica implementada:
  - Cadastro manual via `scanf`
  - Cálculo automático de métricas
  - Menu dinâmico com verificação de escolhas
  - Sistema de comparação com validação especial para densidade populacional

## 🔧 Melhorias Futuras (Sugestões)

- Adicionar menu interativo com `while` e `switch` para permitir múltiplas rodadas.
- Incluir um sistema de pontuação.
- Permitir cadastro de mais de duas cartas.
- Armazenamento em arquivos `.txt` ou `.csv`.
- Implementar rankings automáticos dos atributos.

## 📚 Tecnologias Utilizadas

- Linguagem C
- Terminal/Console

## 📌 Observações

- O programa funciona apenas no terminal.
- A entrada de dados deve seguir o formato pedido para evitar falhas.
- Não há sistema de validação de erros para dados inválidos neste estágio inicial, apenas a condição default do switch.
- Pode ser organizado melhor o código criando metodos e organizando em mais classes.
---