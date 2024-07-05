#include <iostream>

using namespace std;
void menu()
{
    cout << "\nLibrary Menu;\n";
				cout << "1) add_book\n";
				cout << "2) print_who_borrowed_book_by_name\n";
				cout << "3) print_library_by_name\n";
				cout << "4) add_user\n";
				cout << "5) user_borrow_book\n";
				cout << "6) print_users\n";
				cout << "7) Exit\n";
}
int max_books=10;
struct book{
    int id;
    string name;
    int quantity;
    int total_borrow=0;
};
struct user{
    int id;
    string name;
    int books_borrowed=0;
};
book books[10];
user users[10];
void add_book(int cnt)
{
    if(cnt==9)
        cout<<"can not add more books";
    else
    {
        cout<<"enter book id ,name: ";
            cin>>books[cnt].id;
            cin>>books[cnt].name;
            cin>>books[cnt].quantity;
    }
}
void add_user(int cnt)
{
    if(cnt==9)
        cout<<"can not add more users";
    else
    {
        cout<<"enter user id , name: ";
            cin>>users[cnt].id;
            cin>>users[cnt].name;
    }
}
void print_books(book arr[],int cnt)
{
    for(int i=0;i<cnt;i++)
        cout<<"book : "<<" id "<<arr[i].id<<" name "<<arr[i].name<<" total quantity: "<<arr[i].quantity<<" total_borrow= "<<arr[i].total_borrow<<"\n";
}
void print_users(user arr[],int cnt)
{
    for(int i=0;i<cnt;i++)
        cout<<"user : "<<arr[i].id<<" "<<arr[i].name<<" "<<"\n";
}
struct names{
    string user_name;
    string book_name;
};
names arr[100];
void users_borrowed_books(string n1,string n2,int number_persons_borrow)
{

    arr[number_persons_borrow].book_name=n1;
    arr[number_persons_borrow].user_name=n2;

}
int number_persons_borrow=0;
void borrow(book bookss[],user userss[],string book_name,string user_name,int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        if(book_name == bookss[i].name && bookss[i].quantity>0)
        {
            if(bookss[i].quantity >bookss[i].total_borrow)
            {
               bookss[i].total_borrow++;
                userss[i].books_borrowed++;
                number_persons_borrow++;
                users_borrowed_books(book_name,user_name,number_persons_borrow);


            }

            else
                cout<<"can not borrow this book\n";
        }

    }

}
int main()
{
    int bookcnt=0;
    int usercnt=0;
    while(true)
    {
         menu();
         cout<<"enter your choice: ";
          int choice;cin>>choice;
        if(choice==7)
            break;
          else if(choice == 1)
          {
              add_book(bookcnt);
               bookcnt++;
          }

          else if(choice==2)
          {
              for(int i=1;i<=number_persons_borrow;i++)
              {
                  cout<<"user name : "<<arr[i].user_name<<" borrowed "<<arr[i].book_name<<"\n";
              }
          }
         else if(choice==3)
            print_books(books,bookcnt);
         else if(choice==4)
          {
              add_user(usercnt);
              usercnt++;
          }
         else if(choice==5)
            {
                string user_name,book_name;
                cout<<"enter user name and book name: ";
                cin>>user_name>>book_name;
                borrow(books,users,book_name,user_name,bookcnt);
            }
          else if(choice==6)
            print_users(users,usercnt);




    }


    return 0;
}
