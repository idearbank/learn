package main

import "fmt"

func main() {
    var arr [10]int = [10]int {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    fmt.Println(arr)				//[1 2 3 4 5 6 7 8 9 10]
    
    var arr_slice []int = arr[:5]		//基于一个已存在的数组创建"数组切片"
    fmt.Println(arr_slice)			//[1 2 3 4 5]
    
    var arr_slice_1 []int = arr[5:]		//基于从第5个元素开始的所有元素创建数组切片
    fmt.Println(arr_slice_1)			//[6 7 8 9 10]
   


    /* 直接创建 : make()可以用于灵活地创建数组切片*/ 

    var arr_slice_2 []int = make([]int, 5)	//创建一个初始元素个数为5的数组切片
    fmt.Println(arr_slice_2)			//[0 0 0 0 0]

    arr_slice_3  := make([]int, 5, 10)	        //创建一个初始元素个数为5的数组切片,并预留10个元素的存储空间
    fmt.Println(arr_slice_3)			//[0 0 0 0 0]

    arr_slice_4  := []int{1, 2, 3, 4, 5}        //直接创建并初始化包含5个元素的数组切片
    fmt.Println(arr_slice_4)			//[1 2 3 4 5]
}
