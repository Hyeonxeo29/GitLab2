use std::collections::BTreeMap;
use std::io;

#[derive(Debug)]
struct Node {
    middle_test_score: i32,
    final_test_score: i32,
}

fn main() {
    let mut student_map: BTreeMap<String, Node> = BTreeMap::new();

    println!("학생 수 입력:");
    let mut student_count = String::new();
    io::stdin().read_line(&mut student_count).expect("입력 에러");
    let student_count: usize = student_count.trim().parse().expect("올바른 숫자를 입력");

    for _ in 0..student_count {
        let mut input = String::new();
        println!("학생 이름, 중간, 기말 점수를 입력:");
        io::stdin().read_line(&mut input).expect("입력 에러");
        let mut iter = input.split_whitespace();
        if let (Some(name), Some(middle), Some(fin)) = (iter.next(), iter.next(), iter.next()) {
            let student_data = Node {
                middle_test_score: middle.parse().expect("점수를 입력"),
                final_test_score: fin.parse().expect("점수를 입력"),
            };
            let result = student_map.insert(name.to_string(), student_data);

            print!("\"{}\"", name);

            match result {
                Some(_) => println!(" 이미 존재"),
                None => println!(" 맵에 추가"),
            }
        } else {
            println!("입력이 올바르지 않습니다.");
        }
    }

    for (name, data) in &student_map {
        println!("이름 = {}, 중간 = {}, 기말 = {}", name, data.middle_test_score, data.final_test_score);
    }
}
