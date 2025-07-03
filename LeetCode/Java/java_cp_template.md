### Code Epiphany
#### File Name Template
```text
$!velocity.camelCaseName(${challenge.name})
```
#### Code Template

```java
public class $!velocity.camelCaseName(${challenge.name}) {
    public static void main(String[] args) {
	    Solution sol = new Solution();
	    System.out.println("Will you prove worthy?");
    }
}

// https://leetcode.com/problems/${challenge.slug}/
${challenge.code}

```

### IntelliJ IDEA External Tools
Name: 
```text
java_packager
```
Program:
```text
/bin/bash
```
Arguments:
```shell
$FileDir$/java_packager.sh $FileNameWithoutExtension$ $FileDir$
Working Directory: $FileDir$
```

*Optional: Add a shortcut key for `java_packager` external tools*