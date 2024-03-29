fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let num: i32 = buf
        .split_whitespace()
        .map(|s| s.parse::<i32>().unwrap())
        .sum();
    println!("{}", num);
}
