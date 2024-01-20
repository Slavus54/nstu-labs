const lab8 = () => {
    let products = [{title: 'Milk', weight: 930, price: 65}, {title: 'Bread', weight: 400, price: 29}, {title: 'Cheese', weight: 250, price: 170}]
    let average_price = 0
    let heaviest = null
    let max_weight = 0

    for (let i = 0; i < products.length; i++) {
        let current = products[i]

        if (current.weight > max_weight) {
            max_weight = current.weight
            heaviest = current
        }

        average_price += current.price
    }

    average_price /= products.length
   
    console.log(`Average price = ${average_price}, heaviest product is ${heaviest.title}`)
}

module.exports = lab8