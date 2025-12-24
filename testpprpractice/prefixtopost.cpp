int eval(char *exp) {
    int i;
    int n = strlen(exp);

    for (i = 0; i < n; i++) {
        char ch = exp[i];

        if (ch == ' ')
            continue;

        if (isdigit(ch)) {
            push(ch - '0');   
        } else {
            int val1 = pop();
            int val2 = pop();

            switch (ch) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': push(val2 / val1); break;
                case '^': push(pow(val2, val1)); break;
            }
        }
    }
    return pop();
}

