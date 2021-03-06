
// PROJEKT BSCP.cpp: Definuje vstupn� bod pro konzolovou aplikaci.
//

template<class P> ostream& operator<<(ostream &out, pole <P> &p) { //operator pro vypis na konzoli
	for (int j = 0; j < p.s; j++)
	{
		out << p[j] << " ";
	}
	cout << endl;
	return out;

};

template <class P> pole<P> operator+(pole<P> &op1, pole<P> &op2) { //operator +
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] + b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator-(pole<P> &op1, pole<P> &op2) { //operator -
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] - b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}
template <class P> pole<P> operator*(pole<P> &op1, pole<P> &op2) { //operator *
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] * b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator/(pole<P> &op1, pole<P> &op2) { //operator /
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (b[i] == 0) throw "Chyba: deleni nulou";
		else if (i < b.s) {
			docasne.p[i] = a.p[i] / b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator+=(pole<P> &op1, pole<P> &op2) { //operator +=
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] += b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator-=(pole<P> &op1, pole<P> &op2) { //operator -=
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] -= b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator*=(pole<P> &op1, pole<P> &op2) { //operator *=
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (i < b.s) {
			docasne.p[i] = a.p[i] *= b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator/=(pole<P> &op1, pole<P> &op2) { //operator /=
	pole<P> docasne, a, b;

	if (op1.s == op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else if (op1.s > op2.s) {
		a = op1;
		b = op2;
		docasne = pole<P>(op1.s);
	}
	else {
		a = op2;
		b = op1;
		docasne = pole<P>(op2.s);
	}

	for (int i = 0; i < a.s; i++) {
		if (b[i] == 0) throw("Chyba: deleni nulou");
		else if (i < b.s) {
			docasne.p[i] = a.p[i] /= b.p[i];
		}
		else {
			docasne.p[i] = a.p[i];
		}
	}

	return docasne;
}

template <class P> pole<P> operator==(pole<P> &op1, pole<P> &op2) {
	if (op1.s != op2.s) {
		return false;
	}
	for (int i = 0; i < op1.s; i++) {
		if (op1.p[i] != op2.p[i]) {
			return false;
		}
	}
	return true;
}

template <class P> pole<P> operator!=(pole<P> &op1, pole<P> &op2) {
	if (op1.s != op2.s) {
		return true;
	}
	for (int i = 0; i < op1.s; i++) {
		bool rozdil = false;
		if (op1.p[i] != op2.p[i]) {
			rozdil = true;
		}
	}
	return rozdil;
}

void test() {						//testovani programu
	pole<double> B;
	pole<double> A, C;
	vector<double> x;
	try {
		A = pole<double>(6);
		B = pole<double>(6);
		C = pole<double>(3);
	}
	catch (const char* e) {
		cout << e;
		return;
	}

	A.randomNaplneni();
	B.randomNaplneni();

	cout << A;
	cout << "Prumer prvku: " << A.prumerPrvku() << endl;
	cout << "Smerodatna odchylka prvku: " << A.smerodatnaOdchylka() << endl;
	cout << "Soucet prvku: " << A.soucetPrvku() << endl;
	

	A.seraditVzestupne();
	cout << A;
	A.seraditSestupne();
	cout << A;
	

	C = A + B;
	cout << C;
	C = A - B;
	cout << C;
	C[0] = 3;
	C = A * B;
	cout << C;
	//C = A / B;

	x.push_back(4.3);
	x.push_back(3);

	C = pole<double>(x);
	cout << C;
}


int main()
{
	test();
	getchar();
	getchar();
	return 0;
}

