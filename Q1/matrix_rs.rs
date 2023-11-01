use std::io;

fn main() {
    let mut input = String::new();

    println!("행 수 입력 : ");
    io::stdin().read_line(&mut input).expect("입력 에러");
    let rows: usize = match input.trim().parse() {
        Ok(value) => value,
        Err(_) => {
            println!("올바른 숫자를 입력하세요.");
            return;
        }
    };
    input.clear();

    println!("열 수 입력 : ");
    io::stdin().read_line(&mut input).expect("입력 에러");
    let cols: usize = match input.trim().parse() {
        Ok(value) => value,
        Err(_) => {
            println!("올바른 숫자를 입력하세요.");
            return;
        }
    };
    input.clear();

    let mut matrix_a: Vec<Vec<i32>> = vec![vec![0; cols]; rows];
    let mut matrix_b: Vec<Vec<i32>> = vec![vec![0; cols]; rows];

    println!("행렬1 입력 : ");
    for i in 0..rows {
        for j in 0..cols {
            input.clear();
            io::stdin().read_line(&mut input).expect("입력 에러");
            let element: i32 = match input.trim().parse() {
                Ok(value) => value,
                Err(_) => {
                    println!("올바른 숫자를 입력하세요.");
                    return;
                }
            };
            matrix_a[i][j] = element;
        }
    }

    println!("행렬2 입력 : ");
    for i in 0..rows {
        for j in 0..cols {
            input.clear();
            io::stdin().read_line(&mut input).expect("입력 에러");
            let element: i32 = match input.trim().parse() {
                Ok(value) => value,
                Err(_) => {
                    println!("올바른 숫자를 입력하세요.");
                    return;
                }
            };
            matrix_b[i][j] = element;
        }
    }

    let mut matrix_c: Vec<Vec<i32>> = vec![vec![0; cols]; rows];
    for i in 0..rows {
        for j in 0..cols {
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    println!("행렬1:");
    for i in 0..rows {
        for j in 0..cols {
            print!("{} ", matrix_a[i][j]);
        }
        println!();
    }

    println!("행렬2:");
    for i in 0..rows {
        for j in 0..cols {
            print!("{} ", matrix_b[i][j]);
        }
        println!();
    }

    println!("행렬1 + 행렬2 :");
    for i in 0..rows {
        for j in 0..cols {
            print!("{} ", matrix_c[i][j]);
        }
        println!();
    }
}
