#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int daily_fortune(void);
int horoscopes(void);

int main(void){
	int menu_id;
	for( ; ; ){
		/* メニュー選択 */
		// メニュー表示
		printf("\n\nメニュー 一覧\n");
		printf(" 0:占い終了\n");
		printf(" 1:今日の運勢を占う\n");
		printf(" 2:星座占い\n");
		printf(" 3:血液型占い\n");
		
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

	sleep(1);
	printf("運勢:\t%3d%%\n", percent[0]);
	printf("恋愛:\t%3d%%\n", percent[1]);
	printf("願望:\t%3d%%\n", percent[2]);
	printf("商売:\t%3d%%\n", percent[3]);
	printf("失物:\t%3d%%\n", percent[4]);
	printf("住居:\t%3d%%\n", percent[5]);

	return 0;
}


int daily_fortune(void){
	printf("今日のあなたの運勢は…\n");
	result((unsigned int)time(NULL));

	return 0;
}

int horoscopes(void){
	int sign;
			// メニュー表示
			printf("星座 一覧\n");
			printf("  0:星座占い終了\n");
			printf("  1:おひつじ座\n");
			printf("  2:おうし座\n");
			printf("  3:ふたご座\n");
			printf("  4:かに座\n");
			printf("  5:しし座\n");
			printf("  6:おとめ座\n");
			printf("  7:てんびん座\n");
			printf("  8:さそり座\n");
			printf("  9:いて座\n");
			printf(" 10:やぎ座\n");
			printf(" 11:みずがめ座\n");
			printf(" 12:うお座\n");
			
			for( ; ; ){
				printf("星座を数値で選択してください>>>");
				scanf("%d", &sign);
				if(0 == sign){
					return 0;
				} else if(1 <= sign && sign <= 12){
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
