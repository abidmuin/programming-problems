### Code Epiphany
#### File Name Template
```text
$!velocity.camelCaseName(${challenge.name})
```
#### Code Template

```java
import java.util.*;

public class $!velocity.camelCaseName(${challenge.name}) {
    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println("Will you prove worthy?");

    }
}

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