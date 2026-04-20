# Super Trunfo

Um jogo de cartas Super Trunfo implementado em linguagem C, onde jogadores comparam atributos de países/cidades para determinar o vencedor.

## Descrição

Este projeto é uma implementação simples do jogo Super Trunfo, um jogo de cartas onde dois jogadores criam cartas com dados de países ou cidades e competem escolhendo atributos para comparação. O jogador que vencer em ambos os atributos escolhidos ganha a rodada.

## Atributos das Cartas

Cada carta contém os seguintes atributos:
- País/Nome da Cidade
- População
- Área (em km²)
- PIB (Produto Interno Bruto)
- Número de Pontos Turísticos
- Densidade Populacional (calculada automaticamente)
- PIB per Capita (calculado automaticamente)

## Como Jogar

1. Execute o programa
2. Digite os dados da primeira carta (País 1)
3. Digite os dados da segunda carta (País 2)
4. Escolha o primeiro atributo para comparação
5. Escolha o segundo atributo para comparação (diferente do primeiro)
6. O programa calcula e exibe o resultado

### Regras de Comparação

- Para a maioria dos atributos (População, Área, PIB per Capita, Pontos Turísticos): maior valor vence
- Para Densidade Populacional: menor valor vence
- O jogador que vencer ambos os atributos ganha
- Se houver empate em um atributo, o resultado é determinado pelo outro

## Estrutura do Código e Operadores

### Estrutura Geral do Programa

O programa segue uma estrutura sequencial clara:

1. **Declaração de Variáveis**: Todas as variáveis são declaradas no início da função `main()`
2. **Entrada de Dados**: Coleta interativa dos atributos das duas cartas
3. **Cálculos Automáticos**: Computação da densidade populacional e PIB per capita
4. **Seleção de Atributos**: Uso de estruturas de controle para escolher atributos de comparação
5. **Exibição de Resultados**: Apresentação das cartas e determinação do vencedor

### Operadores e Estruturas de Controle Utilizadas

#### Operador Ternário
O programa utiliza extensivamente o operador ternário (`? :`) para realizar comparações e atribuir valores booleanos:

```c
comparacao1 = populacao1 > populacao2 ? 1 : 0;
```

Este operador é usado para simplificar atribuições condicionais em todas as comparações de atributos.

#### Estruturas Switch Aninhadas
A seleção de atributos para comparação é implementada usando estruturas `switch` aninhadas:

```c
switch(atributoEscolhido1) {
    case 1:
        // Primeiro atributo: POPULAÇÃO
        switch(atributoEscolhido2) {
            case 1: // AREA
                // ...
                break;
            // outros casos
        }
        break;
    // outros casos para diferentes atributos
}
```

Esta abordagem permite uma navegação hierárquica através das opções disponíveis, garantindo que o segundo atributo seja diferente do primeiro.

#### Estruturas If-Else Aninhadas
Para determinar o resultado final, é utilizada uma estrutura `if-else`:

```c
if(resultado1 == 0) {
    printf("..... CARTA 2 GANHOU!!! .....");
} else if(resultado1 == 1) {
    printf("..... EMPATE!!! .....");
} else {
    printf("..... CARTA 1 GANHOU!!! .....");
}
```

#### Operadores de Comparação Encadeados
O programa emprega operadores de comparação (`>`, `<`, `==`) para avaliar os atributos. Para a densidade populacional, onde um valor menor é melhor, a lógica é invertida:

```c
comparacao2 = densidade1 < densidade2 ? 1 : 0;
```

#### Operadores Aritméticos
São utilizados para cálculos automáticos:

```c
densidade1 = (float) populacao1 / area1;
pibPerCapita1 = (float) PIB1 / populacao1;
```

### Padrões de Design

- **Separação de Responsabilidades**: Entrada, processamento e saída são claramente separados
- **Validação de Entrada**: Uso de `default` nos switches para tratar opções inválidas
- **Cálculos Transparente**: Atributos derivados são calculados automaticamente
- **Interface Textual Simples**: Foco na lógica do jogo sem complexidades visuais

## Exemplo de Uso

```
DADOS DA CARTA 1
Digite o nome do país:
Brasil
Digite a quantidade da população:
211000000
Digite a area da Cidade:
8514877
Digite o PIB da Cidade:
2000000000000
Digite a quantidade de pontos turísticos:
50

DADOS DA CARTA 2
Digite o nome do país:
Argentina
Digite a quantidade da população:
45000000
...
```

## Funcionalidades

- Entrada interativa de dados das cartas
- Cálculo automático de atributos secundários (Densidade e PIB per Capita)
- Seleção de atributos para comparação
- Validação de opções inválidas
- Exibição detalhada das cartas e resultado final

## Estrutura do Código

- `main()`: Função principal que controla o fluxo do jogo
- Entrada de dados via `scanf()`
- Cálculos automáticos para densidade e PIB per capita
- Lógica de comparação usando switches aninhados
- Saída formatada dos resultados

## Limitações

- Suporta apenas 2 jogadores
- Entrada limitada a valores numéricos válidos
- Não há persistência de dados entre execuções
- Interface puramente textual

## Autor

Projeto desenvolvido como exercício de programação em C.

## Licença

Este projeto é de uso educacional e pode ser modificado livremente.