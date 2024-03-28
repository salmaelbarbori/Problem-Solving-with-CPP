class Solution {
public:
    string interpret(string command) {
        for(auto i = 0; i < command.length(); i++)
        {
            if((command[i] == '(' ) && (command[i+1] == ')' ))
            {
                command[i] = 'o';
                command.erase(i+1, 1);
            }
            else if (command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' &&         command[i+3] == ')')
            {
                command[i] = 'a';
                command[i+1] = 'l';
                command.erase(i+2, 2);
            }     
        }
        return command;
        
    }
};
