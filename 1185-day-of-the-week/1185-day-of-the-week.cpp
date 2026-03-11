class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (month < 3) {
            month += 12;
            year -= 1;
        }
        
        int C = year / 100;
        int K = year % 100;
        
        int h = (day + (13 * (month + 1)) / 5 + K + (K / 4) + (C / 4) - (2 * C)) % 7;
        
        int index = (h + 5) % 7; 
        
        return days[(index+1)%7];
    }
};
