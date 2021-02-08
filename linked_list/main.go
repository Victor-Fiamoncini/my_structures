package main

import "fmt"

func main() {
	var newLinkedList intLinkedList

	newLinkedList.push(22)
	newLinkedList.push(12)

	newLinkedList.printList()
}

type intLinkedList struct {
	Value int
	Next  *intLinkedList
}

func (l *intLinkedList) printList() {
	currentNode := l

	for currentNode != nil {
		fmt.Println(currentNode.Value)

		currentNode = currentNode.Next
	}
}

func (l *intLinkedList) push(value int) {
	currentNode := l

	for currentNode.Next != nil {
		currentNode = currentNode.Next
	}

	currentNode.Next = &intLinkedList{
		Value: value,
		Next:  nil,
	}
}
