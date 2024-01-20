const lab2 = () => {
    const a = 2
    const b = 4
    const border = 15

    let c = 3
    let step = 2

    for (c; c < border; c += step) {
        let half_perimeter = (a + b + c) / 2
        let diff_a = half_perimeter - a
        let diff_b = half_perimeter - b
        let diff_c = half_perimeter - c
        
        let result = (half_perimeter*diff_a*diff_b*diff_c)

        console.log(`Square of triangle with sides a = ${a}, b = ${b} and c = ${c} equal sqrt from ${result}`)
    }
}

module.exports = lab2