use proconio::input;

fn main() {
    input! {
        n: usize,
        a: [i64; n],
        k: i64,
    }
    let mut ans = 0;
    for i in 0..n {
        if a[i] >= k {
            ans += 1;
        }
    }
    println!("{}", ans);
}
