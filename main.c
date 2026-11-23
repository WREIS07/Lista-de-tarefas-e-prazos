#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    do
    {
        printf("\n========== LISTA DE TAREFAS ==========\n");
        printf("1 - Cadastrar nova tarefa\n");
        printf("2 - Listar tarefas\n");
        printf("3 - Consultar tarefa\n");
        printf("4 - Marcar tarefa como concluida\n");
        printf("5 - Excluir tarefa\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nCadastrar tarefa\n");
                break;

            case 2:
                printf("\nListar tarefas\n");
                break;

            case 3:
                printf("\nConsultar tarefa\n");
                break;

            case 4:
                printf("\nConcluir tarefa\n");
                break;

            case 5:
                printf("\nExcluir tarefa\n");
                break;

            case 0:
                printf("\nEncerrando programa...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}