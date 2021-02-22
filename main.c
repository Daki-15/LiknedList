int main(){

    Node *List=NULL;
    int op, data;

    while(1){
        printf("1. AddBegin\n");
        printf("2. AddEnd\n");
        printf("3. Invers\n");
        printf("4. Print\n");
        printf("5. Delete\n");
        printf("6. Exit\n");
        printf("Opcion: ");
        scanf("%d",&op);

        switch (op){
        case 1:{
            printf("Data:\n> ");
            scanf("%d",&data);

            List=addBegin(data,List);
        } break;
        case 2:{
            printf("Data:\n> ");
            scanf("%d",&data);

            List=addEnd(data,List);
        } break;
        case 3:{
            List=inversList(List);
        } break;
        case 4:{
            Print(List);
        } break;
        case 5:{
            printf("Data to delete:\n> ");
            scanf("%d",&data);
            List=Delete(data,List);
        } break;
        case 6: exit(1);
        default: printf("Option not correct try again!!!\n");
        }
    }
    
    return 0;
}
