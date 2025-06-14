use proconio::input;

fn main() {
    input! {
        x: i64,
        y: i64,
    }

    let mut count: i64 = 0;

    for i in 1..=6 {
        for j in 1..=6 {
            if i + j >= x {
                count += 1;
                continue;
            }
            if (i - j).abs() >= y {
                count += 1;
                continue;
            }
        }
    }

    println!("{}", (count as f64 / 36.0));
}
