// Step7 http://wisdom.sakura.ne.jp/programming/c/c7.html

#include <stdio.h>

int main(void)
{
	int var;

	printf("あなたは猫耳が好きですか?\n");
	printf("はい = 1\tいいえ = 2\t兎耳のほうが… = 3\n");

	scanf("%d",&var);

	switch (var) {
	case 1:
		printf("同士よ、共に全宇宙を猫耳に染めようぞ！");
		break;
	case 2:
		printf("それじゃアキバは歩けないぜ、旦那");
		break;
	case 3:
		printf("ウサギちゃんか…耳で空飛ぶんだぞ！");
		break;
	default:
		printf("指定した数を選択してください");
	}
    return 0;
}
