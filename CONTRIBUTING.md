# Contribuindo

## Ambiente
Windows 11 / PowerShell / GCC via MinGW

## Fluxo de trabalho
Compreender → Estruturar → Implementar → Validar → Versionar → PR → Fechar

## Convenção de commits
Formato: `tipo(escopo): mensagem curta`

| Tipo       | Quando usar                                          |
|------------|------------------------------------------------------|
| `feat`     | Nova implementação                                   |
| `fix`      | Correção de bug                                      |
| `refactor` | Reestruturação sem mudança de comportamento          |
| `docs`     | Documentação (README, comentários, CONTRIBUTING)     |
| `build`    | Makefile ou configuração de build local              |
| `test`     | Adicionar ou ajustar casos de teste                  |
| `ci`       | Workflow do GitHub Actions, configuração de CI       |

## Branches
Nomenclatura: `exercise/<nome-do-algoritmo>` — sempre temporários, deletar após merge.

## Pull requests
Usar o template em `.github/pull_request_template.md`.
CI deve estar verde antes do merge.