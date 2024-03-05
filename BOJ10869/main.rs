fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.split_whitespace();
    let a = buf.next().unwrap().parse::<i32>().unwrap();
    let b = buf.next().unwrap().parse::<i32>().unwrap();
    println!("{}", a + b);
    println!("{}", a - b);
    println!("{}", a * b);
    println!("{}", a / b);
    println!("{}", a % b);
}
