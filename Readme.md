# What?
This project is about writing the `logfind` tool. It is a specialized version of the `grep` tool to find the line numbers of its provided Search Terms.

# Example Usage
You type in your terminal `logfind <Search term 2> <Search term 2>`

the logfind tool, then goes through all the logfiles which can be found in the current directory. A log file has the ending of `.log`. `logfind` parses through these files and searches in there `<Search term 1>` **AND** `<Search term 2>`. 

when the flag `-o` is given then `logfind` parses through these files and searches in there `<Search term 1>` **OR** `<Search term 2>`. 

When the tool finds a match:
- it prints out the file name (but only once if it finds multiple occurances)
- it then prints out the line number in which the element that corresponds to one of the `<Search Terms>`.

So this could be: 
```
>>> logfind critical error


------- 01022024_ErrorLog.log --------
critical [line]: 10, 47, 278, 888
error    [line]: 12, 12, 47, 789

------- 14012024_ErrorLog.log --------
critical [line]: 2, 66
error    [line]: 3, 12, 47
```

As you can see - this can be a very useful tool (Even though the company that produced these error logs, should maybe make sure to resolve them quicker then in 2 weeks)