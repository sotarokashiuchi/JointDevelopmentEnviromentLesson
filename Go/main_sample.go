package main

import "fmt"

func main() {
	var inputNumber int
	inputNumber = input()
	fmt.Println(getSoulNumber(inputNumber))
}

func getSoulNumber(number int) (soulNumber int) {
	for i := 0; i < 8; i++ {
		soulNumber += number % 10
		number = number / 10
		if soulNumber >= 10 {
			soulNumber = soulNumber%10 + (soulNumber%100)/10
		}

	}
	return soulNumber
}

func input() int {
	var inputNumber int
	fmt.Println("数値を入力してください")
	fmt.Scan(&inputNumber)
	return inputNumber
}

func getResult(soulNumber int) {
	switch soulNumber {
	case 1:
		fmt.Println("一風変わった頭脳明晰な先駆者")
	case 2:
		fmt.Println("深い愛情と調和をもたらす人")
	case 3:
		fmt.Println("多才でパワフルな人気者")
	case 4:
		fmt.Println("模範的で人々をつなぐ現実主義者")
	case 5:
		fmt.Println("人を魅力する知的な冒険家")
	case 6:
		fmt.Println("周囲を優しさで包み込む正義の見方")
	case 7:
		fmt.Println("博識で孤独を愛するユニークな探求者")
	case 8:
		fmt.Println("才能と熱意でトップに登りつめる実力派")
	case 9:
		fmt.Println("真面目で現実的な完璧主義者")
	case 11:
		fmt.Println("第六感を味方につけた直感型")
	case 22:
		fmt.Println("変化を楽しむことができる器用な人")
	case 33:
		fmt.Println("明るく楽観的な発明家")
	case 44:
		fmt.Println("癒やしと優しさのオアシス")
	}
}
