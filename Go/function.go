package main

import "fmt"
import "errors"

func add(a int, b int) (ret int, err error) {         // 如果不是类的成员函数则函数名可以小写
    if a < 0 || b < 0 {                               // 假设这个函数只支持两个非负数字的加法
        err= errors.New("Should be non-negative numbers!")
        return
    }
    return a + b, nil                                 // 支持多重返回值
}

func main() {
    fmt.Printf("hello, world\n")

    sum, _ := add(1, 2)
    fmt.Printf( "1 + 2的和是 : %d\n", sum )
}

// go build function.go
// ./function
