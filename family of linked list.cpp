//name--rahul       sid--21105058
include <bits/stdc++.h>                   
using namespace std;                  
class Node{
    public:
    string name;
    int age;
    Node*next; 
    Node*prev; 
    Node(string name,int age){
        this->name=name;
        this->age=age;
        next=NULL; 
        prev=NULL; 
    }
};

//Inserting elements at back of the linked list
void push_at_back(Node* &head,string name,int age){
    Node*temp=head;
    Node*new_node=new Node(name,age);

    //when list is empty
    if(temp==NULL){
        head=new_node;
    }
    //when list is non empty
    else{
        while(temp->next!=NULL){
            temp=temp->next;    
        }
        temp->next=new_node;
        new_node->prev=temp;
    }
}

//adding elements to front of the linked list 
void push_at_front(Node*&head,string name,int age){
    Node*new_node=new Node(name,age);

    //Inserting new node at head
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

//function for printing data from start to end of the linked list
void print_from_start(Node*head){
    Node*temp=head;
    while(temp->next!=NULL){
        cout<<"[Name:"<<temp->name<<" Age:"<<temp->age<<"]"<<"<=>";
        temp=temp->next;
    }
	
    //Printing last element without "<=>" at the end
    if(temp->next==NULL)
    {
        cout<<"[Name:"<<temp->name<<" Age:"<<temp->age<<"]";
    }
    cout<<endl;
}

//Function to print linked list from end to first
void print_from_end(Node*head){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp->prev!=NULL)
    {
    
        cout<<"[Name:" <<temp->name<<" Age:"<<temp->age<<"]"<<"<=>";
        temp=temp->prev;
    }
	
    //for first element
    if(temp->prev==NULL)
    {
        cout<<"[Name:"<<temp->name<<" Age:"<<temp->age<<"]";
    }
    cout<<endl;
}

//deleting the ith element in the linked list
void delete_ith(Node*&head,int i){ 
    if(i==0){
        Node*temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
    }
    else{
        Node*temp=head;
        for(int j=0;j<i;j++){
            temp=temp->next; 
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
    }
}

//Function to delete last element of the linked list
void pop(Node*&head){
    Node*temp=head;
    while(temp->next!=NULL){
	    temp=temp->next;   
    }
    temp->prev->next=NULL;
    delete temp;
}

int main(){
    Node*head=NULL;
	int no_of_members;
	cout<<"Enter the number of family members:";
    cin>>no_of_members;
	for(int i=1;i<=no_of_members;i++){
		string name;
		int age;
		cout<<"Enter family member number"<<i<<" name:";
		
		//To prevent getlien from taking white space caused by previous cin to take as input we ignore one cin 
        cin.ignore();
		getline(cin,name);
		
		cout<<"Enter family member number "<<i<<" age:";
        cin>>age;
		push_at_back(head,name,age);
	}
    cout<<endl;
    cout<<"The Doubly Linked list is shown below:"<<endl<<endl;
    print_from_start(head);
}

// Bonus Question :
/*
Try to find a way to link the family members' doubly-linked list based on their relationship. (Is it possible?)
--
One way is to take the input in form of the levels of a family tree , ie, taking the input generation wise and inserting the nodes
in the list order-wise as in an generic tree.
*/
