class Carro{
private:
	float tanque;
	float distancia;
public:
	Carro(float t, float d);
	void abastecer(float t);
	void mover(float d);
	float getCombustivel();
	float getDistancia();
};