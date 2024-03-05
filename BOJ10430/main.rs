fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let num: Vec<i32> = buf.split_whitespace().flat_map(str::parse).collect();
    let (a, b, c) = (num[0], num[1], num[2]);
    println!(
        "{}\n{}\n{}\n{}",
        (a + b) % c,
        ((a % c) + (b % c)) % c,
        (a * b) % c,
        ((a % c) * (b % c)) % c
    );
}
