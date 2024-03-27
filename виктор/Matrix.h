#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

template<typename T>
class Matrix_Class
{
private:
	T* data;
	int m, n;
public:

	Matrix_Class(int _m, int _n) {  //прямоугольная матрица
		m = _m;
		n = _n;

		data = new T[m * n];

	}

	Matrix_Class(int size) { //квадратная матрица
		m = size;
		n = size;

		data = new T[size];
	}

	Matrix_Class(const Matrix_Class& matrix) {   //конструктор копирования
		m = matrix.m;
		n = matrix.n;

		data = new T[m * n];

		for (int i = 0; i < m * n; i++) {
			data[i] = matrix.data[i];
		}
	}

	~Matrix_Class(){
		delete[] data;
	}

	void random () {
		for (int i = 0; i < m * n; i++) {
			data[i] = std::rand() % 10;
		}
	}

	Matrix_Class& operator= (const Matrix_Class& matrix) {
		this-> ~Matrix_Class(); //

		n = matrix.n;
		m = matrix.m;

		data = new T[m * n];
		for (int i = 0; i < m * n; i++) {
			data[i] = matrix.data[i];
		}
		return *this;
	}
	bool operator== (const Matrix_Class& matrix) {
		if (m == matrix.m && n == matrix.n) {

			for (int i = 0; i < m * n; i++) {

				if (data[i] != matrix.data[i]) {
					return false;
				}
			}
			return true;
		}
		return false;
	}

	bool operator!= (const Matrix_Class& matrix) {
		return 1 - (*this == matrix);

	}
	Matrix_Class operator+ (const Matrix_Class& matrix) {
		if (m == matrix.m && n == matrix.n) {
			Matrix_Class result(m, n);

			for (int i = 0; i < m * n; i++) {
				
				result.data[i] = data[i] + matrix.data[i];
			}
			return result;
		}
	}
	Matrix_Class operator+= (const Matrix_Class& matrix) {
		if (m == matrix.m && n == matrix.n) {
			Matrix_Class result(m, n);

			for (int i = 0; i < m * n; i++) {

				data[i] = data[i] + matrix.data[i];
			}
			return *this;
		}
	}
	Matrix_Class operator- (const Matrix_Class& matrix) {
		if (m == matrix.m && n == matrix.n) {
			Matrix_Class result(m, n);

			for (int i = 0; i < m * n; i++) {

				result.data[i] = data[i] - matrix.data[i];
			}
			return result;
		}

	}
	Matrix_Class operator-= (const Matrix_Class& matrix) {
		if (m == matrix.m && n == matrix.n) {
			Matrix_Class result(m, n);

			for (int i = 0; i < m * n; i++) {

				data[i] = data[i] - matrix.data[i];
			}
			return *this;
		}
	}
	Matrix_Class operator* (const Matrix_Class& matrix) {
		if (n== matrix.m) {
			Matrix_Class result(m, matrix.n);

			for (int i = 0; i < m; i++) {
				for (int j = 0; j < matrix.n; j++) {

					result.data[i * result.n + j ] = 0;
					for (int k = 0; k < n; k++)
						result.data[i * result.n + j] += data[i * n + k] * matrix.data[k * matrix.n + j];
				}

			}
			return result;
		}
	}
	friend int main();
	template<typename U>
	friend std::istream& operator>> (std::istream& s, Matrix_Class<U>& matrix);

	template<typename U>
	friend std::ostream& operator<< (std::ostream& s, const Matrix_Class<U>& matrix);
};

template<typename T>
std::istream& operator>> (std::istream& s, Matrix_Class<T>& matrix) {
	for (int i = 0; i < matrix.m * matrix.n; i++) {
		s >> matrix.data[i];
	}
	return s;
}

template<typename T>
std::ostream& operator<< (std::ostream& s, const Matrix_Class<T>& matrix) {
	for (int i = 0; i < matrix.m; i++) {
		for (int j = 0; j < matrix.n; j++) {
			s << matrix.data[i * matrix.n + j] << " ";
		}
		s << std::endl;
	}
	return s;
}



///////////////////////////////////////////////////////////////////////////////////////////////////VECTOR

template<typename T>
class Vector {
private:
	T* vec;

public:
	Vector(const T& veс) : vec(new T[3]) {
		for (int i = 0; i < 3; ++i) {
			vec[i] = veс;
		}
	}

	T operator* (const Vector& other) {
		T sum = 0;
		for (int i = 0; i < 3; i++)
			sum += vec[i] * other.vec[i];
		return sum;
	}

	Vector<T> operator/ (const Vector& other) {
		Vector<T> result(0);
		result.vec[0] = (vec[1] * other.vec[2]) - (vec[2] * other.vec[1]);
		result.vec[1] = (vec[2] * other.vec[0]) - (vec[0] * other.vec[2]);
		result.vec[2] = (vec[0] * other.vec[1]) - (vec[1] * other.vec[0]);
		return result;
	}

	~Vector() {
		delete[] vec;
	}

	friend int main();
	friend std::istream& operator>> (std::istream& s, Vector<T>& vect);
	friend std::ostream& operator<< (std::ostream& s, const Vector<T>& vect);
};

template<typename T>
std::istream& operator>> (std::istream& s, Vector<T>& vect) {
	for (int i = 0; i < 3; i++) {
		s >> vect.vec[i];
	}
	return s;
}

template<typename T>
std::ostream& operator<< (std::ostream& s, const Vector<T>& vect) {
	for (int i = 0; i < 3; i++) {
		s << vect.vec[i] << " ";
	}
	return s;
}
