fn main() {
    println!(
        "{}",
        std::io::stdin()
            .lines()
            .skip(1)
            .filter(|s| is_group_world(s.as_ref().unwrap()))
            .count()
    );
}

fn is_group_world(w: &str) -> bool {
    let mut w: Vec<char> = w.chars().collect();
    w.dedup();
    w.sort();
    (1..w.len()).all(|i| w[i - 1] != w[i])
}
