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

    // debug
    let tuple = (10i32, 20i32, 30i32);
    println!("{} {} {}", tuple.0, tuple.1, tuple.2);
    println!("{:?}", tuple);
    println!("{:#?}", tuple);

    // reference
    let hoge: i8 = 100;
    let reference = &hoge;
    println!("{} {:p}", reference, reference);
    assert_eq!(*reference, 100_i8);

    let tuple: (i32, f64) = (10, 3.14);
    let reference = &tuple;
    assert_eq!(reference.0, 10_i32);
    assert_eq!(reference.1, 3.14_f64);

    let hoge = 10;
    let reference = &hoge;
    let &copied = reference;
    assert_eq!(copied, 10);
    println!("hoge: {}, {:p}", &hoge, &hoge);
    println!("copied: {} {:p}", &copied, &copied);

    // lifetime
    let reference;
    {
        let hoge = 100;
        reference = &hoge;
        println!("{}", reference);
    };
    // `hoge` does not live long enough
    //println!("{}", reference);

    let reference = &100;
    println!("{:p}", reference);
    assert_eq!(*reference, 100);

    // for
    let primes = [2, 3, 5, 7];
    for p in &primes {
        println!("a:{}", p);
    }
    for p in primes {
        println!("b:{}", p);
    }

    // pattern match
    let elements: [(i32, f64); 5] = [(6, 12.0), (7, 14.0), (8, 16.0), (15, 31.0), (16, 32.1)];
    for &(number, weight) in &elements {
        println!("{}: {:.1}", number, weight);
    }
    for (number, weight) in &elements {
        println!("{}: {:.1}", number, weight);
    }
    for (number, weight) in elements {
        println!("{}: {:.1}", number, weight);
    }

    let hoge = 10;
    let ref reference = hoge;
    assert_eq!(*reference, 10);

    let carbon = (6, 12.0);
    let (ref number, ref weight) = carbon;
    assert_eq!(*number, 6);
    assert_eq!(*weight, 12.0);

    for &(ref number, ref weight) in &elements {
        println!("{}: {:.1}", number, weight);
    }

    // mutable
    let mut hoge: i32;
    hoge = 30;
    assert_eq!(hoge, 30);
    println!("{:p}", &hoge);
    hoge = 20;
    assert_eq!(hoge, 20);
    println!("{:p}", &hoge);

    let (mut hoge, fuga) = (10, 20);
    println!("{}", hoge);
    hoge = 100;
    println!("{}", hoge);
    hoge = 200;
    // cannot assign twice to immutable variable `fuga`
    // fuga = 200;
    println!("{}", hoge);
    println!("{}", fuga);

    // uninitialized
    input! {
        input: i32,
    }
    //use of possibly-uninitialized `nomalized`
    //let mut nomalized;
    //if input >= 0 {
    //    nomalized = 1;
    //}
    let normalized = if input >= 0 { 1 } else { -1 };
    println!("{}", normalized);

    let array = [30, 20, 30];
    let mut sum = 0;
    for num in array {
        sum += num
    }
    assert_eq!(sum, 80);
    assert_eq!(sum, array.iter().sum());

    let mut hoge = 10;
    let reference = &hoge;
    println!("{}", reference);
    // cannot assign to `hoge` because it is borrowed
    //hoge = 20;
    println!("{}", reference);

    let mut hoge = 10;
    let reference1 = &hoge;
    let reference2 = &hoge;
    assert_eq!(*reference1, 10);
    assert_eq!(*reference2, 10);
    hoge = 20;

    // mutable reference
    let hoge = 10;
    let fuga = 20;
    let mut reference = &hoge;
    reference = &fuga;
    reference = &hoge;
    reference = &10;

    let mut hoge = 10;
    let reference = &mut hoge;
    assert_eq!(*reference, 10);
    *reference = 20;
    assert_eq!(*reference, 20);

    // cannot borrow `hoge` as mutable, as it is not declared as mutable
    //let hoge = 10;
    //let reference = &mut hoge;

    let mut hoge = 10;
    let reference = &mut hoge;
    // cannot use `hoge` because it was mutably borrowed
    //let fuga = hoge + 20;
    *reference += 30;

    // type force
    let mut hoge: i32 = 10;
    let immutable_reference = &hoge;
    // mismatched types
    // types differ in mutability
    //let mutable_reference: &mut i32 = immutable_reference;

    let mutable_reference = &mut hoge;
    let immutable_reference: &i32 = mutable_reference;
    assert_eq!(*immutable_reference, 10);

    let mut hoge = 10;
    let &mut copied = &mut hoge;
    // mismatched types
    // types differ in mutability
    // let &mut copied = &hoge;
    //let &copied = &mut hoge;

    let mut hoge = 10;
    let ref reference = hoge;
    assert_eq!(*reference, 10);

    let mut hoge = 10;
    let ref mut reference = hoge;
    // the order of `mut` and `ref` is incorrect
    //let mut ref reference = hoge;
    *reference = 20;
    assert_eq!(*reference, 20);

    let mut array = [10, 20, 30];
    for i in &mut array {
        *i += 1;
    }
    println!("{:?}", array);

    // vector
    let vector: Vec<i32>;
    vec![1, 2, 3];
    vec![1; 10];
    Vec::<i32>::new();

    let vector: Vec<i32> = vec![1, 2, 3];
    assert_eq!(vector.len(), 3_usize);
    assert_eq!(vector[0], 1_i32);
    assert_eq!(vector[1], 2_i32);
    assert_eq!(vector[2], 3_i32);
    // index out of bounds: the len is 3 but the index is 3
    //assert_eq!(vector[3], 4_i32);
    let mut vector: Vec<i32> = vec![1, 2, 3];
    vector[1] = 10;
    println!("{:?}", vector);

    let vector = vec![1, 2, 3];
    assert_eq!(vector[2], 3_i64);

    let mut vector = Vec::new();
    assert_eq!(vector.len(), 0);

    vector.push(10);
    vector.push(20);
    vector.push(30);
    println!("{:?}", vector);

    vector.push(40_i64);
    vector.push(50_i64);
    println!("{:?}", vector);

    vector.pop();
    vector.pop();
    vector.pop();

    println!("{:?}", vector);

    input! {
        n: usize,
        vector: [i32; n],
    }
    println!("{} {:?}", n, vector);

    let mut sum = 0;
    for num in &vector {
        sum += num;
    }
    println!("sum: {}", sum);
}
