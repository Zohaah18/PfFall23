/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 2, lab 11
/**
#include <stdio.h>
#include <string.h>

struct EnginePart {
    char serialnum[4];  // 2 letters + 1 digit
    int yearofmanufacture;
    char material[20];
    int quantitymanufactured;
};

struct AutomobileCompany {
    struct EnginePart parts[300];
    int numparts;
};

void addEnginePart(struct AutomobileCompany *company, const char *serialnum, int yearofmanufacture, const char *material, int quantitymanufactured) {
    if (company->numparts < 300) {
        struct EnginePart *newPart = &company->parts[company->numparts++];
        strncpy(newPart->serialnum, serialnum, sizeof(newPart->serialnum));
        newPart->yearofmanufacture = yearofmanufacture;
        strncpy(newPart->material, material, sizeof(newPart->material));
        newPart->quantitymanufactured = quantitymanufactured;
    } else {
        printf("Maximum number of parts reached. Cannot add more parts.\n");
    }
}

void retrieveParts(struct AutomobileCompany *company, const char *start_serial, const char *end_serial) {
    printf("Parts between %s and %s:\n", start_serial, end_serial);
    for (int i = 0; i < company->numparts; i++) {
        if (strcmp(company->parts[i].serialnum, start_serial) >= 0 &&
            strcmp(company->parts[i].serialnum, end_serial) <= 0) {
            printf("Serial Number: %s\n", company->parts[i].serialnum);
            printf("Year of Manufacture: %d\n", company->parts[i].yearofmanufacture);
            printf("Material: %s\n", company->parts[i].material);
            printf("Quantity Manufactured: %d\n", company->parts[i].quantitymanufactured);
            printf("\n");
        }
    }
}

int main() {
    struct AutomobileCompany company = { .numparts = 0 };

    // Adding engine parts
    addEnginePart(&company, "AA0", 2020, "Steel", 200);
    addEnginePart(&company, "BB1", 2021, "Aluminum", 50);
    addEnginePart(&company, "CC2", 2022, "Plastic", 75);
    addEnginePart(&company, "DD3", 2020, "Steel", 120);

    // Retrieving information for parts between BB1 and CC6
    retrieveParts(&company, "BB1", "CC2");

    return 0;
}

