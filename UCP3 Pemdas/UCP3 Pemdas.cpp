#include <iostream>
using namespace std;

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;

	}

	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(float nilai) {
		uangBangunan = nilai;
	}

	float getUangBangunan() {
		return uangBangunan;
	}

	float getTotalBiaya() {
		return totalBiaya;
	}
};

class SNBT : public MasukUniversitas {
	public:
};

class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
};

int main() {
	// isi disini untuk fungsi main
	void input(); {
		cout << "Masukan Uang Pendaftaran :";

		cout << "Bayar Uang Semester Pertama :";

		cout << "Hitung Total Biaya :";

	}
}