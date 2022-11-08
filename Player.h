#ifndef PLAYER_H
#define PLAYER_H
#include "Deck.h"

class Player
{
private:
    int m_score{};

public:
    int drawCard(Deck& deck);

    int score() const;

    bool isBust() const;

};

#endif