#pragma once

class Card {

private:
	enum Suit 
	{
			SPADES,
			HEARTS,
			DIAMONDS,
			CLUBS
	};

	enum Points 
	{
		ACE = 1,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		KING ,
		QUEEN,
		JACK
		
	};

	bool isFaceUp = false;

	Points mCurrentCardPoints;


public:

	//constructor to check the get value func
	Card(Points uCurrentPoints);
	
	void Flip();
	int GetValue(Card MyCard);


};

