#include <stdio.h>
#include <stdint.h>
#include <time.h>
#define rith 100
typedef struct raw {
        int8_t rice;
        int16_t water;
        int16_t peas;
        int16_t flower;
        int16_t oil;
        int16_t onion;
        int16_t tomato;
        int16_t chilli;
        int16_t salt;
        int16_t masala;
        int16_t turmeric;
    }raw;

raw brny;
raw *ptr = &brny;
int16_t temprature = 0;
int temp;

void viewStock();
void delay (int sec);
void scan();
void checkStock(int stock);
void cookBiryani();
void addStock();
void viewStock();

/*adding comment*/

void delay (int sec){
    int milli_sec = 1000 * sec;
    clock_t start_time = clock();

    while(clock() < start_time + milli_sec);
}

void scan(){
    scanf("%d", &temp);
}

void checkStock(int stock){
	if(stock<temp){
		printf("\n***Given product quantity is less than required...\nPlease add the product in machine stock\n");
		addStock();
	}
}

void cookBiryani(){
    printf("\nCook Biryani in Machine...!\n");

    printf("Set quantity of Rice (in kg): ");
    scan();                              // scanf("%d", &temp);
	checkStock(ptr->rice);
    ptr->rice =ptr->rice-temp;
    printf("Rice is washing... Wait few second\n");
    delay(3000);
    printf("Set quantity of Water (in lr): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->water);
	ptr->water =ptr->water-temp;
    printf("Set Temprature for boiling rice : ");
    scan();
    temprature = temp;
    printf("Boiling started...\n[Temp:%d]\tWait few minute\n", temprature);
    delay(10000);
    temprature = 0;
    printf("Boiling completed...\n[Temp:%d]\n\n", temprature);

    printf("New paan is ready for make Biryani...!\n");
    printf("Set quantity of Oil (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->oil);
	ptr->oil =ptr->oil-temp;
    printf("Set Temprature for fry : ");
    scan();
    temprature = temp;
    printf("[Temp:%d]\tTemprature set\n", temprature);
    printf("Add quantity of Onion (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->onion);
	ptr->onion =ptr->onion-temp;
    printf("Add quantity of Tomato (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->tomato);
	ptr->tomato =ptr->tomato-temp;
    printf("Frying started...\n[Temp:%d]\tWait few minute\n", temprature);
    delay(5000);
    printf("Fried...\n[Temp:%d]\n",temprature);
    printf("Decrease Temprature for add Masalas : ");
    scan();
    temprature = temp;
    printf("[Temp:%d]\tDone...\n", temprature);
    printf("Set quantity of Chilli Powder (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->chilli);
	ptr->chilli =ptr->chilli-temp;
    printf("Set quantity of Turmeric Powder (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->turmeric);
	ptr->turmeric =ptr->turmeric-temp;
    printf("Set quantity of Salt (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->salt);
	ptr->salt =ptr->salt-temp;
    printf("Set quantity of Biryani Masala Powder (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->masala);
	ptr->masala =ptr->masala-temp;
    printf("Mix and fry started...\n[Temp:%d]\tWait few second\n", temprature);
    delay(7000);
    printf("[Temp:%d]\tDone...\n", temprature);
    printf("Set quantity of Matar Peas (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->peas);
	ptr->peas =ptr->peas-temp;
    printf("Set quantity of Flower (in gm): ");
    scan();                              // scanf("%d", &temp);
    checkStock(ptr->flower);
	ptr->flower =ptr->flower-temp;
    printf("All done...\n[Temp:%d]\n", temprature);
    printf("Increase Temprature: ");
    scan();
    temprature = temp;
    printf("[Temp:%d]\n", temprature);
    printf("Now, machine is adding boiled Rice to the paan...\n");
    delay(3000);
    printf("[Temp:%d]\tWait for few Minutes\n", temprature);
    delay(12000);
    temprature = 0;
    printf("\nWow... Biryani is ready to serve!\n[Temp:%d]\n", temprature);

    printf("\nRemaining Stock is...");
    viewStock();
}

void addStock(){
    // printf("Add Stock in Machine...!");
    int num;
    printf("\nWhat you want to add...\nRice : 1 \t Water : 2 \t\t Peas : 3 \t\t Flower : 4 \nOil : 5 \t Onion : 6 \t Tomato : 7 \t Chilli : 8\nSalt : 9 \t Masala : 10 \t Turmeric : 11\nSelect a number: ");
    scanf("%d", &num);

    //int temp=0;

    switch(num){
        case 1: printf("Enter the quantity of Rice(in kg): ");
                scanf("%d", &temp);
                ptr->rice = ptr->rice+temp;
                break;
        case 2: printf("Enter the quantity of Water(in lr): ");
                scanf("%d", &temp);
                ptr->water =ptr->water+temp;
                break;
        case 3: printf("Enter the quantity of Peas(in gm): ");
                scanf("%d", &temp);
                ptr->peas = ptr->peas+temp;
                break;
        case 4:printf("Enter the quantity of Flower(in gm): ");
                scanf("%d", &temp);
                ptr->flower=ptr->flower+temp;
                break;
        case 5:printf("Enter the quantity of Oil(in gm): ");
                scanf("%d", &temp);
                ptr->oil=ptr->oil+temp;
                break;
        case 6:printf("Enter the quantity of Onion Sliced(in gm): ");
                scanf("%d", &temp);
                ptr->onion=ptr->onion+temp;
                break;
        case 7:printf("Enter the quantity of Tomato Sliced(in gm): ");
                scanf("%d", &temp);
                ptr->tomato=ptr->tomato+temp;
                break;
        case 8:printf("Enter the quantity of Chilli Powder(in gm): ");
                scanf("%d", &temp);
                ptr->chilli=ptr->chilli+temp;
                break;
        case 9:printf("Enter the quantity of Salt(in gm): ");
                scanf("%d", &temp);
                ptr->salt=ptr->salt+temp;
                break;
        case 10:printf("Enter the quantity of Biryani Masala(in gm): ");
                scanf("%d", &temp);
                ptr->masala=ptr->masala+temp;
                break;
        case 11:printf("Enter the quantity of Tumeric Powder(in gm): ");
                scanf("%d", &temp);
                ptr->turmeric=ptr->turmeric+temp;
                break;
        default: printf("Wrong input...");
    }
    printf("Contain added successfully...\n");
    viewStock();
}

void viewStock(){
    printf("\nStock available in Machine...!\n");
    printf("Rice : %dkg \t Water : %dLr \t\t Peas : %dgm \t\t Flower : %dgm \nOil : %dgm \t Onion : %dgm \t Tomato : %dgm \t Chilli : %dgm\nSalt : %dgm \t Masala : %dgm \t Turmeric : %dgm\n",ptr->rice,ptr->water,ptr->peas,ptr->flower,ptr->oil,
        ptr->onion,ptr->tomato,ptr->chilli,ptr->salt,ptr->masala,ptr->turmeric);
    printf("Thank you...! Visit again\n\n");
}

int main()
{
    printf("Welcome in Automatic Biryani Making Machine\n");

    ptr->rice = 30;
    ptr->water = 50;
    ptr->peas = 5000;
    ptr->flower = 1000;
    ptr->oil = 15000;
    ptr->onion = 10000;
    ptr->tomato = 9000;
    ptr->chilli = 2000;
    ptr->salt = 2000;
    ptr->masala = 1000;
    ptr->turmeric = 1000;

    int check=1;
    while(check==1){
        int num;
        printf("\nWhat is your plan...\nCook a Biryani : 1\nAdd Stock : 2\nView Stock : 3\nSelect a number: ");
        scanf("%d", &num);

        switch(num){
            case 1: cookBiryani();
                break;
            case 2: addStock();
                break;
            case 3: viewStock();
                break;
            default: printf("Wrong input...");
        }

        printf("\nAre you want to use again...? \npress 1 for yes\npress 0 for no\nSelect a number: ");
        scanf("%d", &check);
        if(check==0){
            printf("Thank you for your Respose...!");
        }
    }

    return 0;
}
