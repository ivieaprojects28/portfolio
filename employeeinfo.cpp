#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


class User {
private:
    string location;
    vector <string> skills = {};
    vector <int> level = {};
public:
    string username;
    string email; 
    User(string username = "", string email = "", string location = "unset", vector <string> skills = {}, vector <int> level = {}){
        this-> username = username;
        this->email = email;
        this->location = location;
        this->level = level;
        this->skills = skills;
    }

    string getLocation(){
        return location;
    }

    void setLocation(string new_location){
        location = new_location;
    }

    void info() {
        cout << "Username: " << username<< endl 
        << "Email: "<< email << endl 
        << "Location: "<< location<<endl;
    }

    void learn (string skill_name){
        for (int i = 0; i<skills.size(); i++) {
            if (skill_name == skills[i]){
                level[i] ++;
                return;
            }
        }
        skills.push_back(skill_name);
        level.push_back(1);
    }

    void showSkills(){
        vector<pair<string, int>> skillPairs;

        // Bundle skills and levels together
        for (int i = 0; i < skills.size(); i++) {
            skillPairs.push_back(make_pair(skills[i], level[i]));
        }

        // Sort the vector of pairs by skill name (automatically sorted by first element of pair)
        sort(skillPairs.begin(), skillPairs.end());

        // Print sorted skills
        for (auto &pair : skillPairs) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }

    void clearSkill (string skill_name) {
        for (int i = 0; i<skills.size(); i++){
            if (skill_name == skills[i]){
               skills.erase(skills.begin() + i);
               level.erase(level.begin() + i);
            }
        }
    }

    int calculateSalary(){
        int sum = 0;
        for (int i = 0; i<skills.size(); i++) {
            sum += level[i];
        }

        return sum*100;
    }

};
