<div align="center">

<img src="assets/C-logo.png" width="120" alt="C Logo" />

# Praticando C
**Forjando a base da programação, ponteiro por ponteiro!**

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/gcc-%23A8B9CC.svg?style=for-the-badge&logo=gnu&logoColor=black)
![Windows](https://img.shields.io/badge/Windows-%230078D6.svg?style=for-the-badge&logo=windows&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-%230078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

</div>

---

## O que é este repositório?

Seja bem-vindo ao meu laboratório de **C**!
Aqui é onde eu consolido minha base em programação "direto no metal", lidando com alocação de memória, ponteiros e a sintaxe clássica da linguagem.

O objetivo principal deste espaço é documentar minha **evolução técnica** e servir como um campo de treinamento focado na minha preparação para a disciplina de **Estruturas de Dados**.

---

## Mapa do Repositório

```text
praticando-c/
│
├── assets/
│   ├── C-logo.png
│   └── enunciado_entrega_c.pdf  ← Enunciado dos exercícios 01 a 12
│
├── cabecalhos/
│   ├── cabecalho.c          ← Lógica por trás das funções utilitárias
│   └── cabecalho.h          ← Contratos, structs e declarações globais
│
└── praticas/
    ├── cadastro_clientes.c  ← (Prática 01) Gerenciamento via Structs + Alocação Dinâmica
    └── exercicio01.c ... exercicio12.c  ← Lista de exercícios da entrega de C
```

---

## O que tem dentro das Práticas?

| Arquivo | Descrição | Destaques Técnicos |
| :--- | :--- | :--- |
| `cadastro_clientes.c` | Um sistema de registro interativo de usuários via terminal. | `structs`, `malloc`, `free`, formatação de I/O |
| `calculadora_idade.c` | Transforma idade de anos/meses/dias para total de dias vividos. | Matemática, modularização com arquivos `.h` e `.c` |
| `exercicio01.c` | Calcula o valor final de um produto com imposto conforme o estado de destino. | `switch`, `do/while`, funções |
| `exercicio02.c` | Calcula média geométrica, ponderada, harmônica ou aritmética de 3 valores. | `switch`, `math.h`, menu interativo |
| `exercicio03.c` | Lê um vetor de 20 posições e exibe o vetor invertido. | `malloc`, `free`, ponteiros, vetores |
| `exercicio04.c` | Lê uma matriz 5x5 e imprime apenas os valores ímpares com suas posições. | matrizes, laços aninhados |
| `exercicio05.c` | Lê 4 notas e calcula a média final. | alocação dinâmica, ponteiros |
| `exercicio06.c` | Agenda telefônica com nome, e-mail e telefone. | `struct`, `typedef`, `malloc` |
| `exercicio07.c` | Calcula o IMC a partir de peso e altura. | passagem por referência, `math.h` |
| `exercicio08.c` | Lê, exibe e altera valores de vetores `int`, `float` e `char`. | múltiplas alocações, ponteiros |
| `exercicio09.c` | Converte 24 temperaturas de Kelvin para Fahrenheit. | vetores dinâmicos, conversão de unidades |
| `exercicio10.c` | Aplica taxa de correção de 5% no preço de brinquedos. | alocação com tamanho em tempo de execução |
| `exercicio11.c` | Cadastro de candidatos com nome, cidade e idade. | `struct`, `malloc`, leitura de strings |
| `exercicio12.c` | Estatísticas de notas: média, maior, menor e quantas ficaram acima da média. | ponteiros de saída, validação de entrada |

---

## Como rodar na sua máquina

Para compilar qualquer prática, certifique-se de ter o compilador **GCC** instalado. No terminal, a partir da raiz do projeto, utilize o padrão abaixo:

```bash
# 1. Compile a prática (incluindo a pasta de cabeçalhos caso necessário)
gcc -g praticas/[nome_da_pratica].c cabecalhos/*.c -o [nome_do_executavel].exe

# 2. Execute o arquivo gerado
./[nome_do_executavel].exe
```

---

<div align="center">
  <br>
  Feito com café, ódio por segmentation faults e muita dedicação.
</div>
