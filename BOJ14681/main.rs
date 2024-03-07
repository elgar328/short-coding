fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    std::io::stdin().read_line(&mut buf).unwrap();
    let num: Vec<i32> = buf.split_whitespace().flat_map(str::parse).collect();
    println!(
        "{}",
        match (num[0], num[1]) {
            (x, y) if x > 0 && y > 0 => 1,
            (x, y) if x < 0 && y > 0 => 2,
            (x, y) if x < 0 && y < 0 => 3,
            (x, y) if x > 0 && y < 0 => 4,
            (_, _) => 0,
        }
    )
}
