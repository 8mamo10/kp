use proconio::input;

fn main() {
    input! {
        n: usize,
    }

    let mut count = 0;
    for _ in 0..n {
        input! {
            a: i64,
            b: i64,
        }
        if b > a {
            count += 1;
        }
    }
    println!("{}", count)
}
