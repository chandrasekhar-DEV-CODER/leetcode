class Solution {
public:
struct Transaction {
    string name;
    int time;
    int amount;
    string city;
    string original;
};
    vector<string> invalidTransactions(vector<string>& transactions) {
      int n = transactions.size();
        vector<Transaction> data;
        vector<bool> isInvalid(n, false);
        vector<string> result;
        for (const string& s : transactions) {
            stringstream ss(s);
            string name, timeStr, amountStr, city;
            
            getline(ss, name, ',');
            getline(ss, timeStr, ',');
            getline(ss, amountStr, ',');
            getline(ss, city, ',');
            
            data.push_back({name, stoi(timeStr), stoi(amountStr), city, s});
        }
        for (int i = 0; i < n; ++i) {
            if (data[i].amount > 1000) {
                isInvalid[i] = true;
            }
            for (int j = i + 1; j < n; ++j) {
                if (data[i].name == data[j].name && data[i].city != data[j].city) {
                    if (abs(data[i].time - data[j].time) <= 60) {
                        isInvalid[i] = true;
                        isInvalid[j] = true;
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            if (isInvalid[i]) {
                result.push_back(data[i].original);
            }
        }

        return result;
    }
};