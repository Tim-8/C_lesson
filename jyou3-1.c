#include <stdio.h>


int main(void)
{
    int choice;

    printf("商品の故障に関する相談は1を、購入に関する質問は２を、");
    printf("技術的な質問は3を、その他は4を押してください。\n");
    scanf("%d", &choice);

    switch(choice){

        case 1:
        printf("商品の故障に関する相談ですね。\n");
        break;
        
        case 2:
        printf("商品の購入に関する質問ですね。\n");
        break;

        case 3:
        printf("商品の技術的な質問ですね。\n");
        break;

        case 4:
        printf("オペレータにお繋ぎします。\n");
        break;

        default:
        printf("１から４の番号を押してください\n");

        
        
        }

        return 0;
}