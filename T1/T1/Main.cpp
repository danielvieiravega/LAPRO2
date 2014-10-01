#include <iostream>
#include <iomanip>
#include "Aluno.h"
#include "Disciplina.h"
#include "Turma.h"

#include <string.h>

using namespace std;

void inserirAlunos();
void inserirAlunosUsandoConstrutor();
void inserirDisciplinas();
void inserirDisciplinasUsandoConstrutor();
void inserirAlunosETurmas();
void consultaDisciplina(string nome);

int main()
{
	//inserirAlunos();
	//inserirAlunosUsandoConstrutor();
	//inserirAlunosETurmas();
	//inserirDisciplinas();
	//inserirDisciplinasUsandoConstrutor();
	//Definem o tamanho dos vetores de disciplinas e turmas.
	const int tamVetDisciplinas = 3;
	const int tamVetTurmas = 4;
	
	//Disciplinas
	Disciplina d0("4612A", "Programação II");
	Disciplina d1("4613A", "Alg. e Prog. I");
	Disciplina d2("4610R", "Computação Gráfica");
	
	//Alunos
	Aluno a0(1, "Sean Connery");
	Aluno a1(2, "Cameron Diaz");
	Aluno a2(3, "Kate Winslet");
	Aluno a3(4, "Anthony Hopkins");
	Aluno a4(5, "Jackie Chan");
	Aluno a5(6, "Lucie Liu");

	//Turmas
	Turma t0(490,"4612A");
	Turma t1(590,"4612A");
	Turma t2(128,"4613A");
	Turma t3(168,"4610R");

	t0.adcionaAluno(a0);
	t0.adcionaAluno(a2);
	t0.adcionaAluno(a5);

	t1.adcionaAluno(a1);
	t1.adcionaAluno(a3);
	t1.adcionaAluno(a5);

	t2.adcionaAluno(a3);
	t2.adcionaAluno(a4);
	t2.adcionaAluno(a5);

	t3.adcionaAluno(a0);
	t3.adcionaAluno(a3);

	Disciplina vetDisciplinas[tamVetDisciplinas];
	vetDisciplinas[0] = d0;
	vetDisciplinas[1] = d1;
	vetDisciplinas[2] = d2;

	Turma vetTurmas[tamVetTurmas];
	vetTurmas[0] = t0;
	vetTurmas[1] = t1;
	vetTurmas[2] = t2;
	vetTurmas[3] = t3;

	//Variavel utilizada para armazenar a matricula do aluno a ser pesquisado 
	int matricula;

	//Consulta de disciplina
	cout << "Informe o numero da matricula a ser pesquisada: ";
	cin >> matricula;
	//getline(cin, nomeAluno);
	
	int quantidadeAlunosMatriculados = 0;
	for(int i=0; i<tamVetTurmas;i++)
	{
		quantidadeAlunosMatriculados = vetTurmas[i].getQuantidadeAlunosMatriculados();
		for(int j = 0; j< quantidadeAlunosMatriculados; j++){
			if(matricula == vetTurmas[i].getAlunosMatriculas()[j].getMatricula())
			{
				cout << matricula << " " << vetTurmas[i].getAlunosMatriculas()[j].getNome() << " " << vetTurmas[i].getAlunosMatriculas()[j].getMatricula();
			}
		}
	}




	//for (int i = 0; i < tamVetDisciplinas; ++i)
	//{
	//	for (int j = 0; j < tamVetTurmas; ++j)
	//	{
	//		if (vetTurmas[i].getAlunosMatriculas()[j].getNome() == nomeAluno)
	//		{
	//			cout << "Codigo" << endl << vetDisciplinas[i].getCodigo() << setw(6) << "Disciplina" << endl << vetDisciplinas[i].getNome() << setw(6) << "Turma" << endl << vetDisciplinas[i].getCodigo();
	//		}
	//		else
	//		{
	//			cout << nome << endl;
	//			cout << "Aluno não encontrado!" << endl;
	//		}
	//	}
	//	/*if (vetTurmas[i].getAlunosMatriculas()->getNome() == nome)
	//	{
	//		cout << "Codigo" << endl << vetDisciplinas[i].getCodigo() << setw(6) << "Disciplina" << endl << vetDisciplinas[i].getNome() << setw(6) << "Turma" << endl << vetDisciplinas[i].getCodigo();
	//	}*/

	//}
	/*
	Aluno: Sean Connery
Codigo     Disciplina           Turma
4612A      Programação II       490
4610R      Computação Gráfica   168*/

	system("pause");

	return 0;
}

void inserirAlunos()
{
	Aluno a0;
	Aluno a1;
	Aluno a2;
	Aluno a3;
	Aluno a4;
	Aluno a5;

	a0.setMatricula(1);
	a1.setMatricula(2);
	a2.setMatricula(3);
	a3.setMatricula(4);
	a4.setMatricula(5);
	a5.setMatricula(6);

	a0.setNome("Sean Connery");
	a1.setNome("Cameron Diaz");
	a2.setNome("Kate Winslet");
	a3.setNome("Anthony Hopkins");
	a4.setNome("Jackie Chan");
	a5.setNome("Lucie Liu");
}

void inserirAlunosUsandoConstrutor()
{
	Aluno a0(1, "Sean Connery");
	Aluno a1(2, "Cameron Diaz");
	Aluno a2(3, "Kate Winslet");
	Aluno a3(4, "Anthony Hopkins");
	Aluno a4(5, "Jackie Chan");
	Aluno a5(6, "Lucie Liu");
}

void inserirDisciplinas()
{
	Disciplina d0;
	Disciplina d1;
	Disciplina d2;

	d0.setCodigo("4612A");
	d1.setCodigo("4613A");
	d2.setCodigo("4610R");

	d0.setNome("Programação II");
	d0.setNome("Alg. e Prog. I");
	d0.setNome("Computação Gráfica");
}

void inserirDisciplinasUsandoConstrutor()
{
	Disciplina d0("4612A", "Programação II");
	Disciplina d1("4613A", "Alg. e Prog. I");
	Disciplina d2("4610R", "Computação Gráfica");
}

void inserirAlunosETurmas()
{
	Aluno a0(1, "Sean Connery");
	Aluno a1(2, "Cameron Diaz");
	Aluno a2(3, "Kate Winslet");
	Aluno a3(4, "Anthony Hopkins");
	Aluno a4(5, "Jackie Chan");
	Aluno a5(6, "Lucie Liu");

	Turma t0;
	Turma t1;
	Turma t2;
	Turma t3;

	t0.setNumero(490);
	t1.setNumero(590);
	t2.setNumero(128);
	t3.setNumero(168);

	t0.setCodigoDisciplina("4612A");
	t1.setCodigoDisciplina("4612A");
	t2.setCodigoDisciplina("4613A");
	t3.setCodigoDisciplina("461OR");

	t0.adcionaAluno(a0);
	t0.adcionaAluno(a2);
	t0.adcionaAluno(a5);

	t1.adcionaAluno(a1);
	t1.adcionaAluno(a3);
	t1.adcionaAluno(a5);

	t2.adcionaAluno(a3);
	t2.adcionaAluno(a4);
	t2.adcionaAluno(a5);

	t3.adcionaAluno(a0);
	t3.adcionaAluno(a3);
}

void consultaDisciplina(string nome)
{
	
}