use proconio::input;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
        x: usize,
    }
    if a.contains(&x) {
        println!("Yes");
        return;
    }
    println!("No");
}
