#include <iostream>
#include <ctime>
using namespace std;

int main() // Função inicial (main) - cabeçalho, corpo do código!
{
	void ferramentas(); // Identificando de funções, resumindo, digo para maquina que há funções pela frente. 
	void aboutAut();

	system("chcp 1252 > nul"); // correção de caracteres 
	cout << "Seja bem vindo usuário(a)!\n";
	system("pause > nul");
	system("cls");
	cout << "Este programa foi desenvolvido para fins de\n";
	cout << "estudos, com intuito de desenvolver habilidades\n";
	cout << "em programação C++.\n";
	system("pause > nul"); // pausa durante a execução 'escondida'.
	system("cls"); // limpa tela do prompt

	int resp;
	cout << "First Project / Autor - Rodrigo Liberato\n";
	cout << "\n";
	cout.width(25); cout << "----PÁGINA INICIAL----" << endl;
	cout << endl;
	cout << "1. Ferramentas\n" << "2. Cor preto e branco\n"
		 << "3. Informações do autor\n" << "4. Sair\n";
	cout << "code: "; cin >> resp;

	switch (resp) // ramificações.. semelhantea ao if, como uma estrutura de decisões, comparações.
	{
	case 1:
		cout << "aguarde..\n";
		system("cls");
		ferramentas();
		break;

	case 2:
		cout << "aguarde..\n";
		system("color F0");
		system("cls");
		main();
		break;

	case 3:
		cout << "aguarde..\n";
		system("cls");
		aboutAut();
		break;

	case 4:
		cout << endl;
		cout << "aguarde..\n";
		break;
		
	default:
		cout << "erro..\n";
		system("pause > nul");
		cout << "Por favor, tente novamente.";
		system("pause > nul");
		system("cls");
		main();

	}
}
void ferramentas()
{
	int code;
	cout.width(25); cout << "FERRAMENTAS\n";

	cout << "1. Calculadora\n" << "2. Paint\n" << "3. Inicio\n" << "4. Gere um número aleatorio.\n";
	cout << "code: ";
	cin >> code;

	switch (code)
	{
	case 1:
		cout << "aguarde..\n";
		system("calc");
		system("cls");
		ferramentas();
		break;

	case 2:
		cout << "aguarde..\n";
		system("mspaint");
		system("cls");
		ferramentas();
		break;

	case 3:
		cout << "aguarde..\n";
		system("cls");
		main();
		break;

	case 4:
		cout << "aguarde..\n";
		system("cls");
		srand(time(NULL)); // gerando numeros pseudoaleatorios em tempo real
		cout << "Number: " << rand() << endl;
		system("pause > nul");
		cout << "Eu sei, isso foi desnecessário...\n";
		system("pause > nul");
		system("cls");
		cout << "Hahahhahhaha!\n";
		system("pause > nul");
		system("cls");
		ferramentas();

	default:
		cout << "comando errado, tente de novo..\n";
		system("cls");
		ferramentas();
		break;
	}


}
void aboutAut()
{
	cout << "*AGRADECIMENTOS*\n";
	cout << endl;

	cout << "Sou muito grato por você chegar até aqui!\n"
		<< "É um programa pequeno e simples, mas ele\n"
		<< "representa uma grande conquista para mim no inicio\n"
		<< "dessa jornada de aprendeizagem na área de dev!\n";

	cout << "Obrigado!\n" << "ass: Rodrigo liberato\n";
	system("pause > nul");
	system("cls");

	main();

}