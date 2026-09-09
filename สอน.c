#include <stdio.h>

int main()
{
    float Fahrenheit, Celsius;
     
    // รับ input เป็น Fahrenheit
    printf("inter your body temperature (Fahrenheit):");

    scanf("%f", &Fahrenheit);
    
    // แปลง Fahrenheit เป็น Celsius
    Celsius = (Fahrenheit - 32)*5/9;

    printf("temperature: %.2f, ", Celsius);

    // กำหนด ถ้า Celsius มากกว่า 37.5 จะแสดงว่า บุคคลนี้เป็นไข้ ถ้าไม่ แสดง ไม่มีไข้
    if (Celsius>=37.5)
     printf("Result: บุคคลนี้นี้เป็นไข้\n");
    else 
      printf("Result: ไม่มีไข้\n");
      
    // ทดสอบ branch
    
    return 0;
}