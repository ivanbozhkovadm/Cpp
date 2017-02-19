#include<iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

class Rect : public RECT
{
public:

	Rect();
	Rect(int, int, int, int, LPCWSTR);
	void drawCN();
	void drawM();
	void drawMenu();
	void clean();

	int getX1();
	int getY1();
	int getX2();
	int getY2();



private:
	int x1, y1;
	int x2, y2;
	RECT object;
	LPCWSTR text;
	POINT mouseCoord;
};

//global variables
HANDLE consoleHandle;

Rect::Rect()
{
	this->x1 = 0;
	this->y1 = 0;
	this->x2 = 0;
	this->y2 = 0;
	this->text = L"DEFAULT";
}

Rect::Rect(int x1, int y1, int x2, int y2, LPCWSTR text)
{
	object.left = this->x1 = x1;
	object.top = this->y1 = y1;
	object.right = this->x2 = x2;
	object.bottom = this->y2 = y2;
	this->text = text;
}

int Rect::getX1()
{
	return this->x1;
}
int Rect::getY1()
{
	return this->y1;
}
int Rect::getX2()
{
	return this->x2;
}
int Rect::getY2()
{
	return this->y2;
}

void Rect::drawCN()
{
	//ustroistvoto e consola
	HDC hdc = GetDC(GetConsoleWindow());
	SetBkColor(hdc, RGB(0, 138, 14));
	//pravq si chetka (HS_DIAGCROSS-chertae po diagonal)
	HBRUSH brush;
	brush = CreateHatchBrush(HS_DIAGCROSS, RGB(0, 289, 19));;
	//zapulva pravougulnika
	FillRect(hdc, &(this->object), brush);
	//teksta
	const COLORREF color = RGB(30, 246,50);
	SetTextColor(hdc, color);//
	SetBkMode(hdc, TRANSPARENT);
	DrawText(hdc, text, -1, &(this->object), DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	FrameRect(hdc, &(this->object), CreateSolidBrush(RGB(620, 620, 620)));
	DeleteObject(&brush);
	SetTextColor(hdc, RGB(40, 40, 40));
	TextOut(hdc, 200, 350, L"BOZHKOV PROJECTS©", 17);
	
}
void Rect::drawM()
{
	//ustroistvoto e consola
	HDC hdc = GetDC(GetConsoleWindow());
	SetBkColor(hdc, RGB(180, 0, 14));
	//pravq si chetka (HS_DIAGCROSS-chertae po diagonal)
	HBRUSH brush;
	brush = CreateHatchBrush(HS_DIAGCROSS, RGB(0, 0,0));;
	//zapulva pravougulnika
	FillRect(hdc, &(this->object), brush);
	//teksta
	const COLORREF color = RGB(255, 150, 0);
	SetTextColor(hdc, color);//
	SetBkMode(hdc, TRANSPARENT);
	DrawText(hdc, text, -1, &(this->object), DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	FrameRect(hdc, &(this->object), CreateSolidBrush(RGB(620, 620, 620)));
	DeleteObject(&brush);
	SetTextColor(hdc, RGB(40, 40, 40));
	TextOut(hdc, 200, 350, L"BOZHKOV PROJECTS©", 17);
	
}

void Rect::drawMenu()
{
	//ustroistvoto e consola
	HDC hdc = GetDC(GetConsoleWindow());
	SetBkColor(hdc, RGB(50, 400, 450));
	//pravq si chetka (HS_DIAGCROSS-chertae po diagonal)
	HBRUSH brush;
	brush = CreateHatchBrush(HS_DIAGCROSS, RGB(440, 440, 440));;
	//zapulva pravougulnika
	FillRect(hdc, &(this->object), brush);
	//teksta
	const COLORREF color = RGB(0, 0, 0);
	SetTextColor(hdc, color);//
	SetBkMode(hdc, TRANSPARENT);
	DrawText(hdc, text, -1, &(this->object), DT_SINGLELINE | DT_CENTER | DT_VCENTER);
	FrameRect(hdc, &(this->object), CreateSolidBrush(RGB(620, 620, 620)));
	DeleteObject(&brush);
	SetTextColor(hdc, RGB(40, 40, 40));
	TextOut(hdc,200,350, L"BOZHKOV PROJECTS©",17);
	
}

void Rect::clean()
{
	//ustroistvoto e consola
	HDC hdc = GetDC(GetConsoleWindow());
	SetBkColor(hdc, RGB(0, 0, 0));
	//pravq si chetka (HS_DIAGCROSS-chertae po diagonal)
	HBRUSH brush;
	brush = CreateHatchBrush(HS_DIAGCROSS, RGB(0, 0, 0));;
	//zapulva pravougulnika
	FillRect(hdc, &(this->object), brush);
}

void emptyConsole()
{
	Rect menu(400, 20, 200, 50, L"MENU");
	menu.clean();
	Rect sumCN(30, 70, 200, 100, L"SUM");
	sumCN.clean();
	Rect differenceCN(30, 130, 200, 160, L"DIFFERENCE");
	differenceCN.clean();
	Rect multiplyCN(30, 190, 200, 220, L"MULTIPLY");
	multiplyCN.clean();
	Rect withNumberCN(30, 250, 200, 280, L"* WITH REAL NUMBER");
	withNumberCN.clean();
	Rect divisionCN(30, 310, 200, 340, L"DIVISION");
	divisionCN.clean();
	Rect sumM(260, 70, 400, 100, L"SUM");
	sumM.clean();
	Rect multiplyM(260, 130, 400, 160, L"MULTIPLY");
	multiplyM.clean();
	Rect elementM(260, 190, 400, 220, L"ELEMENT");
	elementM.clean();
	Rect inverseM(260, 250, 400, 280, L"INVERSE");
	inverseM.clean();
	Rect equationM(260, 310, 540, 340, L"MATRIX EQUATION: AX=B");
	equationM.clean();
	Rect testM(410, 70, 540, 100, L"DIFFERENCE");
	testM.clean();
	Rect test2M(410, 130, 540, 160, L"*REAL NUMBER");
	test2M.clean();
	Rect test3M(410, 190, 540, 220, L"DETERMINANT");
	test3M.clean();
	Rect test4M(410, 250, 540, 280, L"INVERSE");
	test4M.clean();
}
void consoleSize()
{
	//zadava razmera na conzolata
	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL)
	{
		MoveWindow(hwnd, 300, 50, 650, 500, TRUE);
	}
}

void drawNewMenu()
{
	Rect menu(400, 20, 200, 50, L"MENU");
	menu.drawMenu();
	Rect sumCN(30, 70, 200, 100, L"SUM");
	sumCN.drawCN();
	Rect differenceCN(30, 130, 200, 160, L"DIFFERENCE");
	differenceCN.drawCN();
	Rect multiplyCN(30, 190, 200, 220, L"MULTIPLY");
	multiplyCN.drawCN();
	Rect withNumberCN(30, 250, 200, 280, L"* WITH REAL NUMBER");
	withNumberCN.drawCN();
	Rect divisionCN(30, 310, 200, 340, L"DIVISION");
	divisionCN.drawCN();
	Rect sumM(260, 70, 400, 100, L"SUM");
	sumM.drawM();
	Rect multiplyM(260, 130, 400, 160, L"MULTIPLY");
	multiplyM.drawM();
	Rect elementM(260, 190, 400, 220, L"ELEMENT");
	elementM.drawM();
	Rect inverseM(260, 250, 400, 280, L"INVERSE");
	inverseM.drawM();
	Rect equationM(260, 310, 540, 340, L"MATRIX EQUATION: AX=B");
	equationM.drawM();
	Rect differenceM(410, 70, 540, 100, L"DIFFERENCE");
	differenceM.drawM();
	Rect withNumberM(410, 130, 540, 160, L"*REAL NUMBER");
	withNumberM.drawM();
	Rect determinantM(410, 190, 540, 220, L"DETERMINANT");
	determinantM.drawM();
	Rect transposedM(410, 250, 540, 280, L"TRANSPOSED");
	transposedM.drawM();
}

void SumM()
{
	Matrix m1;
	cout << "Please, insert your first MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert your second MATRIX: " << endl;
	Matrix m2(m1.getRow(), m1.getCol());
	cin >> m2;
	cout << endl << "Your first matrix is: " << endl << m1 << endl << "Your second matrix is: " << endl << m2 << endl;
	cout << "SUM:" << endl << m1 + m2;

}
void SubstractM()
{
	Matrix m1;
	cout << "Please, insert your first MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert your second MATRIX: " << endl;
	Matrix m2(m1.getRow(), m1.getCol());
	cin >> m2;
	cout << endl << "Your first matrix is: " << endl << m1 << endl << "Your second matrix is: " << endl << m2 << endl;
	cout << "SUBSTRACT:" << endl << m1 - m2;


}
void MultiplyM()
{
	Matrix m1;
	cout << "Please, insert your first MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert your second MATRIX: " << endl;
	Matrix m2(m1.getRow(), m1.getCol());
	cin >> m2;
	cout << endl << "Your first matrix is: " << endl << m1 << endl << "Your second matrix is: " << endl << m2 << endl;
	cout << "MULTIPLY:" << endl << m1*m2;

}
void MultiplyWithNumberM()
{
	Matrix m1;
	cout << "Please, insert your MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert your number: " << endl;
	ComplexNumbers n;
	cin >> n;
	cout << endl << "Your first matrix is: " << endl << m1 << endl << "Your number is: " << endl << n << endl;
	cout << "MULTIPLY:" << endl << m1*n;

}
void ElementM()
{
	Matrix m1;
	cout << "Please, insert your first MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert row and colum of the element:" << endl;
	cout << "Please, insert ROW:" << endl;
	int row;
	cin >> row;
	cout << "Please, insert COLUMN:" << endl;
	int col;
	cin >> col;
	cout << endl << "Your matrix is: " << endl;

	cout << "ELEMENT:" << endl << m1(row, col) << endl;

}
void Determinant()
{
	Matrix m1;
	cout << "Please, insert your MATRIX: " << endl;
	cin >> m1;
	cout << "Your matrix is:" << endl
		<< m1;
	Calculations temp;
	cout << "DETERMINANT:" << endl << temp.determinant(m1);

}
void Transposed()
{
	Matrix m1;
	cout << "Please, insert your MATRIX: " << endl;
	cin >> m1;
	cout << "Your matrix is:" << endl
		<< m1 << endl;
	Calculations temp;
	cout << "TRANSPOSED: " << endl << temp.transposed(m1);
}
void Inversed()
{
	Matrix m1;
	cout << "Please, insert your MATRIX: " << endl;
	cin >> m1;
	cout << "Your matrix is: " << endl
		<< m1 << endl;
	Calculations temp;
	cout << "INVERSE:" << endl <<
		temp.inverse(m1) << endl;

}
void Equation()
{

	Matrix m1;
	cout << "Please, insert your first MATRIX: " << endl;
	cin >> m1;
	cout << "Please, insert your second MATRIX: " << endl;
	Matrix m2(m1.getRow(), m1.getCol());
	cin >> m2;
	cout << "Your first matrix is:" << endl << m1 << endl
		<< "Your second matrix is:" << endl << m2 << endl;
	Calculations temp;
	cout << "RESULT:" << endl
		<< temp.matrixEquation(m1, m2) << endl;
}
void menuSumCN()
{
	ComplexNumbers c1;
	cout << "Please, insert your first complex number:" << endl;
	cin >> c1;
	ComplexNumbers c2;
	cout << "Please, insert your second complex number:" << endl;
	cin >> c2;
	cout << "Your complex numbers are:" << endl
		<< "First complex number: " << c1 << endl
		<< "Second complex number: " << c2 << endl;
	cout << "SUM: " << endl
		<< c1 + c2 << endl;
}
void menuSubstractCN()
{
	ComplexNumbers c1;
	cout << "Please, insert your first complex number:" << endl;
	cin >> c1;
	ComplexNumbers c2;
	cout << "Please, insert your second complex number:" << endl;
	cin >> c2;
	cout << "Your complex numbers are:" << endl
		<< "First complex number: " << c1 << endl
		<< "Second complex number: " << c2 << endl;
	cout << "SUBSTRACT: " << endl
		<< c1 - c2 << endl;

}
void menuMultiplyCN()
{
	ComplexNumbers c1;
	cout << "Please, insert your first complex number:" << endl;
	cin >> c1;
	ComplexNumbers c2;
	cout << "Please, insert your second complex number:" << endl;
	cin >> c2;
	cout << "Your complex numbers are:" << endl
		<< "First complex number: " << c1 << endl
		<< "Second complex number: " << c2 << endl;
	cout << "MULTIPLY: " << endl
		<< c1*c2 << endl;

}
void menuMultiplyWithRealNumberCN()
{
	ComplexNumbers c1;
	cout << "Please, insert your first complex number:" << endl;
	cin >> c1;
	double n;
	cout << "Please, insert number:" << endl;
	cin >> n;
	cout << "Your complex numbers are:" << endl
		<< "First complex number: " << c1 << endl
		<< "Number: " << n << endl;
	cout << "MULTIPLY: " << endl
		<< c1*n << endl;

}
void menuDivisionCN()
{
	ComplexNumbers c1;
	cout << "Please, insert your first complex number:" << endl;
	cin >> c1;
	ComplexNumbers c2;
	cout << "Please, insert your second complex number:" << endl;
	cin >> c2;
	cout << "Your complex numbers are:" << endl
		<< "First complex number: " << c1 << endl
		<< "Second complex number: " << c2 << endl;
	cout << "DIVISION: " << endl
		<< c1 / c2 << endl;
}

void Action()
{
	//trie consolata
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(consoleHandle, { 0, 0 });
	Rect blackScreen(0, 0, 900, 900, L" ");
	blackScreen.clean();
	//pravi menu-to
	Rect menu(400, 20, 200, 50, L"MENU");
	menu.drawMenu();
	Rect sumCN(30, 70, 200, 100, L"SUM");
	sumCN.drawCN();
	Rect differenceCN(30, 130, 200, 160, L"SUBSTRACT");
	differenceCN.drawCN();
	Rect multiplyCN(30, 190, 200, 220, L"MULTIPLY");
	multiplyCN.drawCN();
	Rect withNumberCN(30, 250, 200, 280, L"* WITH REAL NUMBER");
	withNumberCN.drawCN();
	Rect divisionCN(30, 310, 200, 340, L"DIVISION");
	divisionCN.drawCN();
	Rect sumM(260, 70, 400, 100, L"SUM");
	sumM.drawM();
	Rect multiplyM(260, 130, 400, 160, L"MULTIPLY");
	multiplyM.drawM();
	Rect elementM(260, 190, 400, 220, L"ELEMENT");
	elementM.drawM();
	Rect inverseM(260, 250, 400, 280, L"INVERSE");
	inverseM.drawM();
	Rect equationM(260, 310, 540, 340, L"MATRIX EQUATION: AX=B");
	equationM.drawM();
	Rect differenceM(410, 70, 540, 100, L"SUBSTRACT");
	differenceM.drawM();
	Rect withNumberM(410, 130, 540, 160, L"*REAL NUMBER");
	withNumberM.drawM();
	Rect determinantM(410, 190, 540, 220, L"DETERMINANT");
	determinantM.drawM();
	Rect transposedM(410, 250, 540, 280, L"TRANSPOSED");
	transposedM.drawM();

	POINT pt;//coordinati na mishkata

	while (true)
	{

		Sleep(1);
		GetCursorPos(&pt);
		ScreenToClient(GetConsoleWindow(), &pt);

		if (GetAsyncKeyState(1) && pt.x >sumCN.getX1() && pt.x < sumCN.getX2() && pt.y < sumCN.getY2() && pt.y > sumCN.getY1())
		{

			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---SUM of complex numbers---" << endl;

			char MENU;
			do{
				menuSumCN();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > differenceCN.getX1() && pt.x < differenceCN.getX2() && pt.y < differenceCN.getY2() && pt.y > differenceCN.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---DIFFERENCE OF COMPLEX NUMBERS---" << endl;

			char MENU;
			do{
				menuSubstractCN();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');

			break;
		}
		if (GetAsyncKeyState(1) && pt.x > multiplyCN.getX1() && pt.x < multiplyCN.getX2() && pt.y < multiplyCN.getY2() && pt.y > multiplyCN.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---MULTIPLY---" << endl;

			char MENU;
			do{
				menuMultiplyCN();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > withNumberCN.getX1() && pt.x < withNumberCN.getX2() && pt.y < withNumberCN.getY2() && pt.y > withNumberCN.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---WITH NUMBER---" << endl;

			char MENU;
			do{
				menuMultiplyWithRealNumberCN();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > divisionCN.getX1() && pt.x < divisionCN.getX2() && pt.y < divisionCN.getY2() && pt.y > divisionCN.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---DIVISION---" << endl;

			char MENU;
			do{
				menuDivisionCN();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x >sumM.getX1() && pt.x < sumM.getX2() && pt.y < sumM.getY2() && pt.y > sumM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---SUM MATRIX---" << endl;

			char MENU;
			do{
				SumM();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > multiplyM.getX1() && pt.x < multiplyM.getX2() && pt.y < multiplyM.getY2() && pt.y > multiplyM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---MULTIPLY MATRIX---" << endl;

			char MENU;
			do{
				MultiplyM();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > elementM.getX1() && pt.x < elementM.getX2() && pt.y < elementM.getY2() && pt.y > elementM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---ELEMENT MATRIX---" << endl;

			char MENU;
			do{
				ElementM();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}		if (GetAsyncKeyState(1) && pt.x > inverseM.getX1() && pt.x < inverseM.getX2() && pt.y < inverseM.getY2() && pt.y > inverseM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---INVERSE MATRIX---" << endl;

			char MENU;
			do{
				Inversed();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > equationM.getX1() && pt.x < equationM.getX2() && pt.y < equationM.getY2() && pt.y > equationM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---EQUATION MATRIX---" << endl;

			char MENU;
			do{
				Equation();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > differenceM.getX1() && pt.x < differenceM.getX2() && pt.y < differenceM.getY2() && pt.y > differenceM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---DIFFERENCE MATRIX---" << endl;

			char MENU;
			do{
				SubstractM();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > withNumberM.getX1() && pt.x < withNumberM.getX2() && pt.y < withNumberM.getY2() && pt.y > withNumberM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---MULTIPLY WITH NUMBER MATRIX---" << endl;

			char MENU;
			do{
				MultiplyWithNumberM();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > determinantM.getX1() && pt.x < determinantM.getX2() && pt.y < determinantM.getY2() && pt.y > determinantM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---DETERMINANT OF MATRIX---" << endl;

			char MENU;
			do{
				Determinant();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
		if (GetAsyncKeyState(1) && pt.x > transposedM.getX1() && pt.x < transposedM.getX2() && pt.y < transposedM.getY2() && pt.y > transposedM.getY1())
		{
			consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleCursorPosition(consoleHandle, { 0, 0 });
			Rect blackScreen(0, 0, 900, 900, L" ");
			blackScreen.clean();
			cout << "---Action pannel---" << endl;
			cout << "---TRANSPONSED MATRIX---" << endl;

			char MENU;
			do{
				Transposed();
				cin >> MENU;
				if (MENU == 'm' || MENU == 'M')
				{
					return Action();
				}
				else
				{
					cout << "Invalid input!" << endl;
				}
			} while (MENU != 'm' || MENU != 'M');
			break;
		}
	}
}








