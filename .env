/**
 * @file base.h
 * @brief Header utilitário para configuração do ambiente Windows com GCC/MinGW.
 *
 * Este arquivo deve ser incluído no início de qualquer projeto C desenvolvido
 * no Windows com VS Code + MinGW. Ele garante que:
 *
 *  1. O terminal use codificação UTF-8, exibindo acentos e caracteres especiais
 *     corretamente (já que o VS Code salva arquivos em UTF-8 por padrão).
 *
 *  2. O console não feche imediatamente após o programa terminar, permitindo
 *     que o usuário leia a saída antes de a janela desaparecer.
 *
 * As funções internas utilizam os atributos GCC `constructor` e `destructor`
 * para executar código ANTES e DEPOIS do `main()`, sem exigir nenhuma chamada
 * explícita no código do programa.
 *
 * @note Compatível apenas com Windows (usa a API Win32).
 *       Não é necessário chamar nenhuma função manualmente.
 *
 * Uso:
 * @code
 *   #include "base.h"
 *   // ... demais includes
 *
 *   int main(void) {
 *       // seu código aqui
 *       return 0;
 *   }
 * @endcode
 */

#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* --------------------------------------------------------------------------
 * Executa ANTES do main()
 * Configura o console para usar UTF-8 (code page 65001), garantindo que
 * caracteres acentuados sejam exibidos corretamente no terminal do Windows.
 * -------------------------------------------------------------------------- */
__attribute__((constructor))
static void _configurar_console(void) {
    SetConsoleOutputCP(CP_UTF8);
}

/* --------------------------------------------------------------------------
 * Executa DEPOIS do main() terminar
 * Garante que o buffer de saída seja descarregado e pausa o console,
 * impedindo que a janela feche automaticamente ao término do programa.
 * -------------------------------------------------------------------------- */
__attribute__((destructor))
static void _pausar_console(void) {
    fflush(stdout);
    system("pause");
}

#endif /* BASE_H */
