const lab3 = () => {
    let arr = [0, 5, 16, -3, 4, 15, 3, 6, 9, -1]
    let min = 10**6
    let index = -1
    let new_arr = []

    for (let i = 0; i < arr.length; i++) {
        let current = arr[i]

        if (min > current) {
            min = current
            index = i
        }

        new_arr = [...new_arr, current]
    }

    new_arr.unshift(min)
    new_arr = [...new_arr.slice(0, index + 1), ...new_arr.slice(index + 2)]

    console.log(new_arr)
}

module.exports = lab3