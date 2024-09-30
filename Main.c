#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void spotify(){

    printf("Fechando Spotify \n");
    printf("-------------------------------\n");
    system("taskkill /IM Spotify.exe /F");
}

void spotify_en(){

    printf("Closing Spotify \n");
    printf("-------------------------------\n");
    system("taskkill /IM Spotify.exe /F");
}

void discord(){

    printf("Fechando Discord \n");
    printf("-------------------------------\n");
    system("taskkill /IM Discord.exe /F");
}

void discord_en(){

    printf("Closing Discord \n");
    printf("-------------------------------\n");
    system("taskkill /IM Discord.exe /F");
}

void steam(){

    printf("Fechando Steam \n");
    printf("-------------------------------\n");
    system("taskkill /IM steam.exe /F");
}

void steam_en(){

    printf("Closing Steam \n");
    printf("-------------------------------\n");
    system("taskkill /IM steam.exe /F");
}

void riot(){

    printf("Fechando Riot Launcher \n");
    printf("-------------------------------\n");
    system("taskkill /IM RiotClientServices.exe /F");
}

void riot_en(){

    printf("Closing Riot Launcher \n");
    printf("-------------------------------\n");
    system("taskkill /IM RiotClientServices.exe /F");
}

void radmin(){

    printf("Fechando Radmin VPN \n");
    printf("-------------------------------\n");
    system("taskkill /IM RvRvpnGui.exe /F");
}

void radmin_en(){

    printf("Closing Radmin VPN \n");
    printf("-------------------------------\n");
    system("taskkill /IM RvRvpnGui.exe /F");
}

void epic(){

    printf("Fechando Epic Games Launcher \n");
    printf("-------------------------------\n");
    system("taskkill /IM EpicGamesLauncher.exe /F");
}

void epic_en(){

    printf("Closing Epic Games Launcher \n");
    printf("-------------------------------\n");
    system("taskkill /IM EpicGamesLauncher.exe /F");
}

void english(){

    int option;
    int continueClosing;

    do{
        printf("Chose down here in the list what you want: \n");
        printf("-------------------------------------------------- \n");
        printf("1           ->          Close Discord \n");
        printf("2           ->          Close Steam \n");
        printf("3           ->          Close Riot Launcher \n");
        printf("4           ->          Close RadminVPN \n");
        printf("5           ->          Close Epic Games Client \n");
        printf("6           ->          Close Spotify \n");
        printf("-------------------------------------------------- \n");
        printf("0           ->          Close Program \n");

        scanf("%d", &option);

        system("cls");
        getchar();

        switch (option){
        case 0:

            system("exit");

        case 1:
            discord_en();
            if (system("tasklist | findstr Discord.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Discord successfully closed! \n");
            }
            else
            {
                printf("-----------------------------------\n");
                printf("Was not possible to close discord \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 2:
            steam_en();
            if (system("tasklist | findstr steam.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Steam successfully closed! \n");
            }
            else
            {
                printf("---------------------------------\n");
                printf("Was not possible to close Steam \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 3:
            riot_en();
            if (system("tasklist | findstr RiotClientServices.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Riot Launcher successfully closed! \n");
            }
            else
            {
                printf("-----------------------------------------\n");
                printf("Was not possible to close Riot Launcher \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 4:
            radmin_en();
            if (system("tasklist | findstr RvRvpnGui.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Radmin VPN successfully closed! \n");
            }
            else
            {
                printf("--------------------------------------\n");
                printf("Was not possible to close Radmin VPN \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 5:
            epic_en();
            if (system("tasklist | findstr 'EpicGamesLauncher.exe'") != 1)
            {
                printf("-------------------------------\n");
                printf("Epic Games Launcher successfully closed! \n");
            }
            else
            {
                printf("Was not possible to close Epic Games Launcher \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 6:
            spotify_en();
            if (system("tasklist | findstr Spotify.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Spotify successfully closed \n");
            }
            else
            {
                printf("-------------------------------------\n");
                printf("Was not possible to close Spotify \n");
            }

            printf("-------------------------------\n");
            printf("You wanna close another app? \n");
            printf("-------------------------------\n");
            printf("1           ->          Yes \n");
            printf("2           ->          No \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;
        }
    } while (continueClosing == 1);
}

void portuguese(){

    int option;
    int continueClosing;

    do{
        printf("Escolha abaixo qual funcao voce quer da lista: \n");
        printf("-------------------------------------------------- \n");
        printf("1           ->          Fechar Discord \n");
        printf("2           ->          Fechar Steam \n");
        printf("3           ->          Fechar Riot Launcher \n");
        printf("4           ->          Fechar RadminVPN \n");
        printf("5           ->          Fechar Epic Games Client \n");
        printf("6           ->          Fechar Spotify \n");
        printf("-------------------------------------------------- \n");
        printf("0           ->          Fechar Programa \n");

        scanf("%d", &option);

        system("cls");
        getchar();

        switch (option){
        case 0:

            system("exit");

        case 1:
            discord();
            if (system("tasklist | findstr Discord.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Discord fechado com sucesso! \n");
            }
            else
            {
                printf("-------------------------------\n");
                printf("Nao foi possivel fechar o discord \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 2:
            steam();
            if (system("tasklist | findstr steam.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Steam fechada com sucesso! \n");
            }
            else
            {
                printf("-------------------------------------\n");
                printf("Nao foi possivel fechar a Steam \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 3:
            riot();
            if (system("tasklist | findstr RiotClientServices.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Riot Launcher fechado com sucesso! \n");
            }
            else
            {
                printf("----------------------------------------\n");
                printf("Nao foi possivel fechar o Riot Launcher \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 4:
            radmin();
            if (system("tasklist | findstr RvRvpnGui.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Radmin VPN fechado com sucesso! \n");
            }
            else
            {
                printf("-----------------------------------------\n");
                printf("Nao foi possivel fechar o Radmin VPN \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 5:
            epic();
            if (system("tasklist | findstr 'EpicGamesLauncher.exe'") != 1)
            {
                printf("-------------------------------\n");
                printf("Epic Games Launcher fechado com sucesso! \n");
            }
            else
            {
                printf("----------------------------------------------- \n");
                printf("Nao foi possivel fechar o Epic Games Launcher \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;

        case 6:
            spotify();
            if (system("tasklist | findstr Spotify.exe") != 1)
            {
                printf("-------------------------------\n");
                printf("Spotify fechado com sucesso \n");
            }
            else
            {
                printf("-------------------------------------\n");
                printf("Nao foi possivel fechar o Spotify \n");
            }

            printf("-------------------------------\n");
            printf("Deseja fechar outro programa? \n");
            printf("-------------------------------\n");
            printf("1           ->          Sim \n");
            printf("2           ->          Nao \n");
            printf("-------------------------------\n");
            scanf("%d", &continueClosing);
            system("cls");
            getchar();
            break;
        }
    } while (continueClosing == 1);
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    int lang;

    do
    {

        printf("------------------------------------------------------- \n");
        printf("Digite abaixo a linguagem que você deseja utilizar: \n");
        printf("Select below the language that you wanna use: \n");
        printf("-------------------------------------------------------\n");
        printf("1           ->          Portuguese \n");
        printf("2           ->          English \n");
        printf("-------------------------------------------------------\n");

        scanf("%d", &lang);

        switch (lang){
        case 1:
            system("cls");
            getchar();
            portuguese();
            break;

        case 2:
            system("cls");
            getchar();
            english();
            break;

        default:
            printf("-------------------------------------------------------\n");
            printf("Selecione um idioma valido! \n");
            printf("Select a valid language! \n");
            printf("-------------------------------------------------------\n");
            break;
        }
        while (getchar() != '\n');

        
    } while (lang != 1 && lang != 2);
}
