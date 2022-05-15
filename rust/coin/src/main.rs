use proconio::input;

fn main() {
    println!("Enter [height] [width]");
    input! {
         h: usize,
         w: usize,
    }

    // h = 3, w = 4
    let coin = [[3, 1, 2, 2], [2, 3, 0, 1], [2, 1, 1, 2]];
    let obstacle = [
        [false, false, false, false],
        [false, false, true, false],
        [false, false, false, false],
    ];

    let mut table = vec![vec![None; w]; h];
    table[0][0] = Some(coin[0][0]);

    for i in 0..h {
        for j in 0..w {
            if obstacle[i][j] {
                continue;
            }
            let above = if i > 0 { table[i - 1][j] } else { None };
            let left = if j > 0 { table[i][j - 1] } else { None };
            if let Some(c) = above.max(left) {
                table[i][j] = Some(c + coin[i][j]);
            }
        }
    }
    match table[h - 1][w - 1] {
        Some(ans) => println!("{}", ans),
        None => println!("Impossible"),
    }
}
