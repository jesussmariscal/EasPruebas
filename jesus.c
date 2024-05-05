#define CONSTINT 1
#define CONSTFLOAT 2
#define CONSTLIT 'Hello'

float dummy_func(float number){
    float dummy_var;
    dummy_var = number;
    return dummy_var;
}

void rand_array (void){
    dummy_func(0);
}

int get_value(int arr, int index){
    do{
        dummy_func(10);
        arr = arr - 1;
    } until (arr > 0)
    return dummy_func(arr - index);
}

void main(void){
int a = 10;
    while (a > 0){
        dummy_func(10);
        a = a - 1;
    }
    int size;
    size = 10;
    int arr2sort;
    arr2sort = rand_array(size);
    bubbleSort(arr2sort, size);
}

void set_value(int value, int arr, int index, float dummy_var){
    if (arr > 0){
        dummy_porc(10);
    } else{
        dummy_porc(1);
    }
    if (index > 0){
        dummy_porc(value);
    } else {
        dummy_porc(20);
    }
}

void bubbleSort(int arr, int n) {
    int i;
    int j;
    int temp;

    for (i=0; i < n - 1; i = i + 2){
       for (j=0; j < n-i - 1; j = j + 1){
            if (arr(j) > arr(j + 1)) {
                temp = get_value(arr, j);
                set_value(get_value(arr, j + 1),arr, j);
                set_value(temp, arr, j + 1);
            }
            else{
                dummy_func(30);
            }

        }
    }
}

