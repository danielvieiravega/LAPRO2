#include "Aluno.h"
const int Tam = 10;

/*
Uma turma � definida por um n�mero, o c�digo da disciplina e um conjunto de alunos. Deve ser poss�vel realizar as seguintes opera��es:
Construtor, que recebe o n�mero da turma e o c�digo da disciplina;
Alterar o n�mero da turma; - ok
Alterar o c�digo da disciplina; - ok
Obter o n�mero da turma; - ok
Obter o c�digo da disciplina; - ok
Adicionar um aluno � turma;
Obter o total de alunos matriculados na disciplina;
Retornar um aluno pelo sua posi��o na turma (de 0 ao total-1);
Para adicionar um aluno � turma, dever� ser criado um m�todo que receba um objeto Aluno j� criado e inicializado externamente, ou seja, n�o devem ser recebidos os dados do aluno individualmente:
void Turma::adicionaAluno(Aluno novo) { ... }
Para armazenar os alunos, pode ser utilizado um vetor de Aluno, bastando controlar quantos j� foram criados - para este trabalho, limitaremos o vetor em 10 alunos.
*/
class Turma
{
private:
	int numero;
	Disciplina disciplina;
	Aluno alunos[Tam];
public:
	Turma(int n, int cod);
	void setNumero(int novoNumero);
	void setCodigoDisciplina(int cod);
	int getNumero();
	int getCodigoDisciplina();
	void adcionaAluno(Aluno novo);

	int contagemAlunos();
};

