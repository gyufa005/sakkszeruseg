#include <iostream>
#include <string>
#include <stdio.h>
#include "board.h"
//#include "steps.h"
#include "alternatesteps.h"
#include "pieces.h"
void erase()
{
	for (int i = 0; i < 28; i++)
		printf("\n");
}
int main()
{
	board b;
	b.drawboard();
	char k;
	scanf_s("%c",&k);
	erase();
	b.drawboard();
}