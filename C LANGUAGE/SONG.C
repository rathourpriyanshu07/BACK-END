#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>   // for delay()

#define MAX_SONGS 50
#define MAX_TITLE 30
#define MAX_ARTIST 30

struct Song {
    int id;
    char title[MAX_TITLE];
    char artist[MAX_ARTIST];
    int duration;   // in seconds
};

struct Song library[MAX_SONGS];
int songCount = 0;
int nextId = 1;

/* Function to add a song */
void addSong() {
    if (songCount >= MAX_SONGS) {
        printf("Library full!\n");
        return;
    }
    library[songCount].id = nextId++;
    printf("Enter song title: ");
    fflush(stdin);
    gets(library[songCount].title);
    printf("Enter artist name: ");
    gets(library[songCount].artist);
    printf("Enter duration (in seconds): ");
    scanf("%d", &library[songCount].duration);
    songCount++;
    printf("Song added successfully!\n");
}

/* Function to list songs */
void listSongs() {
    int i;
    if (songCount == 0) {
        printf("No songs in library!\n");
        return;
    }
    printf("\nID   Title                 Artist               Duration\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < songCount; i++) {
        printf("%-4d %-20s %-20s %d sec\n",
               library[i].id,
               library[i].title,
               library[i].artist,
               library[i].duration);
    }
}

/* Function to search songs by title */
void searchSong() {
    char query[MAX_TITLE];
    int i, found = 0;
    printf("Enter title to search: ");
    fflush(stdin);
    gets(query);

    for (i = 0; i < songCount; i++) {
        if (stricmp(library[i].title, query) == 0) {
            printf("Found: %s - %s (%d sec)\n",
                   library[i].title,
                   library[i].artist,
                   library[i].duration);
            found = 1;
        }
    }
    if (!found) {
        printf("No matching song found.\n");
    }
}

/* Simulate playing a song */
void playSong() {
    int id, i, found = 0;
    printf("Enter song ID to play: ");
    scanf("%d", &id);

    for (i = 0; i < songCount; i++) {
        if (library[i].id == id) {
            printf("\nNow Playing: %s - %s\n",
                   library[i].title, library[i].artist);
            printf("Duration: %d sec\n", library[i].duration);

            // simulate play (short countdown)
            for (int t = 1; t <= 5; t++) {
                printf("...playing %d sec\n", t);
                delay(1000); // 1 second delay
            }

            printf("Finished!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Song ID not found!\n");
    }
}

void main() {
    int choice;
    clrscr();

    do {
        printf("\n===== Simple Spotify (Turbo C) =====\n");
        printf("1. Add Song\n");
        printf("2. List Songs\n");
        printf("3. Search Song\n");
        printf("4. Play Song\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        clrscr();
        switch (choice) {
            case 1: addSong(); break;
            case 2: listSongs(); break;
            case 3: searchSong(); break;
            case 4: playSong(); break;
            case 5: printf("Exiting... Bye!\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\nPress any key to continue...");
        getch();
        clrscr();
    } while (choice != 5);

    getch();
}
