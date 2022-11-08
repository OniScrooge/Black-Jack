#include "Deck.h"
#include "Card.h"
#include "Player.h"

// Maximum score before losing.
constexpr int g_maximumScore{ 21 };

int Player::drawCard(Deck& deck)
{
    int value = deck.dealCard().value();
    m_score += value;
    return value;
}

int Player::score() const
{
    return m_score;
}

bool Player::isBust() const
{
    return (m_score > g_maximumScore);
}