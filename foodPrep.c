#include <stdio.h>

char userName;
double total = 0.0;

int str_compare(char str_1[], char str_2[]);

int printBreads();
int printMeats();
int printVeggies();
void addVeggeis();
void addMeat();
void addBread();
void makeASandwich();

int main(int argc, char const *argv[]) {

  char user_input[5];

while (str_compare(user_input, "quit") != 0) {

  printf("Glad You Came To Dine With Us, Would You Like To Place An Order: ((1): yes/(2): no)\n\n");
  scanf("%s", user_input);
  printf("\n");
  fflush(stdin);

  if (str_compare(user_input, "yes") == 0) {
    makeASandwich();
    break;
  } else if (str_compare(user_input, "no") == 0) {
    printf("Ok, We Hope To See You Again!! Bye!\n");
    break;
  } else {
    printf("Sorry, But That's Not A Valid Input.\n");
    continue;
  }

}

  return 0;
}

int printBreads() {

  // ==== Creating The Breads ==== //
  char white[6] = "White";
  char italian[8] = "Italian";
  char rye[4] = "Rye";
  char brioche[8] = "Brioche";
  char gf[3] = "GF";

  int userBread;

  printf("Choose Your Bread: \n\n");

  // ==== List of Breads ==== //
  printf("(1): White = $1.20\n");
  printf("(2): Italian = $1.50\n");
  printf("(3): Rye = $1.75\n");
  printf("(4): Brioche = $2.00\n");
  printf("(5): Gluten Free = $2.25\n\n");

  // ==== Get User Input ==== //
  scanf("%d", &userBread);
  fflush(stdin);
  printf("\n");

  switch (userBread) {
    case 1:
      printf("%s Bread Has Been Added!\n", white);
      break;
    case 2:
      printf("%s Bread Has Been Added!\n", italian);
      break;
    case 3:
      printf("%s Bread Has Been Added!\n", rye);
      break;
    case 4:
      printf("%s Bread Has Been Added!\n", brioche);
      break;
    case 5:
      printf("%s Bread Has Been Added!\n", gf);
      break;
    default:
      printf("Not A Valid Entry\n");
      break;

  }

  return userBread;
}

int printMeats() {

  // ==== Creating The Meats ==== //
  char turkey[7] = "Turkey";
  char salami[7] = "Salami";
  char ham[4] = "Ham";
  char chicken[8] = "Chicken";
  char roast[11] = "Roast Beef";

  int userMeat;

  printf("Choose Your Meat: \n\n");

  printf("(1): %s = $3.25\n", turkey);
  printf("(2): %s = $4.50\n", salami);
  printf("(3): %s = $3.75\n", ham);
  printf("(4): %s = $4.25\n", chicken);
  printf("(5): %s = $5.00\n\n", roast);

  scanf("%d", &userMeat);
  fflush(stdin);
  printf("\n");

  switch (userMeat) {
    case 1:
      printf("%s Bread Has Been Added!\n", turkey);
      break;
    case 2:
      printf("%s Bread Has Been Added!\n", salami);
      break;
    case 3:
      printf("%s Bread Has Been Added!\n", ham);
      break;
    case 4:
      printf("%s Bread Has Been Added!\n", chicken);
      break;
    case 5:
      printf("%s Bread Has Been Added!\n", roast);
      break;
    default:
      printf("Not A Valid Entry\n");
      break;
  }

  return userMeat;
}

int printVeggies() {

  // ==== Creating The Veggies ==== //
  char onion[7] = "Onions";
  char banPep[16] = "Banana Peppers";
  char tom[9] = "Tomatoes";
  char let[8] = "Lettuce";
  char mush[10] = "Mushrooms";

  int userVeggies;

  printf("Choose Your Veggies: \n\n");

  printf("(1): %s = $.25\n", onion);
  printf("(2): %s = $.50\n", banPep);
  printf("(3): %s = $.75\n", tom);
  printf("(4): %s = $.25\n", let);
  printf("(5): %s = $.50\n\n", mush);

  scanf("%d", &userVeggies);
  fflush(stdin);
  printf("\n");

  switch (userVeggies) {
    case 1:
      printf("%s Bread Has Been Added!\n", onion);
      break;
    case 2:
      printf("%s Bread Has Been Added!\n", banPep);
      break;
    case 3:
      printf("%s Bread Has Been Added!\n", tom);
      break;
    case 4:
      printf("%s Bread Has Been Added!\n", let);
      break;
    case 5:
      printf("%s Bread Has Been Added!\n", mush);
      break;
    default:
      printf("Not A Valid Entry\n");
      break;
  }

  return userVeggies;
}

void addVeggeis() {

  int veggies;

  veggies = printVeggies();
  if (veggies == 1) {
    double onion = 0.25;
    total += onion;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (veggies == 2) {
    double banPep = 0.50;
    total += banPep;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (veggies == 3) {
    double tom = 0.75;
    total += tom;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (veggies == 4) {
    double let = 0.25;
    total += let;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (veggies == 5) {
    double mush = 0.50;
    total += mush;
    printf(" == Your Total is $%.2f ==\n", total);
  }

  return;

}

void addBread() {

  int bread;

  bread = printBreads();
  if (bread == 1) {
    double white = 1.20;
    total += white;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (bread == 2) {
    double italian = 1.50;
    total += italian;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (bread == 3) {
    double rye = 1.75;
    total += rye;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (bread == 4) {
    double brioche = 2.00;
    total += brioche;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (bread == 5) {
    double gf = 2.25;
    total += gf;
    printf(" == Your Total is $%.2f ==\n", total);
  }

  return;

}

void addMeat() {

  int meat;

  meat = printMeats();
  if (meat == 1) {
    double turkey = 3.25;
    total += turkey;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (meat == 2) {
    double salami = 4.50;
    total += salami;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (meat == 3) {
    double ham = 3.75;
    total += ham;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (meat == 4) {
    double chicken = 4.25;
    total += chicken;
    printf(" == Your Total is $%.2f ==\n", total);
  } else if (meat == 5) {
    double roast = 5.00;
    total += roast;
    printf(" == Your Total is $%.2f ==\n", total);
  }

  return;
}

void makeASandwich() {

  int userInput;

  printf("Hello! Welcome To SandwichWay!\n\n");

  while (userInput != 9) {
    printf("Please Pick An Option: \n\n");

    printf("(1): Choose Bread\n");
    printf("(2): Choose Meat\n");
    printf("(3): Choose Veggies\n");
    printf("(9): Quit\n\n");

    scanf("%d", &userInput);
    fflush(stdin);
    printf("\n");

    if (userInput == 9) {
      printf("Ok, Bye!\n");
      break;
    }

    switch (userInput) {
      // ==== User Is Choosing Bread ==== //
      case 1:
        printf("Alright Let's Get This Bread!!\n");
        addBread();
        break;
      // ==== User Is Choosing Meat ==== //
      case 2:
        printf("Alright Let's Put Some Meat Inbetween Your Buns!!\n");
        addMeat();
        break;
      case 3:
        printf("Alright Let's Add The Stuff That Makes Kids Cry!!\n");
        addVeggeis();
        break;
    }

  }

  return;

}

int str_compare(char str_1[], char str_2[]) {

  int i = 0;
  int j = 0;
  int res_1 = 0;
  int res_2 = 0;
  int res_3 = 0;

  while (str_1[i] != '\0') {
    if (str_1[i] != str_2[i]) {
      return -1;
    }
    i++;
  }

  return 0;
}
