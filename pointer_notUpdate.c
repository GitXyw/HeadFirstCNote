#include <stdio.h>

int main()
{
    const char *cards = "JDK";    // 此时cards只可读 不能update 如果写为char cards[] = "JDK" 则可写
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}
