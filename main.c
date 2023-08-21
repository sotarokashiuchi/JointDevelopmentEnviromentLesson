#include <stdio.h>

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
		printf("メニューを数値で選択してください>>>");
		scanf("%d", &menu_id);

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
				return 1;
		}
	}

	return 0;
}

/* 受け取った引数から運勢を表示する */
int result(const unsigned int key){
	return 0;
}

/* 今日の運勢 */
int daily_fortune(void){
	return 0;
}

/* 星座占い */
int horoscopes(void){
	return 0;
}

/* 血液型占い */
int blood_fortune(void){
	return 0;
}
