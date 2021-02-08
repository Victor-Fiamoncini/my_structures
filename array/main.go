package main

import "fmt"

func main() {
	var names [3]string

	names[0] = "Victor"
	names[1] = "Lara"
	names[2] = "Natalia"

	for i := 0; i < len(names); i++ {
		fmt.Println(names[i])
	}
}
