// Total score = 1,505,004,616 (max score)

#include <bits/stdc++.h>
using namespace std;

main() {
    int max_no_slices, no_pizza_types, selected_slices = 0;
    stack<int> selected_pizzas;

    cin >> max_no_slices >> no_pizza_types;

    int pizzas[no_pizza_types];
    for(int i=0; i<no_pizza_types; i++)
        cin >> pizzas[i];

    for(int i=no_pizza_types-1; i >= 0; i--) {
        int pizza = pizzas[i];
        if(pizza <= max_no_slices-selected_slices) {
            selected_pizzas.push(i);
            selected_slices += pizza;
        }
    }

    cout << selected_pizzas.size() << endl;
    while(!selected_pizzas.empty())
        cout << selected_pizzas.pop() << ' ';
    cout << endl;
}
