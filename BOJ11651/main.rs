fn main() {
    let mut c: Vec<Vec<i32>> = std::io::stdin()
        .lines()
        .skip(1)
        .flatten()
        .map(|s| s.split_whitespace().flat_map(|n| n.parse()).collect())
        .collect();
    c.sort_unstable_by_key(|i| (i[1], i[0]));
    print!(
        "{}",
        c.iter()
            .map(|i| format!("{} {}\n", i[0], i[1]))
            .collect::<String>()
    );
}
