#ifndef PLAYER_H
#define PLAYER_H

#include "includes.h"
#include "timer.h"
#include "lista.h"

using namespace geometria;

class Player{

	private:
		int vida;
		int vidaMax;
		Ponto pos, verticeInicial[4], vertice[4];
		double velocidade;
		double velocidadeMax;
		double largura, altura;
		int arma;
		int dinheiro;
		Timer tempoInvulnerabilidade;
		Timer timerAnimacaoAndar;
		Timer timerAnimacao;
		Timer tempoRecarga;
		ALLEGRO_VERTEX v[4];
		double angulo;
		static ALLEGRO_BITMAP *spritePistola, *spriteShotgun, *spriteSub, *spriteRPG, *spriteLaser, *spriteSniper, *spriteRir, *spriteChorar, *spriteNeutro;


	public:
		Player();
		Player(Ponto, double, double, double, int, int, int);
		void desenhar(bool movimento, bool mostrarHitbox);
		void andar(bool cima, bool baixo, bool esquerda, bool direita, int larguraTela, int alturaTela, Ponto mouse);
		void atirar(Lista<Projetil>& listaProjetil, Ponto ponto_mouse, bool click);
		void recebeDano(int dano);

		Ponto getPos();

		void atualizaTimers();

		void setLargura(int largura);
		int getLargura();
		void setAltura(int altura);
		int getAltura();
		void setVida(int vida);
		int getVida();
		void setVidaMax(int vidaMax);
		int getVidaMax();
		int getArma();
		void setArma(int arma);
		int getDinheiro();
		void setDinheiro(int dinheiro);
		double getVelocidade();
		void setVelocidade(double velocidade);
		double getVelocidadeMax();



		Ponto getVertice(int i);

		void atualizaAngulo(Ponto mouse);

		static void initImagens();

		void init();
};

#endif
