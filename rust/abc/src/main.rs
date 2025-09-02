use proconio::input;

fn main() {
    input! {
        n: usize,
    }
    let mut result_char = String::new();
    let mut total_len = 0;
    for _ in 0..n {
        input! {
            c: char,
            l: usize,
        }
        total_len += l;
        if total_len > 100 {
            println!("Too Long");
            return;
        }
        for _ in 0..l {
            result_char.push(c);
        }
    }
    println!("{}", result_char)
}
