public class Solution {
    public string Convert(string s, int numRows) {
        if(s.Length == 0 || numRows ==1 ||s.Length <numRows)
            return s;
        char[] str = s.ToCharArray();
        int idx = 0;
        for(int row =0; row<numRows; row++){
            int nextIdx = row;
            str[idx++] = s[nextIdx];
            // Console.WriteLine($"Row {row}");
            // Console.WriteLine($"NextIdx {nextIdx}");
            // Console.Write($"{str[idx -1]}");
            // Calculate down
            if(row != numRows -1)
                nextIdx += (numRows - (row +1)) * 2;
            while(nextIdx < s.Length){
                // Console.WriteLine($"Next {nextIdx}");
                // Console.WriteLine($"Idx {idx}");
            if(row != numRows -1)
                str[idx++] = s[nextIdx];
            // Console.WriteLine($"NextIdx {nextIdx}");
                // Console.Write($"{str[idx -1]}");

                // Calculate Up
                if(row !=0){
                    nextIdx += row * 2;
                    // Console.WriteLine($"Upper {nextIdx}");

                    if(nextIdx < s.Length ){
                        str[idx++] = s[nextIdx];
                    // Console.Write($"{str[idx -1]}");
            // Console.WriteLine($"NextIdx {nextIdx}");

                    }
                    else 
                        break;
                }
            if(row != numRows -1)
                nextIdx += (numRows - (row +1)) * 2;
            }
        }

        string res = new string(str);

        return res;
    }
}