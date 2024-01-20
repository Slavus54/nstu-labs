const lab4 = () => {
    let subseq = 'asbdabcdoisabuoiasj'
    let seq = 'bcd'

    let indexes = []
    let i = 0
    let j = 0
    let isSeq = false

    for (i = 0; i < subseq.length; i++) {
        let current = subseq[i]
        let item = seq[j]

        isSeq = current === item

        if (isSeq) {
            indexes = [...indexes, i]
            j++
        } else if (indexes.length < seq.length) {
            indexes = []
            j = 0
        }
    }
    

    console.log(indexes)
}

module.exports = lab4