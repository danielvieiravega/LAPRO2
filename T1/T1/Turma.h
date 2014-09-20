#include "Aluno.h"
const int Tam = 10;

/*
Uma turma é definida por um número, o código da disciplina e um conjunto de alunos. Deve ser possível realizar as seguintes operações:
Construtor, que recebe o número da turma e o código da disciplina;
Alterar o número da turma; - ok
Alterar o código da disciplina; - ok
Obter o número da turma; - ok
Obter o código da disciplina; - ok
Adicionar um aluno à turma;
Obter o total de alunos matriculados na disciplina;
Retornar um aluno pelo sua posição na turma (de 0 ao total-1);
Para adicionar um aluno à turma, deverá ser criado um método que receba um objeto Aluno já criado e inicializado externamente, ou seja, não devem ser recebidos os dados do aluno individualmente:
void Turma::adicionaAluno(Aluno novo) { ... }
Para armazenar os alunos, pode ser utilizado um vetor de Aluno, bastando controlar quantos já foram criados - para este trabalho, limitaremos o vetor em 10 alunos.
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

