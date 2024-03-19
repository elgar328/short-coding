fn main() {
    let num: Vec<Vec<u32>> = std::io::stdin()
        .lines()
        .skip(1)
        .flatten()
        .map(|s| s.split_whitespace().flat_map(|n| n.parse()).collect())
        .collect();
    num.iter()
        .map(|n| &num.iter().filter(|r| r[0] > n[0] && r[1] > n[1]).count() + 1)
        .for_each(|n| print!("{} ", n));
}
