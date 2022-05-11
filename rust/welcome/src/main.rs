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

    // println!("---input!");
    // input! {
    //     // a: i32,
    //     // b: i32,
    //     // c: f64,
    //     // d: f64,
    //     x: i32,
    // }
    // // println!("{}", a + b);
    // // println!("{}", c * d);

    // // if
    // if x < 10 {
    //     println!("less than 10");
    // } else {
    //     println!("more than or equal 10");
    // }

    // // shadowing
    // let hoge = 10;
    // println!("{}", hoge);
    // let hoge = 20;
    // println!("{}", hoge);

    // // block
    // println!("before block: {}", hoge);
    // let hoge = {
    //     println!("in block: {}", hoge);
    //     30
    // };
    // println!("after block: {}", hoge);
    // let abs;
    // abs = if x >= 0 { x } else { -x };
    // println!("abs: {}", abs);

    // //let r = x % 10;
    // let r = x.rem_euclid(10);
    // assert!(0 <= r && r < 10, "remainder must be greater or equal 0");
    // println!("remainder: {}", r);

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
    // println!("---uninitialized");
    // input! {
    //     input: i32,
    // }
    // //use of possibly-uninitialized `nomalized`
    // //let mut nomalized;
    // //if input >= 0 {
    // //    nomalized = 1;
    // //}
    // let normalized = if input >= 0 { 1 } else { -1 };
    // println!("{}", normalized);

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
    // println!("---vector");
    // input! {
    //     n: usize,
    //     vector: [i32; n],
    // }
    // println!("{} {:?}", n, vector);

    // let mut sum = 0;
    // for num in &vector {
    //     sum += num;
    // }
    // println!("sum: {}", sum);

    // break
    let array = [2, 3, 0, 4, 5];
    for &i in &array {
        if i == 0 {
            break;
        }
        println!("{}", i);
    }
    println!();

    // continue
    for &i in &array {
        if i == 0 {
            continue;
        }
        println!("{}", i);
    }
    println!();

    // ..
    for i in 0..5 {
        println!("{}", i);
    }

    // ..=
    for i in 0..=5 {
        println!("{}", i);
    }

    // loop
    // println!("loop");
    // loop {
    //     input! {
    //         x: i32,
    //     }
    //     if x > 0 {
    //         println!("{}", x * 2);
    //     } else {
    //         break;
    //     }
    // }
    // println!("loop with return value");
    // let value = loop {
    //     input! {
    //         x: i32,
    //     }
    //     if x > 0 {
    //         println!("{}", x * 2);
    //     } else {
    //         break x;
    //     }
    // };
    // println!("value: {}", value);

    // while
    let mut x = 15;
    let mut v = Vec::new();
    while x > 0 {
        v.push(x);
        x /= 2;
    }
    assert_eq!(x, 0);
    println!("{:?}", v);

    // nested loop
    for i in 0..4 {
        for j in 0..i {
            print!("({}, {})", i, j);
        }
        println!();
    }
    'outer: for i in 0..4 {
        for j in 0..i {
            if i * j >= 2 {
                println!();
                break 'outer;
            }
            print!("({}, {})", i, j);
        }
        println!();
    }

    // label with return value
    // println!("---factor");
    // let factor = 'input: loop {
    //     input! {
    //         x: i32,
    //     }
    //     for i in 2.. {
    //         if i * i > x {
    //             break;
    //         } else if x % i == 0 {
    //             break 'input i;
    //         }
    //     }
    // };
    // println!("{}", factor);

    // slice
    // the size for values of type `[i32]` cannot be known at compilation time
    // doesn't have a size known at compile-time
    //let slice: [i32];
    let ref_slice: &[i32];
    let mut ref_slice: &[i32];
    let array = [1, 2, 3];
    ref_slice = &array;
    println!("{:?}", ref_slice);

    let vector = vec![4, 5, 6];
    ref_slice = &vector;
    println!("{:?}", ref_slice);

    // ..
    let array = [0, 10, 20, 30, 40, 50];
    let ref_slice = &array[1..4];
    assert_eq!(ref_slice[0], 10);
    assert_eq!(ref_slice[1], 20);
    assert_eq!(ref_slice[2], 30);

    let empty = &array[2..2];
    println!("{:?}", empty);

    // for
    for i in &array[..] {
        println!("{}", *i);
    }

    // swap
    let mut array = [0, 10, 20, 30, 40];
    let ref_mut_slice = &mut array[..];
    ref_mut_slice.swap(1, 3);
    println!("{:?}", ref_mut_slice);
    println!("{:?}", array);

    // reverse
    let mut array = [7, 2, -3, 9, -2, 5];
    array.reverse();
    println!("{:?}", array);
    array[1..4].reverse();
    println!("{:?}", array);

    // sort
    array.sort();
    println!("{:?}", array);

    // if let
    let ref_slice: &[i32] = &[10, 20, 30];
    if let [x, y, z] = *ref_slice {
        println!("matched: {} {} {}", x, y, z);
    } else {
        println!("not matched");
    }
    let ref_slice: &[i32] = &[10, 20];
    if let [x, y, z] = *ref_slice {
        println!("matched: {} {} {}", x, y, z);
    } else {
        println!("not matched");
    }

    // multiple pattern
    let array = [(1, 92), (3, 91), (95, 1), (94, 2)];
    let mut vector = Vec::new();
    for tuple in &array {
        if let (1, value) | (value, 2) = *tuple {
            vector.push(value);
        }
    }
    println!("{:?}", vector);

    // range pattern
    let tuple = (1, 2);
    if let (0..=5, x) = tuple {
        println!("matched: {}", x);
    } else {
        println!("not matched");
    }

    let tuple = (3, 1, 2);
    if let (1, _, _) | (_, 1, _) | (_, _, 1) = tuple {
        println!("matched");
    } else {
        println!("not matched");
    }

    // while let
    let array = [0, 0, 0, 1, 2];
    let mut ref_slice = &array[..];
    while let [0, ..] = *ref_slice {
        ref_slice = &ref_slice[1..];
    }
    println!("{:?}", ref_slice);

    // match
    // println!("---match");
    // input! {
    //     vector: [(i32, i32); 5],
    // }
    // for &tuple in &vector {
    //     match tuple {
    //         (1, value) => println!("{}", value),
    //         (2, value) => println!("{}", value * value),
    //         (0, 0) => break,
    //         _ => println!("?"),
    //     }
    // }

    // println!("---match without comma");
    // loop {
    //     input! {
    //         x: i32,
    //     }
    //     match x {
    //         0 => {
    //             break;
    //         }
    //         n => {
    //             for _ in 0..n {
    //                 print!("!");
    //             }
    //             println!();
    //         }
    //     }
    // }

    // println!("---match returns value");
    // input! {
    //     x: i32,
    // }
    // let y = match x {
    //     0 => 1,
    //     1 => 0,
    //     _ => {
    //         println!("neither 0 nor 1");
    //         0
    //     }
    // };
    // println!("{}", y);

    // unreachable
    // println!("---unreachable");
    // input! {
    //     x: i32,
    // }
    // match x % 3 {
    //     0 => println!("0"),
    //     1 | -1 => println!("1"),
    //     2 | -2 => println!("2"),
    //     _ => unreachable!(),
    // };

    let tuple = (1, 3);
    match tuple {
        (1, x) if x % 2 == 0 => println!("{}", x),
        _ => {}
    }

    // string
    let string = "Hello, world!";
    let s: String;
    let s = String::new();
    let slice: &str = &s;
    let slice = "Hello";
    let string = "Hello".to_string();
    let string = String::from("Hello");

    println!("{}-{}-{}", string, s, slice);

    // chars
    let s = "Hello";
    for c in s.chars() {
        println!("{}", c);
    }
    let s: &str = "山山山";
    let san: char = '山';
    for c in s.chars() {
        assert_eq!(c, san);
    }

    // bytes
    let s = "山山山";
    for c in s.bytes() {
        println!("{:x}", c);
    }
    // to_string
    let x: i32 = 10;
    assert_eq!(x.to_string(), "10");
    assert_eq!(x.to_string(), "10".to_string());

    // format!
    let s = format!("{} {}", 10, 2.5);
    println!("{}", s);

    // proconio::marker::Chars
    // input! {
    //     s: proconio::marker::Chars,
    // }
    // for c in &s {
    //     println!("{}", c);
    // }

    // proconio::marker::Bytes
    // input! {
    //     s: proconio::marker::Bytes,
    // }
    // for c in &s {
    //     println!("{}", c);
    // }

    // copy
    let hoge: i32 = 10;
    let copied = hoge;

    let vector: Vec<i32> = vec![1, 2, 3];
    let moved = vector;
    // borrow of moved value: `vector`
    //println!("{:?}", vector);
    println!("{:?}", moved);

    let vector: Vec<i32> = vec![1, 2, 3];
    let reference = &vector;
    println!("{:?}", vector);
    println!("{:?}", reference);

    // cannot move
    let vector: Vec<Vec<i32>> = vec![vec![2, 3, 4], vec![1], vec![0; 5]];
    println!("{:?}", vector);
    for i in &vector[0] {
        println!("{}", i);
    }
    for i in &vector {
        for j in i {
            print!("{} ", j);
        }
        println!();
    }
    // cannot move out of index of `std::vec::Vec<std::vec::Vec<i32>>`
    //let moved = vector[0];

    let vector = vec![1, 2, 3];
    let reference = &vector;
    // cannot move out of `vector` because it is borrowed
    //let moved = vector;
    println!("{:?}", reference);

    // move with wildcard pattern
    let hello = "hello".to_string();
    let _ = hello;
    println!("{}", hello);

    // move with match
    let tuple = (0, String::from("hello"));
    match tuple {
        (0, _) => {
            println!("zero");
        }
        (_, s) => {
            println!("{}", s);
        }
    }
    // borrow of moved value: `tuple.1`
    //println!("{}", tuple.1);

    let tuple = (0, String::from("hello"));
    match tuple {
        (0, _) => {
            println!("zero");
        }
        (_, ref s) => {
            println!("{}", s);
        }
    }
    println!("{}", tuple.1);

    let vector = vec![
        (vec![5, 2], 3.5),
        (vec![1, 4, 3, 3], 2.75),
        (vec![4, 6], 5.),
    ];
    // cannot move out of a shared referencerustc(E0507)
    //for &(v, mean) in &vector {
    for (v, mean) in &vector {
        println!("{:?}: {}", v, mean);
    }

    println!("{:?}", digits());

    // call by reference
    let vector = vec![20, 80, 60, 40];
    let s = sum_vector(vector);
    println!("{}", s);
    // borrow of moved value: `vector`
    //println!("{:?}", vector);

    let vector = vec![20, 80, 60, 40];
    let s = sum_vector_ref(&vector);
    println!("{}", s);
    println!("{:?}", vector);

    // variable reference
    let mut hoge = 10;
    double(&mut hoge);
    println!("{}", hoge);
    double(&mut hoge);
    println!("{}", hoge);

    // multiple reference arguments
    fnc1(&hoge, &hoge);
    // cannot borrow `hoge` as mutable because it is also borrowed as immutable
    //fnc1(&hoge, &mut hoge);

    // swap reference
    // proconio::input! {
    //     i: usize,
    //     j: usize,
    // }
    // let mut array = [1, 2, 3, 4, 5];
    // // cannot borrow `array[_]` as mutable more than once at a time
    // //std::mem::swap(&mut array[i], &mut array[j]);
    // array.swap(i, j);
    // println!("{:?}", array);

    // dbg!
    let mut x = 0;
    for i in 18..=20 {
        x += i;
        dbg!(x);
    }
    println!("{}", x);

    // operator
    // input! {
    //     x: i32,
    // }
    // if PartialEq::eq(&x, &5) {
    //     println!("x equals 5.");
    // } else {
    //     println!("x does not equal 5.");
    // }

    // & &&
    let result = funcFalse() & funcTrue();
    println!("result: {}", result);
    let result = funcFalse() && funcTrue();
    println!("result: {}", result);
    let result = funcTrue() | funcFalse();
    println!("result: {}", result);
    let result = funcTrue() || funcFalse();
    println!("result: {}", result);

    // recursive function
    println!("{} {} {}", fact(0), fact(3), fact(10));
    println!("{}", sum_slice(&[5, -1, 3, 4, 2]));
    println!("{}", sum_slice2(&[5, -1, 3, 4, 2]));
    let mut array = [5, -1, 3, 4, 2];
    quick_sort(&mut array);
    println!("{:?}", array);

    // unsigned int
    println!("{:08b}", 25_u8);
    // signed int
    println!("{:08b}", -25_i8);
    println!("{:08b}", 231_u8);

    println!("{:08b}", -20_i8);
    println!("{:08b}", -70_i8);
    println!("{:08b}", -88_i8);
    println!("{:08b}", -2_i8);
    println!("{:08b}", 86_i8);
    assert_eq!(-20_i8 & -70_i8, -88_i8);
    assert_eq!(-20_i8 | -70_i8, -2_i8);
    assert_eq!(-20_i8 ^ -70_i8, 86_i8);

    // generics
    assert_eq!(second_f64_i32((5_f64, 3)), 3);
    assert_eq!(second_f32_i32((5_f32, 3)), 3);
    assert_eq!(second_bool_i32((true, 3)), 3);
    assert_eq!(second_any_i32((5_f64, 3)), 3);
    assert_eq!(second_any_i32((5_f32, 3)), 3);
    assert_eq!(second_any_i32((true, 3)), 3);

    // trait / impl
    print(10);
    print("Hello");
    //`(i32, i32)` doesn't implement `std::fmt::Display`
    //`(i32, i32)` cannot be formatted with the default formatter
    //help: the trait `std::fmt::Display` is not implemented for `(i32, i32)`
    //note: in format strings you may be able to use `{:?}` (or {:#?} for pretty-print) insteadrustc(E0277)
    //print((10_i32, 20_i32));
    print2("Hello");
    print3("Hello");
    print4("Hello");
    print_display_and_debug("Hello");

    // function returns ref
    //let vec = vec![2, 4, 7, 8, 6, 3, 5, 7, 9, 20];
    //let vec = vec![1, 2, 3, 4, 5];
    let vec = vec![10];
    let slice = &vec[..];
    let mut inc = slice;
    for i in 0..slice.len() - 1 {
        if slice[i] >= slice[i + 1] {
            inc = &slice[..=i];
            break;
        }
    }
    println!("{:?}", inc);

    let vec = vec![2, 4, 7, 8, 6, 3, 5];
    let result = increasing(&vec);
    println!("{:?}", result);

    // `vec` does not live long enough
    // let result;
    // {
    //     let vec = vec![2, 4, 7, 8, 6, 3, 5];
    //     result = increasing(&vec);
    // }
    // println!("{:?}", result);

    let mut vec1 = vec![10, 20, 30, 40];
    let vec2 = vec![5, 6, 7];
    add(&mut vec1[..], &vec2);
    println!("vec1: {:?}", vec1);
    println!("vec2: {:?}", vec2);

    let four = vec![1, 2, 3, 4];
    let result;
    {
        let three = vec![1, 2, 3];
        result = longer(&four, &three);
        println!("{:?}", result);
    }

    // omit lifetime
    let (former, latter) = split_mid(&[3, 1, 4, 1, 5, 2, 7]);
    println!("{:?}", former);
    println!("{:?}", latter);

    // static lifetime
    println!("{}", ordinal_suffix(1));
    println!("{}", ordinal_suffix(22));
    println!("{}", ordinal_suffix(333));
    println!("{}", ordinal_suffix(444));

    // struct
    let point: Point;
    //mismatched types
    //expected struct `Point`, found tuple
    //point = (2_i32, 3_i32);
    point = Point(2_i32, 3_i32);
    println!("{}", point.0);
    println!("{}", point.1);

    let david = Physical {
        height: 170,
        weight: 50,
    };
    let Physical {
        height: h,
        weight: w,
    } = david;
    println!("{} {}", h, w);
}

fn digits() -> Vec<i32> {
    let mut v = Vec::new();
    for i in 0..10 {
        v.push(i);
    }
    v
}

fn sum_vector(v: Vec<i32>) -> i32 {
    let mut ret = 0;
    for &i in &v {
        ret += i;
    }
    ret
}
fn sum_vector_ref(v: &Vec<i32>) -> i32 {
    let mut ret = 0;
    for &i in v {
        ret += i;
    }
    ret
}

fn double(x: &mut i32) {
    *x *= 2
}

fn fnc1(x: &i32, y: &i32) {}
fn fnc2(x: &i32, y: &mut i32) {}
fn funcTrue() -> bool {
    println!("funcTrue");
    true
}
fn funcFalse() -> bool {
    println!("funcFalse");
    false
}

fn fact(n: i32) -> i32 {
    if n == 0 {
        1
    } else {
        fact(n - 1) * n
    }
}

fn sum_slice(slice: &[i32]) -> i32 {
    if slice.is_empty() {
        return 0;
    } else {
        sum_slice(&slice[1..]) + slice[0]
    }
}

fn sum_slice2(slice: &[i32]) -> i32 {
    if slice.is_empty() {
        return 0;
    }
    let mut total = 0;
    dbg!(slice);
    dbg!(slice.len());
    for v in slice {
        total += v
    }
    total
}

fn quick_sort(slice: &mut [i32]) {
    let len = slice.len();
    if len > 1 {
        let pivot = slice[0];
        let mut left = 1;
        let mut right = len - 1;
        loop {
            while left < len && slice[left] <= pivot {
                left += 1;
            }
            while right > 0 && slice[right] > pivot {
                right -= 1;
            }
            if left == right + 1 {
                slice.swap(0, right);
                break;
            } else if left < right {
                slice.swap(left, right);
                left += 1;
                right -= 1;
            } else {
                panic!();
            }
        }
        quick_sort(&mut slice[..right]);
        quick_sort(&mut slice[left..]);
    }
}

fn second_f64_i32(tuple: (f64, i32)) -> i32 {
    tuple.1
}

fn second_f32_i32(tuple: (f32, i32)) -> i32 {
    tuple.1
}

fn second_bool_i32(tuple: (bool, i32)) -> i32 {
    tuple.1
}

fn second_any_i32<T>(tuple: (T, i32)) -> i32 {
    tuple.1
}

fn second<T, U>(tuple: (T, U)) -> U {
    let first: T = tuple.0;
    let second: U = tuple.1;
    second
}

fn print_i32(x: i32) {
    println!("{}", x);
}

// `T` doesn't implement `std::fmt::Display`
// `T` cannot be formatted with the default formatter
// fn print<T>(x: T) {
//     println!("{}", x);
//}

fn print<T: std::fmt::Display>(x: T) {
    println!("{}", x);
}

fn print2(x: impl std::fmt::Display) {
    println!("{}", x);
}

fn print3<T>(x: T)
where
    T: std::fmt::Display,
{
    println!("{}", x);
}

fn print4<T>(x: T) -> T
where
    T: std::fmt::Display,
{
    println!("{}", x);
    x
}

fn print_display_and_debug<T: std::fmt::Display + std::fmt::Debug>(x: T) {
    println!("{}", x);
    println!("{:?}", x);
}

fn increasing<'a>(slice: &'a [i32]) -> &'a [i32] {
    let mut ret: &'a [i32] = slice;
    for i in 0..slice.len() - 1 {
        if slice[i] >= slice[i + 1] {
            ret = &slice[..=i];
            break;
        }
    }
    ret
}

//`x` has an anonymous lifetime `'_` but it needs to satisfy a `'static` lifetime requirementrustc(E0759)
// fn add(x: &mut [i32], y: &[i32]) -> &[i32] {
//     let len = x.len().min(y.len());
//     for i in 0..len {
//         x[i] += y[i];
//     }
//     &x[0..len]
// }

fn add<'a>(x: &'a mut [i32], y: &[i32]) -> &'a [i32] {
    let len = x.len().min(y.len());
    for i in 0..len {
        x[i] += y[i];
    }
    &x[0..len]
}

fn longer<'a>(x: &'a [i32], y: &'a [i32]) -> &'a [i32] {
    if x.len() > y.len() {
        x
    } else {
        y
    }
}

fn split_mid(slice: &[i32]) -> (&[i32], &[i32]) {
    let mid = slice.len() / 2;
    (&slice[..mid], &slice[mid..])
}

fn ordinal_suffix(number: u32) -> &'static str {
    match (number % 10, number % 100) {
        (_, 11..=13) => "th",
        (1, _) => "st",
        (2, _) => "nd",
        (3, _) => "rd",
        _ => "th",
    }
}

struct Point(i32, i32);
struct Physical {
    height: i32,
    weight: i32,
}
