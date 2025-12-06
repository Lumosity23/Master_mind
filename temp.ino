int counter() {
    static int count = 0;
    if (value_baton_de_joie_x_axes > 852) {
        count++;
    } else if (value_baton_de_joie_x_axes < 172) {
        count--;
    }
    // vérifier que la valeur ne dépasse pas 4 et n'est pas inférieure à 0
    if (count > 3) {
        count = 0;
    } else if (count < 0) {
        count = 3;
    }
    return count;
}