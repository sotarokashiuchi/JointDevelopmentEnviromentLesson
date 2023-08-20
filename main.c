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
	int sign;
			// メニュー表示
			printf("星座 一覧\n");
			printf(" 0星座占い終了\n");
			printf(" 1おひつじ座\n");
			printf(" 2おうし座\n");
			printf(" 3ふたご座\n");
			printf(" 4かに座\n");
			printf(" 5しし座\n");
			printf(" 6おとめ座\n");
			printf(" 7てんびん座\n");
			printf(" 8さそり座\n");
			printf(" 9いて座\n");
			printf(" 10やぎ座\n");
			printf(" 11みずがめ座\n");
			printf(" 12うお座\n");
			
			for( ; ; ){
				printf("星座を数値で選択してください>>>");
				scanf("%d", &sign);
				if(0 <= sign && sign <= 12){
					break;
				} else {
					printf("%d という数値の星座は存在しません\n", sign);
					printf("再度入力してください\n");
				}
			}

			time_t times = time(NULL);
			struct tm *timeinfo = gmtime(&times);
			result((unsigned int)(timeinfo->tm_year+timeinfo->tm_mon+timeinfo->tm_mday+sign));
	return 0;
}
