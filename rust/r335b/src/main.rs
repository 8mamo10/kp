fn main() {
    proconio::input! {
        n: i32,
    }
    for i in 0..=n {
        for j in 0..=n {
            for k in 0..=n {
                if i + j + k <= n {
                    println!("{} {} {}", i, j, k);
                }
            }
        }
    }
}
