#include <stdio.h>
#include <string.h>

int main(void) {
    char key1[9] = "ABCD";
    char key2[] = "1234";
    char password[9];

    printf("パスワードを入力してください。");
    fgets(password, sizeof(password), stdin);

    strcat(key1, key2);

    if(strcmp(password, key1) == 0){
        printf("\n%sは正しいライセンスキーです。\n", password);
    } else {
        printf("\n%sは正しいライセンスキーではありません。\n", password);
    }

    return 0;
}