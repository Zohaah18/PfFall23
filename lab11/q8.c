/** programmer: Zoha Ahmed
* Date: 21 Nov, 2023
* Desc: ques 8, lab 11
/**
#include <stdio.h>

// Function to calculate the volume of a box
int calculateVolume(int length, int width, int height) {
    return length * width * height;
}

// Function to find transportable boxes and print their volumes
void findTransportableBoxes(int num_boxes, int boxes[][3]) {
	int i;
    for (int i = 0; i < num_boxes; i++) {
        int box_height = boxes[i][2];

        if (box_height < 41) {
            int volume = calculateVolume(boxes[i][0], boxes[i][1], box_height);
            printf("%d\n", volume);
        }
    }
}

int main() {
    // Sample Input
    int num_boxes = 4;
    int boxes[4][3] = {
        {5, 5, 5},
        {1, 2, 40},
        {10, 5, 41},
        {7, 2, 42}
    };

    // Find and print transportable volumes
    findTransportableBoxes(num_boxes, boxes);

    return 0;
}

