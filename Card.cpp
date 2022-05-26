#include "Card.h"

Card::Card(Points uCurrentPoints): mCurrentCardPoints(uCurrentPoints) {

}

void Card::Flip() {

	!isFaceUp ? isFaceUp = true : isFaceUp = false;
}

int Card::GetValue()
{
	if (MyCard.QUEEN || MyCard.KING || MyCard.JACK || MyCard.TEN) return 10;
    
}
