//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b && a > c) {
//		cout << a;
//	}
//	if (b > a && b > c) {
//		cout << b;
//	}
//	if (c > a && c > b) {
//		cout << c;
//	}
//	if (a == b && b == c) { cout << a; }
//	if (a == b && a >c) { cout << a; }
//	if (a == b && a < c) { cout << c; }
//	if (b == c && b > a) { cout << b; }
//	if (b == c && b <a) { cout << a; }
//	if (c == a && a > b) { cout << a; }
//	if (c == a && a < b) { cout << b; }
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a < b && b < c) {
//		cout << "increasing";
//	} else {
//		if (a > b && b>c) {
//			cout << "decreasing";
//		} else {
//			cout << "neither increasing nor decreasing order";
//		}
//	}
//
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//    if (a <= b && b <= c) {
//        cout << "increasing";
//    }
//    else if (a >= b && b >= c) {
//        cout << "decreasing";
//    }
//    else {
//        cout << "neither increasing nor decreasing order";
//    }
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	cout << (
//		(a - b <= 0 && b - c <= 0) ? "increasing" :
//		(a - b >= 0 && b - c >= 0) ? "decreasing" :
//		"neither increasing nor decreasing order"
//		);
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int month, day;
//	cin >> month;
//
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//	{
//		day = 31;
//		break;
//	}
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//	{
//		day = 30;
//		break;
//	}
//	default: {
//		day = 28;
//	}
//	}
//	cout << day;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main () {
//	char c;
//	int a, b;
//	cin >> a >> c >> b;
//	switch (c) {
//	case '+': 
//cout << a + b;
//		break;
//	case '-' :
//		cout << a - b;
//	case '*' :
//		cout << a * b;
//	case '/' :
//		cout << a / b;
//	}
//	
//
//  return 0;
//	}



//
//
//#/*include<iostream>
//
//    using namespace std;
//
//    int main() {
//        int n;
//        cin >> n;
//        if (n >= -5) {
//            for (int i = n; i >= -5; i--) {
//                cout << i << " ";
//            }
//        }
//        else {
//            for (int i = n; i <= -5; i++) {
//                cout << i << " ";
//            }
//        }
//        return 0;
//    }
//	


//#include<iostream>
//using namespace std;
//int sum(int n) {
//	int sum = 0;
//	for (int i = 0; i <= n; i++)
//		sum += i;
//	return sum;
//}
//int main() {
//	int n;
//	do {
//		cout << "Nhap n: ";
//		cin >> n;
//	} while (n <= 0);
//	cout << "Tong cua day so la: " << sum(n) << endl;
//	system("pause");
//	return 0;
//}




#include <iostream>

//int main() {
//    int n, sum = 0;
//    std::cout << "Nhập số lượng phần tử trong dãy: ";
//    std::cin >> n;
//
//    int a[n];
//    std::cout << "Nhập " << n << " phần tử: ";
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//        sum += a[i];
//    }
//
//    std::cout << "Tổng của dãy số là: " << sum << std::endl;
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int a, b, sum = 0;
//    cin >> a >> b;
//    for (int i = a; i <= b; i++) {
//        cout << sum + i;
//    }
//
//
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i += 2) {
//        sum = sum + i;
//    }
//    cout << sum;
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int i = 1, count = 0, n;
//	cin >> n;
//	while (i <= n) {
//		if (n % i == 0) {
//			count ++;
//		} i++;
//	} 
//	cout << count;
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int count = 0;
//	while (true) {
//		count++;
//		if (count>=1 && count<= 10) {
//			
//		}
//	}
//	cout << count;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int i = 0;
//    while (i <= 20) {
//
//        if (i == 11) {
//            break;
//        }
//        cout << i << " ";
//        i++;
//    }
//        
//    return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int i = 1;
//	do {
//		cout << "do-while";
//		i++;
//	} while (i < 5);
//
//	while (i < 1) {
//		cout << "while";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a[5], max, min;
//	for (int i = 0; i <= 4; i++) {
//		cin >> a[i];
//
//		if (max >= a[i]) {
//			cout << max
//		} 
//	}
//	
//	
//	return 0;
//	}


//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int n;
//    cout << "số phần tử trong mảng: "; cin >> n;
//    int arr[10000];
//    int max = arr[0];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//   
//    cout << "Phần tử lớn nhất trong mảng: " << max << endl;
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int n, k, a = 0;
//    int arr[1000];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    
//     if (arr[i] == k) {
//
//         a++;
//     }
//    } 
//    cin >> k;
//    cout << a;
//    return 0;
//}

#include<iostream>

using namespace std;

//int main() {
//    int n, a[10000];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (a[j] < a[i]) {
//                   int temp = a[i];
//                    a[i] = a[j];
//                    a[j] = temp;
//
//            }
//        }
//        }
//        for (int i = 0; i < n; i++) {

//            cout << a[i]<< " ";
//  }
//    
//        return 0;
//}
//
//#include<iostream>

//using namespace std;
//
//int main() {
//    int a[100][100], n, m;
//    cin >> n >> m;
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//           
//            sum= sum + a[i][j];
//        }
//    } 
//    cout << sum;
//return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    string s = "Codelearn";
//    char c;
//    cin >>c;
//    // s.size() chính là độ dài của xâu s
//    for (int i = 0; i < s.size(); i++) {
//        cout << s[i - 1] << i<<endl;
//    }
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    string s ;
//    char c;
//    cin >> s >> c;
//    // s.size() chính là độ dài của xâu s
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == c) {
//            cout << i+1;
//        }
//        break;
//    }
//    return 0;
//}
//


//#include<iostream>
//
//using namespace std;
//
//int main() {
//    string s;
//    char c;
//    cin >> s >> c;
//    int index = -1;
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == c) {
//            index = i;
//            /*
//            Gọi lệnh break để dừng vòng lặp do
//            đã tìm thấy vị trí đầu tiên mà ký tự c xuất hiện.
//            Nếu không có lệnh break thì kết quả của chương trình
//            sẽ là vị trí cuối cùng mà ký tự c xuất hiện.
//            */
//            break;
//        }
//    }
//    cout << index;
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//    string s, a;
//    cin >> s;
//
//    for (int i = 0; i < s.size(); i++) {
//        a=s[i]-32;
//        cout << a;
//    }
//    return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] >= 'A' && s[i] <= 'Z') {
//            s[i] += 32;
//        }
//
//    }cout << s;
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//struct Books
//{
//    string book_name;
//    int book_id, cost;
//};
//
//int main()
//{
//    Books book_1 = { "Truyện Cổ tích Việt Nam", 1, 25000 }; // Gán giá trị cho các thành viên cấu trúc.
//
//    cout << "Mã số sách là: " << book_1.book_id << endl;
//    cout << "Tên sách là: " << book_1.book_name << endl;
//    cout << "Giá bán sách: " << book_1.cost << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//void show (string s) {
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] >= 'A' && s[i] <= 'Z') {
//            s[i] += 32;
//        }
//    } cout << s<<"\n";
//}
//
//int main() {
//
//string s1, s2, s3;
//cin >> s1 >> s2 >> s3;
//show(s1);
//show(s2);
//show(s3);
//return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void sortarray(int arr[1000], int n) {
//	int a ;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if(arr[j] > arr[i]) {
//				a= arr[i] ;
//				arr[i] = arr[j];
//				arr[j] = a;
//				
//			} 
//		}
//	}  
//}
//
//int main() {
//	int n;
//	int arr[1000];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sortarray(arr, n);
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
	/*

	return 0;
}*/

//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int a[1000];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	int maxValue = a[0];
//	for (int i = 0; i < n; i++) {
//		if (a[i] > maxValue) {
//			maxValue = a[i];
//		}
//	}
//	cout << maxValue;
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int show(int a[1000],int n) {
//	int sum=0;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	
//	} 
//	return sum;
//}
//	int main() {
//		int a[100000], m;
//		
//		cin >> m;
//		
//		cout << show(a, m);
//		
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main () {
//	int sum = 0,a[1000],n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//
//	} cout << sum;
//	
//	
//	
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int maxOfArray(int arr[1000], int n) {
//	int max;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//
//
//			if (arr[i] < arr[j]) {
//				max = arr[j];
//			}
//
//		}
//	}
//	return max;
//}
//int main() {
//	int n1, n2;
//	int arr1[1000], arr2[1000];
//	cout << "số phần tử trong mảng 1: " ; cin >> n1;
//	
//	for (int i = 0; i < n1; i++) {
//		cin >> arr1[i];
//	}
//	cout << "số phần tử trong mảng 2: " ; cin >> n2;
//	
//	for (int i = 0; i < n2; i++) {
//		cin >> arr2[i];
//	}
//
//	cout << "số lớn nhất trong m1: "<< maxOfArray(arr1, n1) << endl;
//	cout << "số lớn nhất trong m2: " << maxOfArray(arr2, n2);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void show(string a[1000], int n) {
//	for (int i = 0; i < n; i++) {
//		if (a[i].size() >= 3) {
//			cout << a[i]<<" ";
//		}
//	}
//}
//int main() {
//	string a[1000];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	show(a, n);
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int sum(int n) {
//
//	if (n == 1) 
//		return 1;
//	if (n % 2 == 0)
//		return sum(n-1);
//
//	else
//		return n + sum(n - 2);
//	
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	cout << sum(n);
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int abs(int n) {
//
//	if (n == 1)
//		return 1;


//	if (n % 2 == 0)
//		return abs(n - 1);
//	else return n + abs(n - 2);
//}
////
////	else
////		return n + sum(n - 2);
////
////}
//
//int main() {
//	int n;
//	cin >> n;
//
//	cout << abs(n);
//	return 0;
//}


//#include <iostream>
//#include <iomanip>	// for std::setprecision()
//	using namespace std;
//
//	int main() {
//		double	d1{ 1.0 };
//		double	d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
//		
//		if (d1 == d2)
//			cout << "d1 == d2" << "\n";
//		else if (d1 > d2)
//			cout << "d1 > d2" << "\n";
//		else if (d1 < d2)
//			cout << "d1 < d2" << "\n";
//
//	
//		cout << std::setprecision(20);	// show 20 digits
//		cout << "d1 = " << d1 << endl;
//		cout << "d2 = " << d2 << endl;
//
//		return 0;
//	}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 500;
//	char c = n;
//	
//	double d(0.1f);
//	cout << static_cast<int>(c) << endl;
//	cout << d;
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        if (i == 5)
//        {
//            goto jump;
//        }
//        cout << i << " ";
//    }
//
//jump:
//    cout << endl << "Jumped to label jump." << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//
//tryAgain: // nhãn
//
//	cout << "Nhap so nguyen duong:";
//	cin >> n;
//
//	if (n < 0)
//		goto tryAgain; // nhảy đến nhãn tryAgain
//
//	cout << n << " la so nguyen duong" << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <random>
//using namespace std;
//
//int main()
//{
//	random_device rd;	// only used once to initialize (seed) engine
//	mt19937 abc(rd());	// random-number engine used (mersenne-twister in this case)
//
//	// output 10 random number
//	for (int i = 0; i < 10; i++)
//	{
//		auto random_integer = abc();
//		cout << random_integer << "\t";
//
//		if ((i + 1) % 5 == 0)
//			cout << endl;
//	}
//
//	// output 10 random number in the range 1 to 100 
//	uniform_int_distribution<int> uni(1, 100);
//	for (int i = 0; i < 10; i++)
//	{
//		auto random_integer = uni(abc);
//		cout << random_integer << "\t";
//
//		if ((i + 1) % 5 == 0)
//			cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int iValue = 5;
//	cout << typeid(&iValue).name() << "\n";
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	/*int a = 1005000000;
//	int* p1 = & a;
//	char* p2 = (char*) & a;
//	cout << "*p1 = " << *p1<< endl;
//	cout << "*p2 = " << (int)*p2;*/
//	int a = 500;
//	char b = (char)a;
//	cout << (int)b;
//	
//	
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void change(int& a) {
//    a++;
//    cout << " Address of a in inc function :"<<&a<<endl;
//}
//
//int main() {
//    int a;
//    cin >> a;
//    change(a);
//    cout << "New value of a: " << a;
//    cout << "Address of a in main function: " << &a << endl;;
//    return 0;
////}
//#include <iostream>
//using namespace std;
//
//void printValue(const int& value)	// value is a const reference
//{
//	// compile error: a const reference cannot have its value changed!
//	
//
//	cout << value << endl;
//}
//
//int main()
//{
//	int x(1);
//
//	printValue(x);	// argument is a variable
//	//printValue(5);	// argument is a const
//	//printValue(x + 5);	// argument is a expression
//
//	return 0;
//}
//#include<iostream>
//using  namespace std;
//int main() {
//	int a=5;
//	cout << (int) & a << endl;
//	int add;
//	cin >> add;
//	
//	int* p = reinterpret_cast<int*>(add);
//	*p = 10;
//	cout << *p;
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void doSomething(double* ptr)
//{
//	// ptr sẽ chuyển thành true nếu nó null, và false nếu nó không null
//	if (ptr)
//		std::cout << "You passed in " << *ptr << '\n';
//	else
//		std::cout << "You passed in a null pointer\n";
//}
//
//int main()
//{
//	//int* ptr = nullptr; // ptr là 1 con trỏ null
//	//doSomething(nullptr); // truyền con trỏ null vào hàm
//
//	doSomething(0); // truyền 0 có thể gây nhầm lẫn rằng tham số hàm là số nguyên
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int getMaxValue(int *p, int n) {
//   
//    int max = p[0];
// 
//    for (int i = 0; i < n; i++) {
//        if (p[i] > max) {
//            max = p[i];
//        }
//        }   
//    return max;
//}
//
//int main() {
//    int n;
//    int arr[100];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cout << "Max value = " << getMaxValue(arr, n);
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    // Hiển thị giá trị của arr
//    cout << arr << endl;
//    // Hiển thị địa chỉ của phần tử đầu tiên trong mảng
//    cout <<(int) & arr[0] << " " <<(int) & arr[1] << "\t" << (int)&arr[2] << endl;
//    return 0;
//}
//#include <iostream> 
//
//using namespace std;
//
//int main() {
//	int n;
//	int* arr;
//	cin >> n;
//	// Thực hiện cấp phát bộ nhớ động cho mảng
//	arr = new int[n];
//	int sum = 0;
//	// Nhập dữ liệu cho mảng
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	// Tính tổng các phần tử trong mảng và lưu vào biến sum
//
//	cout << "Sum = " << sum;
//	delete[]arr;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int arr[3][3] = { {1, 2, 4}, {3, 5, 6}, {7, 8, 9} };
//	cout << arr[1][1];
//	return 0;
////}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int a[100][100];
//	int a[100];
//	int sum = 0;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//		
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		
//			sum += a[i];
//		}
//	
//				cout << sum;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int* arr = new int[n * m];
//
//	for (int i = 0; i < n * m; i++) {
//		cin >> arr[i];
//	}
//
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		int sum = 0;
//		for (int j = 0; j < m; j++) {
//			sum += arr[index];
//			index++;
//		}
//		cout << sum << endl;
//	}
//	
//	delete[]arr;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	
//	int n, m;
//	cin >> n >> m;
//	int* a = new int[n * m];
//
//	for (int i = 0; i < n * m; i++) {
//		cin >> a[i];
//	}
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		int sum = 0;
//		for (int j = 0; j < m; j++) {
//			
//			sum += a[index];
//			index++;
//		}cout << sum << endl;
//	}
//	delete[] a;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	// Khai báo con trỏ cấp 2 arr
//	int** arr;
//
//	// Cấp phát vùng nhớ động cho mảng 1 chiều các con trỏ kiểu int*
//	// Có thể hiểu arr là mảng n phần tử, mỗi phần tử là 1 con trỏ kiểu int*
//	arr = new int* [n];
//	for (int i = 0; i < n; i++) {
//		// Cấp phát động cho các n mảng 1 chiều
//		arr[i] = new int[m];
//	}
//
//	// Nhập dữ liệu cho các phần tử trong mảng
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	// Tính tổng từng hàng và hiển thị ra màn hình
//	for (int i = 0; i < n; i++) {
//		int sum = 0;
//		for (int j = 0; j < m; j++) {
//			sum += arr[i][j];
//		}
//		cout << sum << endl;
//	}
//
//	// Giải phóng bộ nhớ
//	for (int i = 0; i < n; i++) {
//		// Giải phóng bộ nhớ con các mảng một chiều
//		delete[] arr[i];
//	}
//	// Giải phóng bộ nhớ cho mảng các con trỏ
//	delete[]arr;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n,m;
//	cin >> n>>m;
//	int** a = new int*[n];
//	for (int i = 0; i < n; i++) {
//		a[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++) {
//		int sum = 0;
//		for (int j = 0; j < m; j++) {
//
//
//			cin >> a[i][j];
//			sum += a[i][j];
//		}cout << sum << endl;
//return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool is_valid_string(string s) {
//    string target = "congnghe";
//    int counts[8] = { 0 }; // mảng đếm tần suất cho các ký tự trong xâu "congnghe"
//    for (char c : s) {
//        int index = target.find(c);
//        if (index >= 0) {
//            counts[index]++;
//        }
//    }
//    for (int i = 0; i < 8; i++) {
//        if (counts[i] == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    cin.ignore(); // đọc kí tự newline sau dòng chứa số lượng chuỗi cần kiểm tra
//    for (int i = 0; i < n; i++) {
//        string s;
//        getline(cin, s);
//        if (is_valid_string(s)) {
//            cout << "yes" << endl;
//        }
//        else {
//            cout << "no" << endl;
//        }
//    }
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a = "congnghe", b;
//	int n, c = 0, d = 0;
//	cin >> n;
//	int A[26] = { 0 };
//	for (int i = 0; i < n; i++) {
//		cin.ignore();
//		cin >> b;
//		int x = b.size();
//		for (int j = 0; j < x; j++) {
//			A[(int)b[j] - 97] ++;
//		}
//		if (A[2] >= 1 && A[4] >= 1 && A[6] >= 2 && A[7] >= 1 && A[14] >= 1 && A[13] >= 2) {
//			for (int j = 0; j < 8; j++) {
//				for (int k = c; k < x; k++) {
//					if (b[k] == a[j]) {
//						++d;
//						c = k + 1;
//						break;
//					}
//				}
//			}
//			if (d == 8) cout << "yes";
//			else cout << "no";
//		}
//		else cout << "no";
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//bool isValid(string s, string c) {
//    int i = 0, j = 0;
//    while (i < s.length() && j < c.length()) {
//        if (s[i] == c[j]) {
//            j++;
//        }
//        i++;
//    }
//    return j >= c.length();
//}
//
//int main() {
//    string s;
//    getline(cin, s);
//    string c = "congnghe";
//    if (isValid(s, c)) {
//        cout << s << " yes " << c << endl;
//    }
//    else {
//        cout << s << " no " << c << endl;
//    }
//    return 0;
//}

//#include <string>
//
//using namespace std;
//
//int main() {
//    string s;
//    int x, y;
//
//    // Nhập nhiều giá trị cùng lúc vào xâu s
//    cout << "Nhap xau s: ";
//    getline(cin, s);
//
//    // Nhập hai giá trị nguyên x và y
//    cout << "Nhap hai gia tri nguyen x va y: ";
//    cin >> x >> y;
//
//    // Hiển thị các giá trị đã nhập
//    cout << "Xau s: " << s << endl;
//    cout << "Gia tri x: " << x << endl;
//    cout << "Gia tri y: " << y << endl;
//
//    return 0;
//}
#include <iostream>

#include <string>

using namespace std;

bool isValid(string s, string c) {
    // Duyệt chuỗi cần kiểm tra xem tất cả các ký tự trong c có nằm trong s hay không
    int i = 0, j = 0;
    while (i < s.length() && j < c.length()) {
        if (s[i] == c[j]) {
            j++;
        }
        i++;
    }
    return j >= c.length();
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // bỏ qua ký tự xuống dòng còn sót lại sau câu lệnh cin

    while (n--) {
        string s;
        getline(cin, s);

        if (isValid(s, "congnghe")) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
return 0;
}
