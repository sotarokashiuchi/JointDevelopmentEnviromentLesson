package main

import "fmt"

func main () {
	var inputNumber []int
	var inputNumberTotal int
	
	// input
	fmt.Printf("解析する整数の個数を入力してください>>>")
	fmt.Scan(&inputNumberTotal)
	for i:=0; i<inputNumberTotal; i++ {
		var input int
		fmt.Printf("%vつ目の整数を入力してください>>>", i+1)
		fmt.Scan(&input)
		inputNumber = append(inputNumber, input)
	}

	fmt.Println("")
	fmt.Println("Analyze....")
	switch(inputNumberTotal){
	case 1:
		isPrimeNumber(inputNumber[0])
		isPerfectNumber(inputNumber[0])
	case 2:
		isAmicableNumbers(inputNumber[0], inputNumber[1])

	}
}


func isPrimeNumber (number int) {
	if (number <= 1){
		return
	}
	for i:=2; i<number; i++ {
		if number%i == 0{
			return
		}
	}
	fmt.Println(number, "は素数です")
	return
}

func isPerfectNumber(number int) {
	if (number <= 0){
		return
	}

	if divideTotal(number) == number {
		fmt.Println(number, "は完全数です")
	}
	return
}

func isAmicableNumbers(x, y int) {
	if x <= 1 || y<=1{
		return
	}

	if divideTotal(x) != y{
		return
	}

	if divideTotal(y) != x {
		return
	}
	fmt.Println(x, y, "は友愛数(親和数)")
	return
}

func divideTotal(number int) int {
	var sum int
	for i:=1; i<number; i++ {
		if number%i == 0{
			sum += i
		}
	}
	return sum
}
	
