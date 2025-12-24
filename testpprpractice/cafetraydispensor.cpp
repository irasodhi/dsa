class linkstack{
    LinkList *first;
    public:
    linkstack(){
        first=null;
    }
    bool isempty(){
        return first==NULL;
    }
    void push(int dd){
        Linklist *nn=new Node(dd);
        nn->next=first;
        first=nn;

    }
    void pop(){
        if(isempty()){
            return -1;
        }
        int remov=first->data;
        Node* temp=first;
        first=first->next;
        delete temp;
        return remov;
    }
}