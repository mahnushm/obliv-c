#include <linux/init.h>
#include <linux/module.h>

void deputy_fail(const char *what, const char *check,
                 const char *file, int line) {
    printk(KERN_ALERT
           "Assertion \"%s\" failed in %s check at %s:%d.\n", 
           what, check, file, line);
}

int deputy_strlen(const char *str) {
    return strlen(str);
}

char *deputy_strcpy(char *dest, const char *src) {
    char *tmp = dest;
    while ((*dest++ = *src++) != '\0') {
        // do nothing
    }
    return tmp;
}

char *deputy_strncpy(char *dest, const char *src, size_t count) {
    char *tmp = dest;
    while (count >= 0) {
        if ((*tmp = *src) != 0) src++;
        tmp++;
        count--;
    }
    return dest;
}