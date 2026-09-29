#include <stdio.h>
int main() {
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if (n > 50) {
printf("Start the show");
} else {
printf("Stop the show");
}
return 0;
}