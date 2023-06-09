﻿#pragma once
#include <iostream>
/* unicode bábuk: 
*	ezeket nem tudtam implementálni, ezért betűk a bábuk.
	fehér:  ♜♞♝♛♚♟︎
	fekete: ♖♘♗♕♔♙
	morph bábu: fekete: m,fehér: M
*/
	class board {
		//gyakran előfordulhatnak ezek a karakterek: 
#define whitesquare 0xDB
#define blacksquare 0xFF
#define zero 0x20
		typedef unsigned int uint;
		//enum { empty =0 , bishop=1, tower=2, queen=3, rook=4, morph=5, pawn = 6};
		static char boardcontents[8][8];
		bool blknext;
		/*
		* Nem így néz ki
				{ '♜', '♚', '♝', '♛', '♚', '♝', '♚', '♜' },
				{ '♟︎',  '♟︎',  'M',  '♟︎',  '♟︎',  'M',  '♟︎','♟'},
				{ zero, zero, zero, zero, zero, zero, zero, zero },
				{ zero, zero, zero, zero, zero, zero, zero, zero },
				{ zero, zero, zero, zero, zero, zero, zero, zero },
				{ zero, zero, zero, zero, zero, zero, zero, zero },
				{ '♙',  '♙',  'm',  '♙',  '♙',  'm',  '♙',  '♙' },
				{ '♖',  '♔',  '♗',  '♕',  '♔',  '♗',  '♔',  '♖' } };*/
		
		
	public:
		board();
		~board();
		const board& getboard()const { return *this; }
		void drawboard();
	};
