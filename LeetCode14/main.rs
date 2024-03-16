impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut n = 0;
        for i in 0..strs.iter().map(|s| s.len()).min().unwrap() {
            let ch = strs[0].chars().nth(i);
            if !strs.iter().map(|s| s.chars().nth(i)).all(|c| c == ch) {
                break;
            }
            n += 1;
        }
        (strs[0])[0..n].to_owned()
    }
}
