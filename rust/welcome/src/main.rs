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

    // if
    if x < 10 {
        println!("less than 10");
    } else {
        println!("more than or equal 10");
    }

    // shadowing
    let hoge = 10;
    println!("{}", hoge);
    let hoge = 20;
    println!("{}", hoge);

    // block
    println!("before block: {}", hoge);
    let hoge = {
        println!("in block: {}", hoge);
        30
    };
    println!("after block: {}", hoge);
    let abs;
    abs = if x >= 0 { x } else { -x };
    println!("abs: {}", abs);

    //let r = x % 10;
    let r = x.rem_euclid(10);
    assert!(0 <= r && r < 10, "remainder must be greater or equal 0");
    println!("remainder: {}", r);

    // tuple
    let tuple: (i32, f64, i32) = (10, 2.5, 20);
    println!("1: {}", tuple.0);
    println!("2: {}", tuple.1);
    println!("3: {}", tuple.2);

    let tuple = (10, 2.5);
    let (x, y) = tuple;
    assert_eq!(x, 10);
    assert_eq!(y, 2.5);

    let (x, y): (i32, f64) = (123456, 6.67430e-11);
    assert_eq!(x, 123456);
    assert_eq!(y, 6.67430e-11);

    let unit: ();
    unit = {
        println!("return ()");
    };
    assert_eq!(unit, ());

    // array
    let array: [i64; 5];
    array = [1, 2, 3, 4, 5];
    assert_eq!(array[0], 1_i64);
    assert_eq!(array[4], 5_i64);
    let array2 = [1, 2, 3, 4, 5];
    assert_eq!(array, array2);

    // format
    println!("{0} {0} {1} {1}", -2, 10);
    println!("{hoge} {fuga} {hoge}", hoge = -2, fuga = 10);
    println!("{}", 79);
    println!("{:6}", 79);
}
