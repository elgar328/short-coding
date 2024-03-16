impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let mut num: i32 = 0;
        let mut s = s;
        num += s.matches("IV").count() as i32 * 4;
        s = s.replace("IV", " ");
        num += s.matches("IX").count() as i32 * 9;
        s = s.replace("IX", " ");
        num += s.matches("XL").count() as i32 * 40;
        s = s.replace("XL", " ");
        num += s.matches("XC").count() as i32 * 90;
        s = s.replace("XC", " ");
        num += s.matches("CD").count() as i32 * 400;
        s = s.replace("CD", " ");
        num += s.matches("CM").count() as i32 * 900;
        s = s.replace("CM", " ");

        num += s.matches("I").count() as i32 * 1;
        num += s.matches("V").count() as i32 * 5;
        num += s.matches("X").count() as i32 * 10;
        num += s.matches("L").count() as i32 * 50;
        num += s.matches("C").count() as i32 * 100;
        num += s.matches("D").count() as i32 * 500;
        num += s.matches("M").count() as i32 * 1000;
        num
    }
}
