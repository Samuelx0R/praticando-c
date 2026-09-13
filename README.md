<div align="center">

<img src="assets/C-logo.png" width="120" alt="C Logo" />

# 💻 Praticando C
**Forjando a base da programação, ponteiro por ponteiro!**

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/gcc-%23A8B9CC.svg?style=for-the-badge&logo=gnu&logoColor=black)
![Windows](https://img.shields.io/badge/Windows-%230078D6.svg?style=for-the-badge&logo=windows&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-%230078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)

</div>

---

## 🚀 O que é este repositório?

Seja bem-vindo ao meu laboratório de **C**! 🧪
Aqui é onde eu consolido minha base em programação "direto no metal", lidando com alocação de memória, ponteiros e a sintaxe clássica da linguagem.

O objetivo principal deste espaço é documentar minha **evolução técnica** e servir como um campo de treinamento focado na minha preparação para a disciplina de **Estruturas de Dados**.

---

## 🗺️ Mapa do Repositório

Aqui a casa é organizada! Deixei de fora os arquivos de configuração do Git para focar apenas no que importa: o código.

```text
📂 praticando-c/
│
├── 🗂️ cabecalhos/
│   ├── cabecalho.c          ← Lógica por trás das funções utilitárias
│   └── cabecalho.h          ← Contratos, structs e declarações globais
│
└── 🛠️ praticas/
    ├── cadastro_clientes.c  ← (Prática 01) Gerenciamento via Structs + Alocação Dinâmica
    └── calculadora_idade.c  ← (Prática 02) Lógica de conversão de tempo
```

---

## 🕹️ O que tem dentro das Práticas?

| Arquivo | Descrição | Destaques Técnicos |
| :--- | :--- | :--- |
| `cadastro_clientes.c` | Um sistema de registro interativo de usuários via terminal. | `structs`, `malloc`, `free`, formatação de I/O |
| `calculadora_idade.c` | Transforma idade de anos/meses/dias para total de dias vividos. | Matemática, modularização com arquivos `.h` e `.c` |

---

## ⚙️ Como rodar na sua máquina

Para compilar, você só precisa do velho e confiável **GCC**. Puxe o terminal na raiz do projeto e divirta-se:

**Para rodar o Cadastro de Clientes:**
```bash
gcc -g praticas/cadastro_clientes.c -o cadastro_clientes.exe
./cadastro_clientes.exe
```

**Para rodar a Calculadora de Idade (que exige o cabeçalho customizado):**
```bash
gcc -g praticas/calculadora_idade.c cabecalhos/cabecalho.c -o calculadora_idade.exe
./calculadora_idade.exe
```

---

<div align="center">
  <br>
  Feito com ☕, ódio por segmentation faults e muita dedicação.
</div>
