const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const prosses = function(total_cases, test_case){
    rl.question('',function (len_cadena) {
        let result = new Array(Number(len_cadena)).fill(1);
        rl.question('',function (cadena) {
            let a_cadena = Array.from(cadena)
            for (let index = 0; index < Number(len_cadena); index ++) {
                if(index>0){
                    result[index] = a_cadena[index] > a_cadena[index-1] ? result[index-1] + 1 : 1;
                }
            }
            console.log(`case #${test_case}: ${result}`)
            if (total_cases != test_case) prosses(total_cases, test_case + 1 )
            else process.exit(1)
        });
    });
}

rl.question('',function (test_case) {
    prosses(Number(test_case), 1)
});

