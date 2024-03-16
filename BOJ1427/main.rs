fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.trim().chars().collect::<Vec<_>>();
    buf.sort_unstable_by(|a, b| b.cmp(a));
    println!("{}", buf.into_iter().collect::<String>())
}
