impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut s = s;
        while s.contains("()") || s.contains("{}") || s.contains("[]") {
            s = s.replace("()", "").replace("{}", "").replace("[]", "");
        }
        s.len() == 0
    }
}
