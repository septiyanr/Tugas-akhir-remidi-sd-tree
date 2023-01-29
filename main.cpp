#include<stdio.h>
typedef struct node {
    int data;
    node *kiri;
    node *kanan;
};

node *akar=NULL;
addNode(node**akar, int isi){
    if((*akar)==NULL){
        node *baru;
        baru=new node;
        baru->data=isi;
        baru->kiri=NULL;
        baru->kanan=NULL;
        (*akar)=baru;
    }
}

preOrder(node *akar){
    if(akar !=NULL){
        printf("%d ", akar->data);
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

inOrder(node *akar){
    if(akar !=NULL){
        inOrder(akar->kiri);
        printf("%d ", akar->data);
        inOrder(akar->kanan);
    }
}

postOrder(node *akar){
    if(akar !=NULL){
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        printf("%d ", akar->data);
    }
}

main(){
    int angka;
    printf("\n\n\tPosisi Awal Tree: \n\n");
    printf("\t     21\n\t   /    \\\n\t  13     36\n\t  /\\\     / \\\ \n\t 8  15  26  17\n\t /\\   \\\      \\\ \n\t6  11  18     4\n\n");
    addNode(&akar,angka=21);
    addNode(&akar->kiri,angka=13);
    addNode(&akar->kanan,angka=36);
    addNode(&akar->kiri->kiri,angka=8);
    addNode(&akar->kanan->kiri,angka=26);
    addNode(&akar->kiri->kanan,angka=15);
    addNode(&akar->kanan->kanan,angka=17);
    addNode(&akar->kiri->kiri->kiri,angka=6);
    addNode(&akar->kanan->kanan->kanan,angka=4);
    addNode(&akar->kiri->kanan->kanan,angka=18);
    addNode(&akar->kiri->kiri->kanan,angka=11);
    printf("Tampilan PreOrder  :");
    preOrder(akar);
    printf("\nTampilan InOrder  :");
    inOrder(akar);
    printf("\nTampilan PostOrder  :");
    postOrder(akar);
}
