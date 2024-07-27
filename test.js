function ItemInCommon(arr1) {
    let obj = {}


    for (let i = 0; i < arr1.length; i++) {
        obj[arr1[i]] = true
        console.log(obj[arr1[i]])
    }

    obj[2] = [2,9,10]
    console.log(obj)
}

let ar = [1,2,3,4,5]

ItemInCommon( ar)