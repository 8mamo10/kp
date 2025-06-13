use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32,
    }

    let result: f32 = a as f32 / b as f32;
    let round = (result + 0.5).floor() as i32;

    println!("{}", round);
}
