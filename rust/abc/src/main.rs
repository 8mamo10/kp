fn main() {
    proconio::input! {
        n: i32,
        a: [i32; n]
    }
    let mut sum = 0;
    for i in 0..n {
        if i % 2 == 0 {
            sum += a[i as usize];
        }
    }
    println!("{}", sum);
}
