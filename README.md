<div align="center">

<br/>

```
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
Aqui estão reunidos exercícios práticos escritos em **C**, desenvolvidos com o objetivo de reforçar, estudar e compreender a lógica de programação e a linguagem.

---

## 📁 Arquivos

```
praticando-c/
│
├── base.h          ← Header utilitário para o ambiente Windows
├── pratica01.c     ← Cadastro de clientes com structs e alocação dinâmica
└── README.md
```

---

## 🔧 `base.h` — Header Utilitário

O [`base.h`](./base.h) é um header auxiliar para o ambiente **Windows + VS Code + MinGW**.  
Ele garante que **caracteres acentuados** apareçam corretamente no terminal e **impede que o console feche** sozinho ao fim do programa — sem nenhuma chamada manual no código.

```c
#include "base.h"  // Inclua como primeiro #include
```

---

## ⚙️ Como Compilar

```bash
gcc -g pratica01.c -o pratica01.exe
./pratica01.exe
```

---

<div align="center">

<br/>

*Aprendendo C, um programa por vez.* 💻

</div>
