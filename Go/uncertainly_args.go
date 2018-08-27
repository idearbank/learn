package main

import "fmt"

func myfunc(args ...int) {
    for _, arg := range args {
        fmt.Println(arg)
    }
}

func main() {
    
    fmt.Printf("hello, world\n")
    myfunc(1, 2, 3, 4)            //1 2 3 4
}

//go build uncertainly_args.go
