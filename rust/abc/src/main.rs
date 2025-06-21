use proconio::input;

fn main() {
    input! {
        n: usize,
        s: i64,
        t: [i64; n],
    }

    let sleep_threshold: f64 = s as f64 + 0.5;
    let mut last_time: i64 = 0;
    for i in 0..n {
        let current_time = t[i];
        let elapsed_time = (current_time - last_time) as f64;
        if elapsed_time >= sleep_threshold {
            println!("No");
            return;
        }
        last_time = current_time;
    }
    println!("Yes");
}
