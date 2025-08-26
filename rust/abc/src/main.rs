use proconio::input;

fn main() {
    input! {
        n: usize,
        m: i32,
        a: [i32; n],
    }
    let mut total = 0;
    for weight in a.iter() {
        total += weight;
    }

    if total <= m {
        println!("Yes");
        return;
    } else {
        println!("No");
    }
}
