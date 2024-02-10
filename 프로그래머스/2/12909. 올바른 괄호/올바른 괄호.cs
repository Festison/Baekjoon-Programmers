using System;
using System.Collections.Generic;

public class Solution 
{
    public bool solution(string s) 
    {
        Stack<char> stack = new Stack<char>();

        foreach (char c in s) 
        {
            if (c == '(') 
                stack.Push(c);
            
            else if (c == ')') 
            {
                if (stack.Count == 0 || stack.Peek() != '(') 
                    return false;
                else 
                    stack.Pop();
            }
        }

        return stack.Count == 0;
    }
}