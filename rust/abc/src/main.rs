use proconio::input;

fn main() {
    input! {
        n: usize,
        m: usize,
        a: [usize; n],
    }
    let mut total = 0;
    for i in 0..n {
        total += a[i];
    }
    if total > m {
        println!("No");
        return;
    }
    println!("Yes");
}
