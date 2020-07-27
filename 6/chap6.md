
<img src="./img/pg280.JPG" >

<< manage array arguments in a function>>

1) string pointer where last character is not a null
void print(const char *cp){
    if(cp){
        while(*cp) cout<<*cp++;
    }
}

2) using begin(array) and end(array)

void print(const int *beg, const int *end){
    while (beg != end)
        cout<< *beg++<<end;
}

int j[2] = {0,1};
print(begin(j), end(j));

3) Similar to (2) but using size instead

void print(const int ia[], size_t size){
    for(size_t i=0; i != size; i++){
        cout<<ia[i]<<endl;>>
    }
}

int j[] = {0,1};
print(j, end(j) - begin(j));

4) by reference

void print(int (&arr)[10]){
    for (auto elem : arr)
        cout<<elem<<endl;
}
