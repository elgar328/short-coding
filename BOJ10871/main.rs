fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let x: i32 = buf.split_whitespace().last().unwrap().parse().unwrap();
    buf.clear();
    std::io::stdin().read_line(&mut buf).unwrap();
    println!(
        "{}",
        buf.split_whitespace()
            .flat_map(str::parse::<i32>)
            .filter(|n| n < &x)
            .map(|n| n.to_string())
            .collect::<Vec<String>>()
            .join(" ")
    );
}
