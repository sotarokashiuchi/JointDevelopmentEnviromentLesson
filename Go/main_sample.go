package main

import "fmt"

func main() {
	fmt.Println(getSoulNumber(20060416))
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
