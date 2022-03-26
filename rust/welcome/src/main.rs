use proconio::input;

fn main() {
    let length: i32;
    length = 5;
    println!("length is {}", length);

    println!(r"\\\\\\\\\\");

    //let big_number: i64;
    //let big_number: i32;
    let big_number;
    //big_number = 2147483648;
    big_number = 2147483648_i64;
    println!("{}", big_number);

    let avogadro_constant;
    avogadro_constant = 6.02e+23;
    println!("{}", avogadro_constant);

    input! {
        // a: i32,
        // b: i32,
        // c: f64,
        // d: f64,
        x: i32,
    }
    // println!("{}", a + b);
    // println!("{}", c * d);

    if x < 10 {
        println!("less than 10");
    } else {
        println!("more than or equal 10");
    }

    let hoge = 10;
    println!("{}", hoge);
    let hoge = 20;
    println!("{}", hoge);
    println!("before block: {}", hoge);
    let hoge = {
        println!("in block: {}", hoge);
        30
    };
    println!("after block: {}", hoge);

    let abs;
    abs = if x >= 0 { x } else { -x };
    println!("abs: {}", abs);
}
