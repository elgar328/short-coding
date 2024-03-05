fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let result = buf
        .split_whitespace()
        .map(|s| s.parse::<f64>().unwrap())
        .reduce(|a, b| a / b)
        .unwrap();
    println!("{}", result);
}
