# Inherited Code

You inherited a piece of code that performs username validation for your company's website. The existing function works reasonably well, but it throws an exception when the username is too short. Upon review, you realize that nobody ever defined the exception.

The inherited code is provided for you in the locked section of your editor. Complete the code so that, when an exception is thrown, it prints <span style="color:red;">Too short: N</span>  (where ***N*** is the length of the given username).

**Input Format**

The first line contains an integer, ***T*** , the number of test cases. 
Each of the ***T*** subsequent lines describes a test case as a single username string, ***U***.

**Constraints**

- **1 <= *T* <= 1000**
- **1 <= |U| <= 100**
- The username consists only of uppercase and lowercase letters.

**Output Format**

Print either <span style="color:red;">Valid</span> (if the username is valid), <span style="color:red;">Invalid</span> (if the username is invalid), or <span style="color:red;">Too short: N</span> (where ***N*** is the length of the too-short username) on a new line for each test case.

**Sample Input**

```
3
Peter
Me
Arxwwz
```
**Sample Output**

```
Valid
Too short: 
Invalid
```
**Explanation**

Username <span style="color:red;">Me</span> is too short because it only contains **2** characters, so your exception prints **Too short: 2** . 
