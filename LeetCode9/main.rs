impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        let str = x.to_string();
        let rev: String = str.chars().rev().collect();
        str == rev
    }
}
