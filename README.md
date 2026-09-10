<div align="center">

<br/>

# 🖥️ Praticando C

> **Repositório de exercícios práticos de lógica de programação em linguagem C**

Coleção de programas desenvolvidos com o objetivo de **reforçar, estudar e aprofundar** o entendimento sobre a linguagem C e os fundamentos da lógica de programação.

<br/>

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c&logoColor=white)
![Plataforma](https://img.shields.io/badge/Plataforma-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![Compilador](https://img.shields.io/badge/Compilador-GCC%20%2F%20MinGW-A8B9CC?style=for-the-badge&logo=gnu&logoColor=black)
![Portfólio](https://img.shields.io/badge/Portf%C3%B3lio-Pessoal-green?style=for-the-badge&logo=github&logoColor=white)

</div>

---

## 🎯 Sobre o Repositório

Este repositório faz parte do meu **portfólio pessoal de aprendizado**.  
Aqui estão reunidos exercícios práticos escritos em **C**, desenvolvidos durante meus estudos de:

- **Lógica de programação** — raciocínio estruturado e resolução de problemas
- **Fundamentos da linguagem C** — sintaxe, tipos, fluxo de controle
- **Estruturas de dados básicas** — structs, arrays, strings
- **Gerenciamento de memória** — ponteiros, `malloc`, `free`
- **Modularização** — funções, header files, separação de responsabilidades

> 💡 Cada arquivo representa uma prática independente, focada em um ou mais conceitos específicos da linguagem.

---

## 📁 Estrutura do Repositório

```
praticando-c/
│
├── base.h          ← Header utilitário para o ambiente Windows
├── pratica01.c     ← Cadastro de clientes com structs e alocação dinâmica
└── README.md       ← Este arquivo
```

---

## 🔧 `base.h` — Header Utilitário

O [`base.h`](./base.h) é um header auxiliar criado para facilitar o desenvolvimento no **Windows com VS Code + MinGW**.  
Ele resolve automaticamente dois problemas comuns: garante que **caracteres acentuados** apareçam corretamente no terminal e **impede que o console feche** sozinho ao término do programa — sem precisar de nenhuma chamada manual no código.

```c
#include "base.h"  // Inclua sempre como primeiro #include
```

> **Nota:** Compatível apenas com **Windows**.

---

## 📌 Práticas

### 🗂️ Prática 01 — Cadastro de Clientes

> **Arquivo:** [`pratica01.c`](./pratica01.c)

Sistema de **cadastro e exibição de clientes** via terminal. O programa permite registrar múltiplos clientes com informações pessoais, profissionais e de localização, exibindo ao final um relatório completo e formatado.

**Conceitos praticados:**
- `struct` e `typedef`
- Alocação dinâmica com `malloc` e `free`
- Ponteiros e passagem por referência
- Leitura segura de strings com `fgets`
- Validação de entrada com `do...while`

---

## ⚙️ Como Compilar e Executar

```bash
# Compilar
gcc -g pratica01.c -o pratica01.exe

# Executar
./pratica01.exe
```

---

<div align="center">

<br/>

*Repositório de portfólio — aprendendo C, um programa por vez.* 💻

</div>
