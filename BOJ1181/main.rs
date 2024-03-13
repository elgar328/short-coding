fn main() {
    let buf: String = std::io::read_to_string(std::io::stdin()).unwrap();
    let mut s: Vec<_> = buf.lines().skip(1).collect();
    s.sort_unstable_by_key(|&s| (s.len(), s));
    s.dedup();
    println!("{}", s.join("\n"));
}
