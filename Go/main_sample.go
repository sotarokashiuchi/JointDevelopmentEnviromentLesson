package main

import "fmt"

func main() {

	var inputNumber int
	inputNumber = input()
	fmt.Println(inputNumber)
}

func input() int {
	var inputNumber int
	fmt.Println("数値を入力してください")
	fmt.Scan(&inputNumber)
	return inputNumber
}
