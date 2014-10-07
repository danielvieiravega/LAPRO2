/*
-------------------------------------------------------------
|  Aluno: Daniel Vieira Vega	Matricula: 11204032-4		|
-------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

//Controla a quatidade de alunos numa turma
int qntMaximaAlunos = 0;

#ifndef REGIAO_ALUNOS
class Aluno
{
private:
	int matricula;
	string nome;
public:
	Aluno();
	Aluno(int m, string n);
	void setMatricula(int novaMatricula);
	void setNome(string novoNome);
	int getMatricula();
	string getNome() const;
};

Aluno::Aluno()
{
}

Aluno::Aluno(int m, string n)
{
	matricula = m;
	nome = n;
}

void Aluno::setMatricula(int novaMatricula)
{
	matricula = novaMatricula;
}

int Aluno::getMatricula()
{
	return matricula;
}

void Aluno::setNome(string novoNome)
{
	nome = novoNome;
}

string Aluno::getNome() const
{
	return nome;
}
#endif REGIAO_ALUNOS

#ifndef REGIAO_DISCIPLINAS
class Disciplina
{
private:
	string codigo;
	string nome;
public:
	Disciplina();
	Disciplina(string cod, string n);
	void setCodigo(string novoCodigo);
	void setNome(string novoNome);
	string getCodigo();
	string getNome();
};

Disciplina::Disciplina()
{
}

Disciplina::Disciplina(string cod, string n)
{
	codigo = cod;
	nome = n;
}

void Disciplina::setCodigo(string novoCodigo)
{
	codigo = novoCodigo;
}

string Disciplina::getCodigo()
{
	return codigo;
}

void Disciplina::setNome(string novoNome)
{
	nome = novoNome;
}

string Disciplina::getNome()
{
	return nome;
}
#endif REGIAO_DISCIPLINAS

#ifndef REGIAO_CONSULTAALUNOS
//Classe criada para retornar formatado o item consulta de alunos
class ConsultaDeAlunos
{
public:
	string toString();
	ConsultaDeAlunos(int m, string n);
private:
	int matricula;
	string nome;
};

string ConsultaDeAlunos::toString()
{
	ostringstream aux;
	aux << matricula << "\t" << nome << endl;
	string consulta = aux.str();
	return consulta;
}

ConsultaDeAlunos::ConsultaDeAlunos(int m, string n)
{
	matricula = m;
	nome = n;
}
#endif REGIAO_CONSULTAALUNOS

//Classe criada para retornar formatado o item consulta de disciplinas
#ifndef REGIAO_ConsultaDisciplinas
class ConsultaDisciplinas
{
public:
	string toString();
	ConsultaDisciplinas(string c, string n, int num);
private:
	string codigo;
	string nome;
	int numero;
};

string ConsultaDisciplinas::toString()
{
	ostringstream aux;
	aux << codigo << "\t" << nome << "\t\t" << numero << endl;
	return aux.str();
}

ConsultaDisciplinas::ConsultaDisciplinas(string c, string n, int num)
{
	codigo = c;
	nome = n;
	numero = num;
}
#endif REGIAO_ConsultaDisciplinas

#ifndef REGIAO_TURMAS
class Turma
{
public:
	static const int turma_size = 10;
	Turma();
	Turma(int n, string cod);
	Turma(int n, Disciplina& d);
	void setNumero(int novoNumero);
	void setCodigoDisciplina(string cod);
	int getNumero();
	string getCodigoDisciplina();
	void adicionaAluno(const Aluno& novo);
	int getQuantidadeAlunosMatriculados();
	int getAlunoPorPosicaoNaTurma(Aluno& a);
	Aluno *getAlunosMatriculados();
	string consultaDisciplinas(int m);
	string getNomeAlunoPorMatricula(int m);
	string consultaDeAlunos(int posicao);
private:
	int numero;
	Disciplina disciplina;
	Aluno alunos[turma_size];
	int qntAlunos = 0;
};

Turma::Turma()
{
}

Turma::Turma(int n, string cod)
{
	if (n > 0){
		numero = n;
		disciplina.setCodigo(cod);
	}
}

//Criei esse construtor pois não me fez muito sentido só receber codigo, e sim um objeto disciplina
Turma::Turma(int n, Disciplina& d)
{
	if (n > 0){
		numero = n;
		disciplina = d;
	}
}

void Turma::setNumero(int novoNumero)
{
	if (novoNumero > 0)
		numero = novoNumero;
}

void Turma::setCodigoDisciplina(string cod)
{
	disciplina.setCodigo(cod);
}

int Turma::getNumero()
{
	return numero;
}

string Turma::getCodigoDisciplina()
{
	return disciplina.getCodigo();
}

void Turma::adicionaAluno(const Aluno& novo)
{
	if (qntMaximaAlunos < 10)
	{
		alunos[qntAlunos] = novo;
		qntAlunos++;
		qntMaximaAlunos++;
	}
}

int Turma::getQuantidadeAlunosMatriculados()
{
	return qntAlunos;
}

int Turma::getAlunoPorPosicaoNaTurma(Aluno& a)
{
	for (int i = 0; i < qntAlunos; i++)
	{
		if (alunos[i].getNome() == a.getNome())
			return i;
	}
	return -1; //Se o aluno pesquisado não existe
}

Aluno* Turma::getAlunosMatriculados()
{
	return alunos;
}

string Turma::consultaDisciplinas(int m)
{
	//Uso qntAlunos para controlar o laço pois assim percorre só a quantidade real de alunos matriculados, e não a capacidade total da turma controlada pela variavel qntMaximaAlunos
	for (int i = 0; i < qntAlunos; i++)
	{
		if (alunos[i].getMatricula() == m)
		{
			ConsultaDisciplinas consultaAux(getCodigoDisciplina(), disciplina.getNome(), getNumero());
			return consultaAux.toString();
		}
	}
	return "NE";//nAO EXISTE
}

string Turma::getNomeAlunoPorMatricula(int m)
{
	for (int i = 0; i < qntAlunos; i++)
	{
		if (alunos[i].getMatricula() == m)
			return alunos[i].getNome();
	}
	return "NE"; //nAO EXISTE
}

string Turma::consultaDeAlunos(int posicao)
{
	string consulta = "\t";
	ConsultaDeAlunos consultaAux(alunos[posicao].getMatricula(), alunos[posicao].getNome());
	consulta += consultaAux.toString();
	return consulta;
}
#endif REGIAO_TURMAS

void inserirAlunos();
void inserirAlunosUsandoConstrutor();
void inserirDisciplinas();
void inserirDisciplinasUsandoConstrutor();
void inserirAlunosETurmas();


void exibirNome(int m, Turma t[], int tamVet);
void exibirListagemDisciplinas(int m, Turma t[], int tamVet);
void consultaDeDisciplinas(int m, Turma t[], int tamVet);
int main()
{
	//Definem o tamanho dos vetores de disciplinas e turmas.
	const int tamVetDisciplinas = 3;
	const int tamVetTurmas = 4;

#ifndef REGIAO_INSERCAO
	//Alunos
	Aluno sean(1, "Sean Connery");
	Aluno cameron(2, "Cameron Diaz");
	Aluno kate(3, "Kate Winslet");
	Aluno anthony(4, "Anthony Hopkins");
	Aluno jackie(5, "Jackie Chan");
	Aluno lucie(6, "Lucie Liu");

	//Disciplinas
	Disciplina d4612A("4612A", "Programação II");
	Disciplina d4613A("4613A", "Alg. e Prog. I");
	Disciplina d4610R("4610R", "Computação Gráfica");

	//Turmas usando construtor que recebe uma string cod de disciplina
	//Turma t490(490, "4612A");
	//Turma t590(590, "4612A");
	//Turma t128(128, "4613A");
	//Turma t168(168, "4610R");

	//Turmas usando construtor que recebe disciplinas
	Turma t490(490, d4612A);
	Turma t590(590, d4612A);
	Turma t128(128, d4613A);
	Turma t168(168, d4610R);


	//Adicionando alunos a turma t0
	t490.adicionaAluno(sean);
	t490.adicionaAluno(kate);
	t490.adicionaAluno(lucie);

	//Adicionando alunos a turma t1
	t590.adicionaAluno(cameron);
	t590.adicionaAluno(anthony);
	t590.adicionaAluno(jackie);

	//Adicionando alunos a turma t2
	t128.adicionaAluno(anthony);
	t128.adicionaAluno(jackie);
	t128.adicionaAluno(lucie);

	//Adicionando alunos a turma t3
	t168.adicionaAluno(sean);
	t168.adicionaAluno(anthony);

	Disciplina vetDisciplinas[tamVetDisciplinas];
	vetDisciplinas[0] = d4612A;
	vetDisciplinas[1] = d4613A;
	vetDisciplinas[2] = d4610R;

	Turma vetTurmas[tamVetTurmas];
	vetTurmas[0] = t490;
	vetTurmas[1] = t590;
	vetTurmas[2] = t128;
	vetTurmas[3] = t168;
#endif REGIAO_INSERCAO

	//Variavel utilizada para armazenar a matricula do aluno a ser pesquisado
	int matricula;

	//Consulta de disciplina
	cout << "Informe o número da matricula: ";
	cin >> matricula;

	//Item: Consulta de Disciplinas
	consultaDeDisciplinas(matricula, vetTurmas, tamVetTurmas);

	//Item Consulta de Alunos
	string codDisc;
	int numTurma;

	cout << "Informe o código da disciplina: ";
	cin >> codDisc;
	
	for (unsigned int i = 0; i < codDisc.length(); i++)
	{
		codDisc[i] = toupper(codDisc[i]);
	}

	cout << "Informe o número da turma: ";
	cin >> numTurma;

	string codDiscAux;

	cout << "Disciplina: ";
	for (int i = 0; i < tamVetDisciplinas; i++)
	{
		codDiscAux = vetDisciplinas[i].getCodigo();
		if (codDiscAux == codDisc)
		{
			cout << vetDisciplinas[i].getCodigo() << " - " << vetDisciplinas[i].getNome() << " -  Turma" << numTurma;
			break;
		}
	}

	for (int i = 0; i < tamVetTurmas; i++)
	{
		if (vetTurmas[i].getNumero() == numTurma)
			cout << vetTurmas[i].getNumero() << endl;
	}

	int nroTurmaAux;
	int qntAlunosMatriculados;
	cout << "Matrícula" << "\t" << "Nome" << endl;
	string discAux;
	for (int i = 0; i < tamVetTurmas; i++)
	{
		nroTurmaAux = vetTurmas[i].getNumero();
		if (nroTurmaAux == numTurma)
		{
			//Obtem a quantidade de alunos matriculados na turma
			qntAlunosMatriculados = vetTurmas[i].getQuantidadeAlunosMatriculados();
			for (int j = 0; j < qntAlunosMatriculados; ++j)
			{
				discAux = vetTurmas[i].consultaDeAlunos(j);
				cout << discAux;
			}
		}
	}

	return 0;
}
void exibirNome(int m, Turma t[], int tamVet)
{
	string nomeAux;
	for (int i = 0; i < tamVet; i++){
		nomeAux = t[i].getNomeAlunoPorMatricula(m);
		if (nomeAux != "NE")
		{
			cout << nomeAux << endl;
			break;
		}
	}
}

void exibirListagemDisciplinas(int m, Turma t[], int tamVet)
{
	string consDiscAux;
	for (int i = 0; i < tamVet; i++){
		consDiscAux = t[i].consultaDisciplinas(m);
		if (consDiscAux != "NE")
			cout << consDiscAux;
	}
}

void consultaDeDisciplinas(int m, Turma t[], int tamVet)
{
	cout << "Aluno: ";
	exibirNome(m, t, tamVet);
	cout << "Codigo" << "\t" << "Disciplina" << "\t\t" << "Turma" << endl;
	exibirListagemDisciplinas(m, t, tamVet);
}

#ifndef REGIAO_FUNCOES

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

	t0.adicionaAluno(a0);
	t0.adicionaAluno(a2);
	t0.adicionaAluno(a5);

	t1.adicionaAluno(a1);
	t1.adicionaAluno(a3);
	t1.adicionaAluno(a5);

	t2.adicionaAluno(a3);
	t2.adicionaAluno(a4);
	t2.adicionaAluno(a5);

	t3.adicionaAluno(a0);
	t3.adicionaAluno(a3);
}


#endif REGIAO_FUNCOES