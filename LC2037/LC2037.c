int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    int troca = 1, total = 0;

    while (troca) {
        troca = 0;
        for (int i = 1; i < seatsSize; i++) {
            if (seats[i - 1] > seats[i]) {
                int temp = seats[i];
                seats[i] = seats[i - 1];
                seats[i - 1] = temp;
                troca = 1;
            }
        }
    }

    troca = 1;
    while (troca) {
        troca = 0;
        for (int i = 1; i < studentsSize; i++) {
            if (students[i - 1] > students[i]) {
                int temp = students[i];
                students[i] = students[i - 1];
                students[i - 1] = temp;
                troca = 1;
            }
        }
    }

    for (int i = 0; i < studentsSize; i++) {
        if (seats[i] > students[i]) {
            total += seats[i] - students[i];
        } else {
            total += students[i] - seats[i];
        }
    }

    return total;
}
