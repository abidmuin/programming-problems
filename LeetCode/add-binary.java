
// @leet imports start
import java.util.*;
import java.math.*;
// @leet imports end

// @leet start
class Solution {
  public String addBinary(String a, String b) {
    int pointerA = a.length() - 1;
    int pointerB = b.length() - 1;
    int carry = 0;
    int result;

    StringBuilder stringBuilder = new StringBuilder();

    while (pointerA >= 0 || pointerB >= 0) {
      result = carry;

      if (pointerA >= 0) {
        result += a.charAt(pointerA) - '0';
      }

      if (pointerB >= 0) {
        result += (b.charAt(pointerB) - '0');
      }

      stringBuilder.append(result % 2);
      carry = result / 2;

      pointerA--;
      pointerB--;
    }

    if (carry != 0) {
      stringBuilder.append(carry);
    }

    return stringBuilder.reverse().toString();
  }
}
// @leet end
