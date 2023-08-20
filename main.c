#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

int daily_fortune(void);
int horoscopes(void);

int main(void){
	int menu_id;
	for( ; ; ){
		/* メニュー選択 */
		// メニュー表示
		printf("メニュー 一覧\n");
		printf(" 0占い終了\n");
		printf(" 1今日の運勢を占う\n");
		printf(" 2星座占い\n");
		
		for( ; ; ){
			printf("メニューを数値で選択してください>>>");
			scanf("%d", &menu_id);
			if(0 <= menu_id && menu_id <= 2){
				break;
			} else {
				printf("%d という数値のメニューは存在しません\n", menu_id);
				printf("再度入力してください\n");
			}
		}

		/* 占い呼び出し*/
		switch(menu_id){
			case 0:
				return 0;
			case 1:
				daily_fortune();
				break;
			case 2:
				horoscopes();
				break;
			default:
				fprintf(stderr, "menu_idが不正です\n");
				exit(1);
		}
	}

	return 0;
}

int result(const unsigned int key){
	int percent[10];
	srand(key);
	int i;

	for(i=0; i<10; i++){
		percent[i] = rand() % 100;
	}

	printf("運勢:\t%3d%%\n", percent[0]);
	printf("恋愛:\t%3d%%\n", percent[1]);
	printf("願望:\t%3d%%\n", percent[2]);
	printf("商売:\t%3d%%\n", percent[3]);
	printf("失物:\t%3d%%\n", percent[4]);
	printf("住居:\t%3d%%\n", percent[5]);

	return 0;
}


int daily_fortune(void){
	return 0;
}

int horoscopes(void){
	return 0;
}
