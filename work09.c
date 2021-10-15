#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *pokeggroups[] = {"monster", "grass", "dragon", "water 1", "bug", "fly", "field", "fairy", "human-like", "water 3", "mineral", "amorphous", "water 2", "ditto", "no eggs discovered", "gender unknown"};

struct foo {
    char *pokemon;
    char *egggroup;
};

void print_foo(struct foo *f) {
    printf("pokemon: %s\negg group: %s\n\n", (*f).pokemon, (*f).egggroup);
}

int main() {
    struct foo eevee;
    eevee.pokemon = "eevee";
    eevee.egggroup = pokeggroups[6];
    print_foo(&eevee);

    srand(time(NULL));
    char *egg = pokeggroups[rand() % 16];
    struct foo random;
    random.pokemon = "unknown";
    random.egggroup = egg;
    print_foo(&random);
}
