#pragma once

/*
Implemente um controle de elevador. O elevador armazena o n�mero do andar onde est� parado. Devem existir m�todos para:
Deslocar o elevador um andar para cima;
Deslocar o elevador um andar para baixo;
Retornar o andar onde o elevador est� no momento.
No programa principal, crie 2 elevadores e fa�a alguns movimentos (subir e/ou descer) com ambos. Exiba o andar final de cada um.
*/
class Elevador
{
private:
	int andar;
public:
	void Subir();
	void Descer();
	int GetAndar();
};


void Elevador::Subir()
{
	andar = 1;
	andar++;
}

void Elevador::Descer()
{
	if (andar > 1)
		andar--;
}

int Elevador::GetAndar()
{
	return andar;
}
