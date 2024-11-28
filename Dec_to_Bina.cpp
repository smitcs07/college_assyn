// #include<iostream>
// using namespace std;
// int main(){
// 	int num;
// 	cout<<"Enter the number: ";
// 	cin>>num;                                                                                                                                                                                                                                                                                                                                                                                                                         
// 	int rem,ans=0,mul=1;
// 	while(num>0){
// 		rem=num%2;
// 		num=num/2;
// 		ans=rem*mul+ans;
// 		mul=mul*10;
// 	}
// 	cout<<ans<<endl;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// void increasing(int n){
// 	if(n>0){
// 		increasing(n-1);
// 		cout<<n<<endl;
// 	}
// 	return;
// }
// int main(){
// 	int n;
// 	cout<<"Enter the value till you Want to print:-";
// 	cin>>n;
// 	increasing(n);
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// void converge(int num){
//     int rem;
//         if(num>0){
//         rem=num%2;
//         num=num/2;
//         converge(num);
//         cout<<rem;
//     }
//     return;
// }

// int main(){
// 	int num;
// 	cout<<"Enter the number you want to convert: "<<endl;
// 	cin>>num;
//     cout<<"After conversion:- ";
//     converge(num);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// void converge(int);
// int main(){
// 	int num;
// 	cout<<"Enter the number you want to convert: "<<endl;
// 	cin>>num;
//     cout<<"After conversion:- ";
//     converge(num);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// void converge(int num){
//     int rem;
//         if(num>0){
//         rem=num%2;
//         num=num/2;
//         converge(num);
//         cout<<rem;
//     }
//     return;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int Num1,Num2,Sum;
// 	cout<<"Enter number 1:- ";
// 	cin>>Num1;
// 	cout<<"Enter number 2:- ";
// 	cin>>Num2;
// 	cout<<"The summation of two number is:- ";
// 	Sum=Num1+Num2;
// 	cout<<Sum;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int n,year,month,week,days,s1,s3;
// 	cout<<"Enter any number to convert year,month,week,days:- ";
//     cin>>n;
//     s1=n%365;
//     year=n/365;
//     s3=s1%30;
//     month=s1/30;
//     days=s3%7;
//     week=s3/7;

// 	cout<<"Year is:- "<<year<<" "<<"Month is:- "<<month<<" "<<"Week is:- "<<week<<" "<<"Days is:- "<<days;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int arr[4],sum=0;
//     cout<<"Enter 4 Elements of an array:- "<<endl;
//     for(int i=0;i<=3;i++){
//         cout<<"Enter  Elements index of an array:- "<<i+1<<" = ";
//         cin>>arr[i];
//         sum=sum+arr[i];
//     }
//     cout<<"Sum is:- "<<sum;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int arr[4],min=arr[0];
//     cout<<"Enter 4 Elements of an array:- "<<endl;
//     for(int i=0;i<=3;i++){
//         cout<<"Enter  Elements of an array "<<i+1<<" = ";
//         cin>>arr[i];
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     cout<<"The minimum element of this array is:- "<<min;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int arr[4],max=arr[0];
//     cout<<"Enter 4 Elements of an array:- "<<endl;
//     for(int i=0;i<=3;i++){
//         cout<<"Enter  Elements of an array "<<i+1<<" = ";
//         cin>>arr[i];
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<"The maximum element of this array is:- "<<max;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
// 	int count=0,a=0,r=1,n;
//     cout<<"Enter value till Fabonacci series you want:- ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         cout<<" "<<a;
//         count=a+r;
//         a=r;
//         r=count;
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//With no argument and no return
// #include<iostream>
// using namespace std;

// void add(){
//     int a,b,sum;
//     cout<<"Enter First number:- ";
//     cin>>a;

//     cout<<"Enter Second number:- ";
//     cin>>b;

//     sum=a+b;
//     cout<<"Sum is: "<<sum;
// }

// int main(){
//     add();
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//With argument and no return
// #include<iostream>
// using namespace std;
// void add(int a,int b){
//     int sum;
//     sum=a+b;
//     cout<<"Sum is: "<<sum;
// }

// int main(){
//     int a,b,sum;
//     cout<<"Enter First number:- ";
//     cin>>a;
//     cout<<"Enter Second number:- ";
//     cin>>b;
//     add(a,b);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//With argument and return

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return(a+b);
// }

// int main(){
//     int a,b,sum,r;
//     cout<<"Enter First number:- ";
//     cin>>a;
//     cout<<"Enter Second number:- ";
//     cin>>b;
//     r=add(a,b);
//     cout<<"Sum is: "<<r;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//With no argument and return
// #include<iostream>
// using namespace std;
// int add(){
//      int a,b,sum;
//     cout<<"Enter First number:- ";
//     cin>>a;
//     cout<<"Enter Second number:- ";
//     cin>>b;
//     return(a+b);
// }

// int main(){
//    int r;
//     r=add();
//     cout<<"Sum is: "<<r;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//      int arr[6],sumeve=0,sumodd=0;
//     cout<<"Enter elements of an array :- "<<endl;
//     for(int i=0;i<6;i++){
//         cout<<"Enter element "<<i+1<<" = ";
//         cin>>arr[i];
//         if(arr[i]%2==0){
//             sumeve=sumeve+arr[i];
//         }
//             else {
//             sumodd=sumodd+arr[i];
//         }
//     }
//      cout<<"You entered this: ";
//      for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl<<"Sum of even number is: "<<sumeve<<endl;
//      cout<<"Sum of odd number is: "<<sumodd<<endl;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) 
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n,f;
//     cout<<"Enter the value for factorial:- ";
//     cin>>n;
//     f=fact(n);
//     cout<<"Factorial is: "<<f;
// }


// #include<iostream>
// using namespace std;
// class A
// {
// 	public:
// 		int rem,num;
// };

// class B
// {
// 	public:
// 		int a;
// 		void geta(){
// 			cout<<"Enter value of a to convert: ";
// 			cin>>a;
// 		}
// };

// class C:public A,public B
// {
// 	public:
// 		int num=a;
// 		void converge(int num){
// 			if(num>0){
// 				rem=num%2;
// 				num=num/2;
// 				converge(num);
// 				cout<<rem;
// 			}
// 			return;
// 		}
// };

// class D:public C
// {
// 	public:
// 		void setresult(){
// 			converge(num);
// 		}
// };

// int main(){
// 	D obj;
// 	obj.geta();
// 	obj.setresult();
// }



// #include<iostream>
// using namespace std;
// class customer
// {
// 	string name;
// 	int account_number;
// 	int balance;
// 	public:

// 	customer()
// 	{
// 		cout<<"Hello Constructor\n";
// 	}
// };

// int main(){
// 	customer A1;
// }



// #include<iostream>
// using namespace std;
// class customer
// {
// 	string name;
// 	int account_number;
// 	int balance;
// 	public:

// 	customer()
// 	{
// 		name="Rohit";
// 		account_number=5;
// 		balance=100;
// 	}

// 	void display(){
// 		cout<<name<<" "<<account_number<<" "<<balance<<endl;
// 	}
// };

// int main(){
// 	customer A1;
// 	A1.display();
// }


// #include<iostream>
// using namespace std;
// class customer
// {
// 	string name;
// 	int account_number;
// 	int balance;
// 	public:

// 	customer()
// 	{
// 		name="Rohit";
// 		account_number=5;
// 		balance=100;
// 	}
// // Parameterized constructor
// 	customer(string name,int account_number,int balance){
// 		this->name=name;
// 		this->account_number=account_number;
// 		this->balance=balance;
// 	}

// // Contructor Overloading	
// 	customer(string a, int b){
// 		name=a;
// 		account_number=b;
// 	}

// 	void display(){
// 		cout<<name<<" "<<account_number<<" "<<balance<<endl;
// 	}
// };

// int main(){
// 	customer A1(Smit,5,2000);
// 	customer A2(mayur,5);
// 	A1.display();
// }



// #include<iostream>
// using namespace std;
// int main(){
// 	int arr[6]={10,4,1,3,2,7};
// 	for(int i=0;i<5;i++){
// 		int index=i;
// 		for(int j=i+1;j<6;j++){
// 			if(arr[j]<arr[index])
// 			index=j;
// 		}
// 		swap(arr[i],arr[index]);
// 	}
// 	for(int i=0;i<6;i++){
// 		cout<<arr[i]<<" ";
// 	}
// }


// #include<iostream>
// using namespace std;
// int main(){
// 	int arr[12]={2,43,56,43,56,3,4,67,34,65},index;
// 	for(int i=0;i<9;i++){
// 		index=i;
// 		for(int j=i+1;j<10;j++){
// 			if(arr[index]>arr[j]){
// 				index=j;
// 			}
// 		}
// 		swap(arr[i],arr[index]);
// 	}
// 	for(int i=0;i<10;i++){
// 		cout<<arr[i]<<" ";
// 	}
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                             // Vector
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
// 	// create vector , declare
// 	vector<int>A;
// 	vector<int>A1(5,1);
// 	// size and capacity 
// 	cout<<"Size of A: "<<A.size()<<endl;
// 	cout<<"Size of A1: "<<A1.size()<<endl;
// 	cout<<"Capacity of A1: "<<A1.capacity()<<endl;
// 	A.push_back(2);
// 	A.push_back(3);
// 	A1.push_back(19);
// 	cout<<"Size of A: "<<A.size()<<endl;
// 	cout<<"Capacity of A: "<<A.capacity()<<endl;
// 	// Update Value
// 	A1[1]=5;
// 	cout<<"size of v1: "<<A1.size()<<endl;
// 	cout<<"Capacity of v1: "<<A1.capacity()<<"\n";
// 	vector<int>v3={3,54,8,4,6,7,8,65,9};
// 	cout<<"size of v3: "<<v3.size()<<endl;
// 	cout<<"Capacity of v3: "<<v3.capacity()<<"\n";

// 	vector<int>New;
// 	New.push_back(5);
// 	New.push_back(45);
// 	New.push_back(55);
// 	New.push_back(95);
// 	New.push_back(405);
// 	New.pop_back( );
// 	cout<<"Size of New is: "<<New.size()<<endl;
// 	cout<<"Capacity of New is: "<<New.capacity()<<endl;

// 	New.erase(New.begin()+1);
// 	cout<<"Size of New is: "<<New.size()<<endl;
// 	cout<<"Capacity of New is: "<<New.capacity()<<endl;

// 	cout<<"Size of New is: "<<New.empty()<<endl;

// 	cout<<"Elements are: ";
// 	for(int i=0;i<New.size();i++)
// 	cout<<New[i]<<" ";

// 	New.insert(New.begin()+1,50);
// 	cout<<endl<<"After inserting elements are: ";
// 	for(int i=0;i<New.size();i++){
// 		cout<<New[i]<<" ";
// 	}

// 	cout<<endl;
// 	cout<<"Elements are: ";
// 	New[1]=37;
// 		for(int i=0;i<New.size();i++){
// 		cout<<New[i]<<" ";
// 	}
//     cout<<endl;
// 	New.clear();
// 	cout<<"Size of New is: "<<New.size()<<endl;
// 	cout<<"Capacity of New is: "<<New.capacity()<<endl;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                    // Binary Search in Array
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int start,int end,int n,int count){
//     int mid=(start+end)/2;
//     if(end<start)
//     return -1;
//     else if(arr[mid]==n)
//     return mid;
//     else if(n>arr[mid])
//     return binarySearch(arr,(mid+1),end,n,count);
//     else
//     return binarySearch(arr,start,(mid-1),n,count);
// }

// int main(){
//     int arr[ ]={1,2,4,5,6,7,8,9};
//     int mid,start,end,n,count=sizeof(arr);
//     cout<<"Enter the value to search: ";
//     cin>>n;
//     cout<<"Element found at index: "<<binarySearch(arr,0,count-1,n,count);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                     // Add Element at last in Array
// #include<iostream>
// using namespace std;

// int insertsorted(int arr[],int n,int key,int capacity){
// if(n>=capacity)
// return n;
// arr[n]=key;
// return (n+1);
// }

// int main(){
//     int arr[10]={21,32,455,32,232,55},n=6,i,key=34,capacity=sizeof(arr);
//     cout<<"Before Instruction: ";
//     for(i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     n=insertsorted(arr,n,key,capacity);

//     cout<<"\nAfter Insertion: ";
//     for(i=0;i<n;i++)
//     cout<<arr[i]<<" ";
// }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                   //  Deletion Element of array
// #include<iostream>
// using namespace std;

// // Finding Element of Array
// int findElement(int arr[],int n,int check){
//     int i=1;
//     for(int i=0;i<n;i++)
//         if(arr[i]==check)
//         return i;
//         return -1;
// }
//   //  Deletion Element of array
// int deleteElement(int arr[],int n,int check){
//     int pos=findElement(arr,n,check);
//     if(pos==-1){
//     cout<<"Element not found: ";
//     return 0;
//     }
//      int i=1;
//     for(i=pos;i<n-1;i++)
//     arr[i]=arr[i+1];
//     return n-1;
// }

// int main(){
//     int arr[10]={23,45,34,54,66,76,89,90,30,54};
//     int n=sizeof(arr)/sizeof(arr[0]),check=23;   // Doubt in n variable

//     cout<<"Before Deletion of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     n=deleteElement(arr,n,check);

//     cout<<endl<<"After Deletion of Element of array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                             // To insert an Element at any position in Array
// #include<iostream>
// using namespace std;

// int insertElement(int arr[],int n,int pos,int add){
//     int i;
//     for(int i=n-1;i>=pos;i--)
//     arr[i+1]=arr[i];
//     arr[pos]=add;  // Doubt at this line arr[i]=add.
//     return 0;
// }

// int main(){
//     int arr[10]={1,2,3,4,5,6,7};
//     int n=7,add=23,i,pos=2;

//     cout<<"Before adding the element: ";
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
    
//     insertElement(arr,n,pos,add);

//     cout<<endl<<"After addition of element of an array: ";
//     for(int i=0;i<n+1;i++)
//     cout<<arr[i]<<" ";
// }





























