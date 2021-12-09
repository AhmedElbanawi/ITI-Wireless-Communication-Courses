/*****************************************************/
#include <stdio.h>
/*****************************************************/
#define STR_SIZE 20
#define MAX_CARS 20
#define NULL_CHAR '\0'
/*****************************************************/
typedef struct{
    unsigned int Id;
    unsigned char Max_Speed;
    float Battery;
    double Weight;
    char Model[STR_SIZE];
}CAR_t;
typedef struct{
    unsigned int Id;
    unsigned char Max_Speed;
    float Battery;
    double Weight;
    char Model[STR_SIZE];
}NEW_CAR_t;
/*****************************************************/
void Assign_Data_W_Ptr(CAR_t* const CAR);
void Display_Info(const CAR_t* const CAR, const unsigned int IDX);
CAR_t Assign_Data(
                    const unsigned int ID,
                    const char* MODEL,
                    const unsigned char MAX_SPEED,
                    const float BATTERY,
                    const double WEIGHT
                  );
/*****************************************************/
int main()
{
    CAR_t Car[MAX_CARS], New_Car;
    unsigned int Idx;
    printf("Enter Required Car...\n");
    scanf("%u", &Idx);
    Assign_Data_W_Ptr(Car + Idx);
    Display_Info(Car, Idx);
    New_Car = Assign_Data(Car[Idx].Id, Car[Idx].Model, Car[Idx].Max_Speed, Car[Idx].Battery, Car[Idx].Weight);
    Display_Info(&New_Car, 0);
    return 0;
}
/*****************************************************/
void Assign_Data_W_Ptr(CAR_t* const CAR){
    printf("Enter Car Informations...\n");
    printf("Id: ");
    scanf("%u", &CAR->Id);
    printf("Model Name: ");
    scanf("%s", CAR->Model);
    printf("Max Speed: ");
    scanf("%hu", &CAR->Max_Speed);
    printf("Battery Level: ");
    scanf("%f", &CAR->Battery);
    printf("Weigh: ");
    scanf("%lf", &CAR->Weight);
}
/*****************************************************/
void Display_Info(const CAR_t* const CAR, const unsigned int IDX){
    printf("######################################\n");
    printf("Car Informations...\n");
    printf("Id: %u\n", (CAR + IDX)->Id);
    printf("Model Name: %s\n", (CAR + IDX)->Model);
    printf("Max Speed: %hu\n", (CAR + IDX)->Max_Speed);
    printf("Battery Level: %f\n", (CAR + IDX)->Battery);
    printf("Weigh: %lf\n", (CAR + IDX)->Weight);
}
/*****************************************************/
CAR_t Assign_Data(
                    const unsigned int ID,
                    const char* MODEL,
                    const unsigned char MAX_SPEED,
                    const float BATTERY,
                    const double WEIGHT
                  )
{
    CAR_t Car;
    unsigned int i = 0;
    Car.Id = ID;
    Car.Max_Speed = MAX_SPEED;
    Car.Battery = BATTERY;
    Car.Weight = WEIGHT;
    while(MODEL[i] != NULL_CHAR){
        Car.Model[i] = MODEL[i];
        i++;
    }
    Car.Model[i] = NULL_CHAR;
    return Car;
}
/*****************************************************/
