fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let num: Vec<i32> = buf.split_whitespace().map(|s| s.parse().unwrap()).collect();
    println!(
        "{}",
        if num[0] > num[1] {
            ">"
        } else if num[0] < num[1] {
            "<"
        } else {
            "=="
        }
    );
}
