/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void factorial(int n){
    	int k = 1;
    	while(n > 0){
    		k *= n;
    		n--;
    	}
    	System.out.println(k);
    }
    public int fibonacci(int n){
        if(n <= 1){
            return n;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }
    public void firstrepeating(String s){
    	int len = s.length();
    	int chars[] = new int[26];

    	for (int i = 0; i < len; i++)
    	{
    		chars[s.charAt(i)-'a']++;
    	}
    	
    	for (int i = 0; i < len; i++)
    	{
    		if(chars[s.charAt(i)-'a'] > 1){
    		    System.out.println(s.charAt(i) + " " + i);
    		    break;
    		}
    	}

    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Codechef c = new Codechef();
		c.firstrepeating("sarrveeh");
	}
}
