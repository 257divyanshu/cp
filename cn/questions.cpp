// WEEKLY CONTEST 122

// 4. 🟥 SCORE SUM  
// needs matrix concepts

// 3. 🟩 STRING MAKER
// string generateString(int n, int m) {
//     string str = "";
//     char c = 'a';
//     for(int i = 0; i<(n-m+2); i++)
//     {
//         str.push_back(c);
//         c = (c=='a') ? 'b' : 'a';
//     };
//     for(int i = 1; i<=m-2; i++)
//     {
//         str.push_back('b'+i);
//     };
//     return str;
// }

// 2. 🟩 Two Cities
// int minimumTime(int x, int y, int z, int s) {
//     int root1 = abs(s-x) + abs(x-z);
//     int root2 = abs(s-x) + abs(x-y);
//     int root3 = abs(s-y) + abs(y-z);
//     int root4 = abs(s-y) + abs(y-x);
//     int root5 = abs(s-z) + abs(z-x);
//     int root6 = abs(s-z) + abs(z-y);
//     return min(root1,min(root2,min(root3,min(root4,min(root5,root6)))));
// }

// 1. 🟩 Team Score
// int teamScore (int a, int b, int c, int d) {
//    int res1 = a*b + c*d;
//    int res2 = a*c + b*d;
//    int res3 = a*d + b*c;
//    return max(max(res1,res2),res3);
// };