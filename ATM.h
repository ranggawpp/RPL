#ifndef ATM_H
#define ATM_H

class ATM {

private:
	int ID;
	int kodeATM;
	int tunai;

public:
	void masukkanKartu();

	void masukkanJumlah();

	void cekKetersediaan();

	void keluarkanKartu();

	void masukkanPin();

	void validasiKartu();

	void validasiPin();
};

#endif
