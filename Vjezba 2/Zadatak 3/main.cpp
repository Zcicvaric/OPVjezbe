#include <iostream>

using namespace std;

typedef struct  vektor{
    int* elementi;
    int f_velicina = 0;
    int l_velicina = 0;

vektor* vector_new(int br) {
    vektor* v1 = new vektor;
    (*v1).elementi = new int[br];
    (*v1).f_velicina = br;
    return v1;
}

void vector_delete(vektor* v) {
    delete (*v).elementi;
    delete v;
}

vektor* vector_push_back(vektor *v, int br) {
    if((*v).l_velicina <= (*v).f_velicina-1) {
        int index = (*v).l_velicina;
        (*v).elementi[index] = br;
        (*v).l_velicina++;
        return v;
    }
    else {
        vektor *novi = vector_new((*v).f_velicina * 2);
        for(int i = 0; i <= (*v).f_velicina; i++) {
            (*novi).elementi[i] = (*v).elementi[i];
        }
        (*novi).l_velicina = (*v).l_velicina+1;
        (*novi).elementi[(*v).f_velicina] = br;
        vector_delete(v);
        return novi;
    }

}

vektor* vector_pop_back(vektor *v) {
    (*v).elementi[(*v).l_velicina-1] = 0;
    return v;
}

int& vector_front(vektor *v) {
    return((*v).elementi[0]);
}

int& vector_back(vektor *v) {
    int zadnji = (*v).l_velicina-1;
    return((*v).elementi[zadnji]);
}

int vector_size(vektor *v) {
    return (*v).l_velicina;
}

}vektor;


int main()
{
    vektor *v1 = v1->vector_new(5);

    v1 = v1->vector_push_back(v1, 15);
    v1 = v1->vector_push_back(v1, 25);
    v1 = v1->vector_push_back(v1, 16);
    v1 = v1->vector_push_back(v1, 75);
    v1 = v1->vector_push_back(v1, 34);
    v1 = v1->vector_push_back(v1, 89);
    v1 = v1->vector_push_back(v1, 58);
    v1 = v1->vector_push_back(v1, 48);
    v1 = v1->vector_push_back(v1, 37);
    v1 = v1->vector_push_back(v1, 68);
    //v1 = v1->vector_pop_back(v1);
    //cout<<v1->vector_front(v1)<<endl;
    //cout<<v1->vector_back(v1)+1<<endl;


    for(int i = 0; i<(*v1).f_velicina; i++) {
        cout<<(*v1).elementi[i]<<endl;
    }

    return 0;

}
