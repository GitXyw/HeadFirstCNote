#include <stdio.h>

int main()
{
    const char *cards = "JDK";    // ��ʱcardsֻ�ɶ� ����update ���дΪchar cards[] = "JDK" ���д
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}
