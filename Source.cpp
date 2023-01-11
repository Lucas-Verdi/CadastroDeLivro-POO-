#include <iostream>
#include<string>

struct Cadastro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
	int Ano;

	int GetID(int ID);
	std::string GetTitulo(std::string Titulo);
	std::string GetAutor(std::string Autor);
	std::string GetEditora(std::string Editora);
	int GetAno(int Ano);

	int SetID(int Num);
	std::string SetTitulo(std::string NomeT);
	std::string SetAutor(std::string NomeA);
	std::string SetEditora(std::string NomeE);
	int SetAno(int Num);

	void ExibirResultados();

};

int Cadastro::GetID(int ID)
{
	this->ID = ID;
	return ID;
}

std::string Cadastro::GetTitulo(std::string Titulo)
{
	this->Titulo = Titulo;
	return Titulo;
}

std::string Cadastro::GetAutor(std::string Autor)
{
	this->Autor = Autor;
	return Autor;
}

std::string Cadastro::GetEditora(std::string Editora)
{
	this->Editora = Editora;
	return Editora;
}

int Cadastro::GetAno(int Ano)
{
	this->Ano = Ano;
	return Ano;
}

int Cadastro::SetID(int Num)
{
	std::cout << "Digite o ID do Livro: ";
	std::cin >> Num;
	ID = Num;
	system("CLS");
	return ID;
}

std::string Cadastro::SetTitulo(std::string NomeT)
{
	std::cout << "Digite o Titulo do Livro: ";
	std::getline(std::cin >> std::ws, NomeT);
	Titulo = NomeT;
	system("CLS");
	return Titulo;
}

std::string Cadastro::SetAutor(std::string NomeA)
{
	std::cout << "Digite o Autor do livro: ";
	std::getline(std::cin, NomeA);
	Autor = NomeA;
	system("CLS");
	return Autor;
}

std::string Cadastro::SetEditora(std::string NomeE)
{
	std::cout << "Digite a Editora do livro: ";
	std::getline(std::cin, NomeE);
	Editora = NomeE;
	system("CLS");
	return Editora;
}

int Cadastro::SetAno(int Num)
{
	std::cout << "Digite o ano do livro: ";
	std::cin >> Num;
	Ano = Num;
	system("CLS");
	return Ano;
}

void Cadastro::ExibirResultados()
{
	std::cout << "Titulo: " << GetTitulo(Titulo) << "\nAutor: " << GetAutor(Autor) << "\nEditora: " << GetEditora(Editora) << "\nAno: " << GetAno(Ano) << "\n";
}

int main()
{
	Cadastro Livro;

	Livro.SetID(NULL);
	Livro.SetTitulo("");
	Livro.SetAutor("");
	Livro.SetEditora("");
	Livro.SetAno(NULL);
	Livro.ExibirResultados();




	return 0;
}
