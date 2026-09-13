<div align="center">

<br/>

```text
██████╗ ██████╗  █████╗ ████████╗██╗ ██████╗ █████╗ ███╗   ██╗██████╗  ██████╗      ██████╗
██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██║██╔════╝██╔══██╗████╗  ██║██╔══██╗██╔═══██╗    ██╔════╝
██████╔╝██████╔╝███████║   ██║   ██║██║     ███████║██╔██╗ ██║██║  ██║██║   ██║    ██║     
██╔═══╝ ██╔══██╗██╔══██║   ██║   ██║██║     ██╔══██║██║╚██╗██║██║  ██║██║   ██║    ██║     
██║     ██║  ██║██║  ██║   ██║   ██║╚██████╗██║  ██║██║ ╚████║██████╔╝╚██████╔╝    ╚██████╗
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝      ╚═════╝
```

<br/>

> **Repositório de exercícios práticos de lógica de programação em linguagem C**

<br/>

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c&logoColor=white)
![Plataforma](https://img.shields.io/badge/Plataforma-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![Compilador](https://img.shields.io/badge/Compilador-GCC%20%2F%20MinGW-A8B9CC?style=for-the-badge&logo=gnu&logoColor=black)
![Portfólio](https://img.shields.io/badge/Portf%C3%B3lio-Pessoal-green?style=for-the-badge&logo=github&logoColor=white)

</div>

---

## 🎯 Sobre o Repositório

Este repositório faz parte do meu **portfólio pessoal de aprendizado**.  
Aqui estão reunidos exercícios práticos e estruturados em **C**, desenvolvidos com o objetivo de reforçar, estudar e compreender a lógica de programação, boas práticas e as minúcias da linguagem.

---

## 📁 Estrutura de Arquivos

A organização do projeto foi pensada para manter um ambiente limpo, modular e de fácil navegação:

```text
praticando-c/
│
├── cabecalhos/
│   ├── cabecalho.c            ← Implementações de funções utilitárias e de interface
│   └── cabecalho.h            ← Assinaturas, structs e declarações globais
│
├── praticas/
│   ├── cadastro_clientes.c    ← Cadastro de clientes com uso de structs e alocação dinâmica
│   └── calculadora_idade.c    ← Sistema de cálculo e conversão de idades completas em dias
│
├── .gitignore                 ← Arquivos ignorados pelo Git
└── README.md                  ← Documentação do repositório
```

---

## ⚙️ Como Compilar e Executar

Para compilar as práticas, recomendamos o uso do **GCC** a partir da raiz do repositório.

### 📝 Exemplo 1: Prática Simples (Sem Múltiplos Módulos)

Para compilar o arquivo de cadastro de clientes:

```bash
gcc -g praticas/cadastro_clientes.c -o cadastro_clientes.exe
./cadastro_clientes.exe
```

### 🧠 Exemplo 2: Prática com Dependências de Cabeçalho

Para compilar uma prática que utiliza arquivos da pasta de cabeçalhos (como a calculadora de idade):

```bash
gcc -g praticas/calculadora_idade.c cabecalhos/cabecalho.c -o calculadora_idade.exe
./calculadora_idade.exe
```

---

<div align="center">

<br/>

*Aprendendo C, um programa por vez. Buscando sempre a excelência no código limpo e organizado!* 💻✨

</div>
