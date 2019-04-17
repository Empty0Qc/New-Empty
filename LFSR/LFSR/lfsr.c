#include<iostream>
#include<cmath>
using namespace std;
class LFSR {
public:
	public ArrayList transform(long n) {

		int a = 0;
		int b = 0;
		ArrayList al = new ArrayList();
		do{
			if (n % 2 == 1){
				b = 1;
			}
			else {
				b = 0;
			}
			al.add(0, b);
			n = n / 2; a++;
		} while (n>0);
		return al;
	}

	public ArrayList copy(int[] a) {
		ArrayList t = new ArrayList();
		int i;
		for (i = 0; i<a.length; i++) {
			t.add(a[i]);
		}
		return t;

	}

	public ArrayList L1(ArrayList al) {
		int n = al.size();
		int a = (int)al.get(n - 2);
		int b = (int)al.get(n - 5);
		int p = (a + b) % 2;
		al.add(p);
		return al;
	}
	public ArrayList L2(ArrayList al) {
		int n = al.size();
		int a = (int)al.get(n - 2);
		int b = (int)al.get(n - 3);
		int c = (int)al.get(n - 1);
		int p = (a*b + c) % 2;
		al.add(p);
		return al;
	}
	public void print(ArrayList a) {
		for (int i = 0; i < a.size(); i++) {
			int alEach = (int)a.get(i);
			System.out.print(alEach);
		}
	}


	public ArrayList JK(int a, int b, ArrayList c) {
		int d = (int)c.get(c.size() - 1);
		int t = ((a + b + 1)*d + a) % 2;
		c.add(t);
		return c;
	}

	public int code(int a, int b) {
		int y = (a + b) % 2;
		return y;
	}


	public ArrayList encode(ArrayList A, ArrayList B, ArrayList X) {
		ArrayList C = new ArrayList();
		ArrayList Y = new ArrayList();
		int n1 = A.size();
		int n2 = B.size();
		int k, ck, xk, yk;
		for (k = 0; k<X.size(); k++) {
			A = L1(A);
			int ak = (int)A.get(k);
			B = L2(B);
			int bk = (int)B.get(k);
			if (k == 0) {
				C.add(ak);
				ck = (int)C.get(C.size() - 1);
			}
			else {
				C = JK(ak, bk, C);
				ck = (int)C.get(C.size() - 1);
			}
			xk = (int)X.get(k);
			yk = code(xk, ck);
			Y.add(yk);
		}
		System.out.print("密钥为：");
		print(C);
		System.out.println();
		return Y;
	}


	public static void main(String[] args) {

		LFSR s = new LFSR();
		int[] a = { 1, 0, 0, 1, 1 };
		int[] b = { 1, 0, 1 };
		ArrayList a1 = s.copy(a);
		ArrayList b1 = s.copy(b);

		Scanner input = new Scanner(System.in);
		System.out.print("输入学号：");
		long ID = input.nextLong();
		System.out.print("输入为；" + ID);
		System.out.println();
		System.out.print("明文为：");
		ArrayList x = s.transform(ID);
		s.print(x);
		System.out.println();
		ArrayList y = s.encode(a1, b1, x);
		System.out.print("密文为：");
		s.print(y);
		System.out.println();
		ArrayList z = s.encode(a1, b1, y);
		System.out.print("解密为：");
		s.print(z);

		int i;
		long t = 0, e, d;
		for (i = 0; i<z.size(); i++) {
			d = (int)z.get(i);
			e = (long)Math.pow(2, z.size() - i - 1);
			t = t + d*e;
		}
		System.out.println();
		System.out.print("输出为：" + t);


	}

}