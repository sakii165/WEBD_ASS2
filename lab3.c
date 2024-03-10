// _________________________________________PART-A_________________________________________________________________


// #include <stdio.h>
// #include <string.h>

// int main(){
   
//     char s[100];
//     scanf("%s",s);

//     int size = strlen(s);
//     for (int i = 0; i < size; i++)
//     {
//        if(s[i] == '0')
//        printf("1");

//         if(s[i] == '1')
//         printf("0");
//     }
    

// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int s[100];
//     int i = 0;

//     while (n > 0) {
//         s[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//     printf("one's complement: ");
//     for (int m = 0; m < i; m++) {
//         if (s[m] == 0) {
//             s[m] = 1;
//         } else {
//             s[m] = 0;
//         }
//         printf("%d", s[m]);
//     }

//     for (int j = i - 1; j >= 0; j--) {

//         if (s[j] == 0) {
//             s[j] = 1;
//             break;
//         } else {
//             s[j] = 0;
//         }

//      }

//     // Remove the block below if you want to print Two's Complement only once
//     printf("\nTwo's complement: ");
//     for (int m = 0; m < i; m++) {
//         printf("%d", s[m]);
//     }

//     return 0;
// }




// _________________________________________PART B________________________________________________________
// #include <stdio.h>
// #include <string.h>

// int sign(int n){
//     int sign; 

//     if(n>0)
//     sign = 0;
//     else
//     sign = 1;

//     return sign;
// }
// int main(){

//    int n;
//    scanf("%d",&n);

//    printf("sign-magnitude :");
//    if(n>0)
//    printf("0 ");
//    else
//    printf("1 ");

//     int s[100];
//     int i=0;

//     while(n>0){
//         s[i] = n%2;
//         printf("%d",n%2);
//         n = n/2;
//         i++;
       
//     }
   
//     printf("\n");
//     printf("\none's complement: ");
//     if(n>0)
//     printf("0 ");
//     if(n<0)
//     printf("1 ");

//     for (int m = 0; m < i; m++) {
//         if (s[m] == 0) {
//             s[m] = 1;
//         } else {
//             s[m] = 0;
//         }
//         printf("%d", s[m]);
//     }

//     for (int j = i - 1; j >= 0; j--) {

//         if (s[j] == 0) {
//             s[j] = 1;
//             break;
//         } else {
//             s[j] = 0;
//         }

//      }

//     // Remove the block below if you want to print Two's Complement only once
//     printf("\nTwo's complement: ");

   
//     for (int m = 0; m < i; m++) {
//         printf("%d", s[m]);
//     }
   

// }

// _________________________________________________PART-C _______________________________________________


// #include <stdio.h>
// #include <math.h>

// void fixed_point(double number, int decimal_digits) {
//     int integer_part = (int)number;
//     double fractional_part = number - integer_part;

//     printf("%d.", integer_part);

//     for (int i = 0; i < decimal_digits; i++) {
//         fractional_part *= 10;
//         printf("%d", (int)fractional_part);
//         fractional_part -= (int)fractional_part;
//     }

//     printf("\n");
// }

// int main() {
//     double decimal_number = 1234.56789;
//     int decimal_digits = 3;

//     printf("Original Decimal Number: %f\n", decimal_number);
//     printf("Fixed-Point Notation: ");
//     fixed_point(decimal_number, decimal_digits);

//     return 0;
// }

// 2

// #include <stdio.h>

// void floating_point(double number) {
//     int sign = (number < 0) ? 1 : 0;
//     number = (number < 0) ? -number : number;

//     int exponent = 0;

//     while (number >= 2.0) {
//         number /= 2.0;
//         exponent++;
//     }

//     while (number < 1.0) {
//         number *= 2.0;
//         exponent--;
//     }

//     unsigned int mantissa = (unsigned int)(number * 8388608);  // 2^23 for 32-bit floating point

//     printf("Sign: %d\n", sign);
//     printf("Exponent: %d\n", exponent + 127);  // Bias is 127 for 32-bit floating point
//     printf("Mantissa: %u\n", mantissa);
// }

// int main() {
//     double decimal_number = 1234.56789;

//     printf("Original Decimal Number: %f\n", decimal_number);
//     printf("Floating-Point Representation:\n");
//     floating_point(decimal_number);

//     return 0;
// }

// ________________________________________________________PART-D______________________________________________
// #include <stdio.h>
// #include <math.h>

// typedef union {
//    float f;
//    struct {
//        unsigned int mantissa : 23;
//        unsigned int exponent : 8;
//        unsigned int sign : 1;
//    } parts;
// } ieee_float_t;

// void print_ieee(ieee_float_t f) {
//    printf("Sign: %d\n", f.parts.sign);
//    printf("Exponent: %d (biased)\n", f.parts.exponent);
//    printf("Mantissa: 0.%023u\n", f.parts.mantissa);
//    printf("Hexadecimal representation: 0x%08x\n", *(unsigned int*)&f.f);
// }

// int main() {
//    float num;

//    printf("Enter a decimal number: ");
//    scanf("%f", &num);

//    ieee_float_t ieee_num;
//    ieee_num.f = num;

//    print_ieee(ieee_num);

//    return 0;
// }

// #include <stdio.h>

// int main() {
//     double num;
//     int decimal_places;

//     printf("Enter a decimal number: ");
//     scanf("%lf", &num);

//     printf("Enter the number of digits after the decimal point: ");
//     scanf("%d", &decimal_places);

//     // Calculate the scaling factor
//     int scaling_factor = 1;
//     for (int i = 0; i < decimal_places; i++) {
//         scaling_factor *= 10;
//     }

//     // Convert to fixed-point representation
//     int fixed_point_value = (int)(num * scaling_factor);

//     // Print the fixed-point representation
//     printf("Fixed-point representation: %d.%0*d\n", fixed_point_value / scaling_factor, decimal_places, fixed_point_value % scaling_factor);

//     return 0;
// }

// _________________________________________PART E _____________________________________________________

// #include <stdio.h>
// #include <stdlib.h>


// int main(){
   
//    int n;
//    scanf("%d",&n);

//     printf("number in binary :");

//     while(n>0){
//         printf("%d",n%2);
//         n = n/2;
//     }
   
//     //converting binary to hexadecimal

    

// }
// #include <stdio.h>
// #include <string.h>

// int main(){
   
//     char s[100];
//     // for (int i = 0; i != '\n'; i++)
//     scanf("%s",s);

//     int size = strlen(s);
//    // printf("%d",size);
   
//     int r=0;
    
//     for (int i = 0; i < size; i++)
//         r = r*2 + s[i]-'0';
    
//     printf("decimal number for give binary string is : %d\n",r);
//     printf("hexadecimal number for given binary string is : ");

//     while(r>0){
//         if(r%16 < 10){
//         printf("%d",r%16);
//         break;
//         }
//         else if(r%16 == 10)
//         printf("A");
//         else if(r%16 == 11)
//         printf("B");
//         else if(r%16 == 12)
//         printf("C");
//         else if(r%16 == 13)
//         printf("D");
//         else if(r%16 == 14)
//         printf("E");
//         else if(r%16 == 15)
//         printf("F");

//         r = r/16;
//     }
// }
