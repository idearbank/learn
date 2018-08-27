package main

import "fmt"

type Person struct {
    ID string
    Name string
    Address string
}

func main() {
    var person_map map[string] Person    
    person_map = make(map[string] Person)

    person_map["zhangsan"] = Person{"1", "zhangsan", "北京"}
    person_map["lisi"]     = Person{"2", "lisi", "上海"}

    person, ok := person_map["zhangsan"]
    if ok {
        fmt.Println("person info:", person.Address)
    } else {
        fmt.Println("person not exits")
    }
}

// go build map.go
