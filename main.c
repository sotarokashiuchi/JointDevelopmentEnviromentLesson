#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/* プロトタイプ宣言 */
int daily_fortune(void);
int horoscopes(void);
int blood_fortune(void);

int main(void){
	int menu_id;
	for( ; ; ){
		// メニュー表示
		printf("\n\nメニュー 一覧\n");
		printf(" 0:占い終了\n");
		printf(" 1:今日の運勢を占う\n");
		printf(" 2:星座占い\n");
		printf(" 3:血液型占い\n");
		
		// メニュー選択
		for( ; ; ){
			printf("メニューを数値で選択してください>>>");
			scanf("%d", &menu_id);
			if(0 <= menu_id && menu_id <= 3){
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
				// 今日の運勢
				daily_fortune();
				break;
			case 2:
				// 星座占い
				horoscopes();
				break;
			case 3:
				// 血液型占い
				blood_fortune();
				break;
			default:
				fprintf(stderr, "menu_idが不正です\n");
				exit(1);
		}
	}

	return 0;
}

/* 受け取った引数から運勢を表示する */
int result(const unsigned int key){
	int percent[10];
	int i;

	// ランダムな数値を10個生成
	srand(key);
	for(i=0; i<10; i++){
		percent[i] = rand() % 100;
	}

	// ランダムな数値を表示
	sleep(1);	// 1s待機(乱数の種は一秒づつ更新されるため)
	printf("運勢:\t%3d%%\n", percent[0]);
	printf("恋愛:\t%3d%%\n", percent[1]);
	printf("願望:\t%3d%%\n", percent[2]);
	printf("商売:\t%3d%%\n", percent[3]);
	printf("失物:\t%3d%%\n", percent[4]);
	printf("住居:\t%3d%%\n", percent[5]);

	return 0;
}

/* 今日の運勢 */
int daily_fortune(void){
	printf("今日のあなたの運勢は…\n");
	result((unsigned int)time(NULL));
	return 0;
}

/* 星座占い */
int horoscopes(void){
	int sign;

	// 星座表示
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
	
	// 星座選択
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

	// 乱数の種の生成
	time_t times = time(NULL);
	struct tm *timeinfo = gmtime(&times);
	result((unsigned int)(timeinfo->tm_year+timeinfo->tm_mon+timeinfo->tm_mday+sign));

	return 0;
}

/* 血液型占い */
int blood_fortune(void){
	int blood;

	// 血液型表示
	printf("\n\n血液型一覧\n");
	printf(" 0:占い終了\n");
	printf(" 1:A型\n");
	printf(" 2:B型\n");
	printf(" 3:AB型\n");
	printf(" 4:O型\n");
	
	// 血液型選択
	for( ; ; ){
		printf("血液型を数値で選択してください>>>");
		scanf("%d", &blood);
		if(0 == blood){
			return 0;
		} else if(1 <= blood && blood <= 4){
			break;
		} else {
			printf("%d という数値の血液型は存在しません\n", blood);
			printf("再度入力してください\n");
		}
	}
	
	// 乱数の種の生成
	time_t times = time(NULL);
	struct tm *timeinfo = gmtime(&times);
	result((unsigned int)(timeinfo->tm_year+timeinfo->tm_mon+blood));

	return 0;
}
