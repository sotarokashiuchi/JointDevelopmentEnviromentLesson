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
