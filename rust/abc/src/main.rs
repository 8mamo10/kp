use proconio::input;

fn main() {
    input! {
        n: usize,
        q: usize,
        x: [i64; q],
    }
    for i in 0..q {
        print!("{} ", x[i]);
    }
    println!("");
}
