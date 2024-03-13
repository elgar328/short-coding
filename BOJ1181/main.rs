fn main() {
    let mut s = std::io::stdin()
        .lines()
        .skip(1)
        .map(|s| s.unwrap().trim().to_owned())
        .collect::<Vec<_>>();
    s.sort_unstable_by_key(|s| (s.len(), s.to_owned()));
    s.dedup();
    println!("{}", s.join("\n"));
}
