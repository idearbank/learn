package main

import "fmt"

func main() {

    var a [5]int
    var b = [5]int{1, 2, 3, 4, 5}
    b_len := len(b)
    fmt.Println(a, b)		//[0 0 0 0 0] [1 2 3 4 5]
    fmt.Println(b_len)		//5

    fmt.Println("Element", 2, "of array is", b[2])    //Element 2 of array is 3


    for i, v := range b{
        fmt.Println("Array element[", i, "]=", v)
    }
    //Array element[ 0 ]= 1
    //Array element[ 1 ]= 2
    //Array element[ 2 ]= 3
    //Array element[ 3 ]= 4
    //Array element[ 4 ]= 5
}

// go build array.go
