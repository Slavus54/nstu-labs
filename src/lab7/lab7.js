const lab7 = () => {
    
	let fuc_res = fac(5)
	let arr_res = minEl([3, 4, 2, 7, 6, 5])

	function fac(num) {
		let result = 1

		for (let i = 1; i < num; i++) {
			result *= i
		}
		
		return result
	}


	function minEl(arr) {
		let result = 10**6
		let index = -1
		
		for (let i = 1; i < arr.length; i++) {
			let current = arr[i]
		
			if (result > current) {
				result = current
				index = i
			}
		}

		return index
	}

	console.log(`Factorial of 5 is ${fuc_res}`)
	console.log(`Min element of array has index = ${arr_res}`)
}

module.exports = lab7