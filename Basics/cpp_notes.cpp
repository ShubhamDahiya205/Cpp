#include <bits\stdc++.h>
#include <iostream>                             // includes input-output fxs header file
#include <vector>
#include <string>                               // for std::getline()
#include <cmath>
#include <ctime>                                // for srand(time(NULL))
#include <iomanip>                              // for std::setprecision(decimal places) << std::fixed << var
#include <limits>                               // for std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '/n')
using namespace     std;

/* Namespace allows identically named entities as long as their namespaces are different */ 
namespace first_ns{
    using namespace std;                        // cout instead of std::cout
    using std::cout;                            // same
    int z = 1;                                  
}
bool comp();
void fx_name1();
typedef std::vector<std::pair<std::string, int>> pairlist_t;//alias for datatype,ease&readability 
using text_t = std::string;                     // like typedef but works better w/ template

int main(){                                     // main fx()
    using namespace first_ns;                   // this or namespace1::var1
    int x, y;                                   // declaration
    unsigned long a;                            // only positive values
    long long x;
    float a; double b;                          // diff range
    signed int x;                               // both positive and negative values             
    x = 1;                                      // assignment                   
    y = 2;                                      //x (+ - * / %) 1, x += 1, x++
    int sum = x + y;                            // decimal places are truncated in int
    double price = (int) 1.23;                  //double = float, int/int is converted to int
    char initial = 'S';                         // single char only, double for string     
    char d = 100;                               //ascii value                     
    bool t_false = true;                        // boolean
    std::string first_name = "Bum";             // object that stores multiple char, in double quotes
    const double PI = 3.14159;                  // read only, can't be modified. Useful for references and pointers
    int percentage = (x / (double)y) * 100;     // int/int will be int

    std::cout << "Hi" << z << '\n';   /* stndard char output, >> output, namespace1::var1 ; line terminator */
    std::cout <<"What's you first Name" << std::endl;     // \n is better, endl flushes output buffer
    
    int age;
    std::string full_name;                      // it's an array of characters
    std::cin >> age;           // input and extraction operator >>, cin stops reading at space, 
//cin gives a \n in inner input buffer, getline accepts \n as input, to prevent, add >> std::ws to getline
    std::cout << "Full name : ";
    std::getline(std::cin >> std::ws, full_name); // reads space too, 
    std::cout << full_name;
/* 
    fail > clear > ignore()      
    std::cin.fail()             : if wrong data type entered
    std::cin.clear();           : resets error flags when cin fails to interpret the input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    it discards unwanted characters remaining in input buffer after an input operation
    especially when dealing with invalid input or clearing buffer for next input
    ignore():   Skips characters in the input stream up to a specified
                limit or until a specified delimiter (like \n) is found.
    numeric_limits<std::streamsize>::max(): Provides the maximum number of characters to ignore.
              This effectively ensures all characters are discarded until the delimiter (e.g., newline) is reached.
    >if std::cin fails > invalid chars reamin in input buffer, ignore clears them
    also if user enters more than expected > it ensures they are cleared as well
    fflush(stdin);              : clears the input buffer

    std::min/max(int1, int2); pow(2,4), sqrt/abs/round/ceil/floor
    if(condn) {code} else if() {} else {}
    switch(var_to_match) {
        case value_to_be_compared_to :
            code
            break;
        default:
            if none match ..
            break;
    }
    ternary operator ? (like if else)  (condition) ? expression1_if_TRUE : expression2_if_FALSE;
    && and, || or, ! not        logical operators

    concatinated_str = str1 + str2
    methods of string object    : all these make changes to original, don't return new string
        length/empty/clear/append/at(index)/insert(index, char)/find(char)/erase(0,3) removes first 3
    while (condition) {}
    do {} while ();
    for (int i = 1; i <= 3; i++) {} 
    break, continue
    srand(time(NULL or 0))      : time can be used as seed       
    int random1 = rand() % 6 +1 : rand gives 0-32667
    returned_value = fx_name1(name, age)

    fx name + parameters= fx signature, fx name can be same, signature must be unique
    local(in a fx) > global var (all fx), scope of var,
    ::var1                       scope resolution operator, it uses global version of var instead of local
    avoid declaring global var, bcz it pollutes global namespace, and these var are less secure

    std::cout << std::fixed << std::setprecision(2)  << var;   :upto 2 decimal places
    fixed : means fixed-point notation (rather than scientific)
    a = std::round(a * 100) / 100


    array :
    data_type array1[] = { dt1, dt2..};               : elements must be of same data type
    array1 gives memory address of array
    array1[index] gives element
    array1[0] = new_dt
    int array2[5];                                  : fixed size of array
    array1[index].empty()                           : T/F
    arr.size()
    
    sizeof(var/data_type)                           : returns size in bytes
    sizeof(array1) / sizeof(data_type of array)     : gives length of array 

    for (data_type_of_array element_var : array1 ){}    : iterating over array using for each
    for (int i = 0; !array[i].empty() ; i++)            : loop continues till array[i] gives an empty element

    when array is passed to a fx, it decays to a pointer, that points to the address, where array begins. It doesn't know size of array
    so, pass size of array as another parameter to the fx

    fill( array1, array1 + SIZE/2, element)             : fills the array1 0 to SIZE/2 - 1 index with the same element1
    fill( array1 + SIZE/2, array1 + SIZE, element2)     : fills the rest with the element2

    int array_2d[ row size ][ column size ]             : matrix, row size not neccessary

    memory address : location in memory where data is stored;       & : address of operator
    std::cout << &var1 ;

    normally when we pass variables to fx, we pass values (copy of values) of the var, they've different memory addresses 
    to pass original value : pass by reference : use memory address
    add     &       to variables at defn of fx
    *  :     dereference operator
    for arrays no need to add &, it is anyways passed by reference

    Pointer : var that stores memory address of another var, sometimes it is easier to work with address
   
    string var1 = "Bro";
    string *p_var1 = &var1;     
    cout << p_var1 ;        gives address of var1
    cout << *p_var1 ;       gives value stored at address p_var1

    arrays are already an address, so you dont need to use & for them
    int *p_array = array;

    Null value means something has no value
    nullptr  : null pointer is a pointer holding null value, it is not pointing at anything
    nullptr are helpful when determining whether a pointer has been assigned an address or not
    dereferencing a nullptr or a pointer that hasn't been assigned any address i.e pointing to free memory
    it leads to unexpected issues( *pointer )
   
    int *pointer = nullptr ;
    pointer = &var1;
    if (pointer == nullptr){
        cout << "Address was not assigned";
    }


    dynamic memory : is the memory that is allocated after the program is compiled and running. allocates memory to heap instead of stack
    use 'new' keyword : useful when we dont know how much memory we need, (must use delete as well)
    int *pNum = NULL;
    pNum  = new int;            // we are storing the integer at the address pNum;  not a particular value, we're storing memory of 1 integer
    *pNum = 21;                 //store value in pNum any time
    ...
    delete pNum;                //deleting the pointer, freeing up the memory at that address to prevent memory leak,

    int *pNum = NULL;           // declaring a Null pointer
    pNum = new int[size];       // pointer now pointst to an array of length = size, 
    for(){
        std::cin >> pNum[i];
    }
    ..
    delete[] pNum              // for deleteing array

Recursion : less code, cleaner, useful for sorting and searching algo but more memory consumption, slower
function tmeplate: describes what a fx looks like, used to generate as many overloaded fxs as needed, each using diff data types

    int max(int x, int y){              // now if i dont wanna repeat this for double and char data type as well
        return (x > y) ? x : y;     
    }
    template <typname T>                //decleration of T : functional template genrator
    T fx1(T x){}                        // T : data type can be any one

    template <typename T1, typename T2>             
    auto max(T1 x, T2 y){                           
        return (x > y) ? x : y;
    }
    
    structure : groups related variables under one name, can contain diff dt types, variables inside are called members, 
        to access memeber : Class Member Access Operators 
    
    struct Student{            // like class, it is like a new datatype and can be used to declare more variables, that have members
        std::string name;      // name is a member
        double gpa;
        bool enrolled = true;  // default value = true
        }

    Student st1;
    st1.name = "name1";
    print_gpa(&st1)

    void print_gpa(Student &st){
        st1.gpa;
    }

    enums - enumeration : is a user defined data type, that contains paired named-integer constants
    
    enum Day { sunday = 0, monday = 1, ....}    // if you don't assign, there's implicit association to 0,1,2..
    int main() { 
    Day today = monday;       // we can't use string for switch case
    switch (today){           // today i.e. sunday is inherently associated with the integer 0
        case "sunday": ...    // case 0 is also valid
        break;
        }
        
    }

    Object- collection of attributes (properties) and methods (fxs) (think of objects as real life obj : Dog : name,age,breed; bark, sit, fetch)
    Class - blueprint to create objects
    method : fx that belongs to a class
    constructor : special method that is automatically called when an object is instantiated
    getters and setter come under abstraction (i.e. hiding any unnecessary data from outside the class)
    getters : fx that makes a private attribute readable
    setters : fx that makes a private attribute writable


    class Human{
        private:
            double gpa = 9.328;
        double get_gpa(){
          return gpa;    
        }
        void set_gpa(double gpa){
            if (gpa < 10){
                this->gpa = gpa;
            }  else {
                this->gpa = 10;  
            }
    }

        public:            //public access modifier, methods and atts to be publically accessible
            std::string name;
            std::string occupation;
            int age;

            void eat(){
                std::cout << "This person is eating\n";
            void drink(){
                std::cout << "This person is drinking\n";
            void sleep(){
                std::cout << "This person is sleeping\n";
           }
        Student(std::string name, int age){      \\constructor: if Student(std::string x, int y){
            std::cout << "Name is Slim Shady";   
            this->name = name;          name = x;
            this->age = age;            age = y;
        }
        Student(std::string occupation){    \\ overloading constructor: multiple constructors with the same name but diff parameters
            std::cout >> "Occupation is Rap";
            this->occupation = occupation;
        }
        Student(){}
        };
    Human human1("John Doe", 28);
    human1.occupation = "Prompt Engineer"
    human1.eat();

    class Topper : public Student{  \\ just creating a topper object will make him have attributes and methods that student has
        public:
            void study(){}
    };
    
    Containers

    Pairs:
    pair< datatype1, datatype2> var_name = { value1, value2 }
    var_name.first  : gives first element

    pair<int, int> arr[] = { array of pairs }
    arr[1].second

    
    Vector : dynamic : size can be increased anytime
    vector<datatype> var_name;
    var_name.push_back(1);          : appends at last
    var_name.emplace_back(3);       : appends at last, faster than pushback

    vector<pair<int, int>> v1;
    v1.push_back( {1, 2} );
    v1.emplace_back( 1, 2 );

    vector<int> v1(5);              : container with 5 instances of 0/garbage value depending on compiler, pushback still works
    vector<int> v1(5, 100);         : {100, 100, 100, 100, 100}
    vector<int> v2(v1);             : v2 will be a copy of v1
    
    v2[0] / v2.at(0)
    v.back() : gives last element

    vector<int>::iterator it = v.begin() : v.begin() gives the memory address of first element of vector v
    cout << *(it) << '\n';
    it++;
    v.begin()/end()/rend()/       : end() points to memeory AFTER the last element, reverse-end points to memory BEFORE first element, 
    v.rbegin()                    : reverse begin points to memory of last element, it++ will move to 2nd last

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){cout << *(it);}
    for (auto it = v.begin(); it != v.end(); it++){cout << *(it);}
    for (auto it : v){cout << it;} : not a pointer anymore

    auto var_name = data;  auto automatically assigns data-type according to the data

    v.erase(memory address of element you want to be removed);
    v.erase(starting address, address after the ending address);

    v.insert(address, element);
    v.insert(address, no. of elements to be inserted, element);   it will insert 'n' times the same element at that location
    v.insert(address, v1.begin(), v1.end());                    it will insert the entire vector inside v

    v.size()/pop_back()/clear()     : clear makes it an empty vector
    v.empty() :
    v.swap(v2)                      : swaps both vectors
    
    List : dynamic, 
    list<data_type> ls;             
    ls.push_back(element)/emplace_back()/push_front(element) : push front inserts at beginning, much faster than insert
    ls.emplace_front(element1)
    begin/end/clear/size/empty/rend/rbegin

    Dequeue : same as list, methods too

    Stack : LIFO last in first out, it doesn't have index, all methods in O(1)
    stack<int> st;
    st.push(1)      {1}
    st.push(2)      {2, 1}
    st.emplace(3)   {3, 2, 1}
    st.top()      : gives 3
    st.pop()      : gives 3, and dlts it from stack
    st.size()/empty()/swap()

    Queue : FIFO first in first out,
    queue<int> q;
    push(1), push(2), emplace(3),  {1, 2, 3}
    back() gives last entered element : 3
    front() gives first entered element : 1
    pop() : pops out first element
    size/swap/empty

    Priority Queue : element with largest value stays at the top, {10, 4, 2, 1}
    priority_queue<dt> pq; (max heap)
    push/emplace/top/pop/size/swap/empty  : pop pops out largest element, Push O(log(n)), top O(1), pop O(log(n))

    to make queue with minimum element at the top (min heap)
    priority_queue<int, vector<int>, greater<int>> pq;

    Set : stores in sorted order and only unique element {1, 2 , 3, 4}, all methods O(log n)
    set<int> set1;
    insert(element)/emplace()/begin/end/rbegin/rend/size/erase(5 or address)/erase(address1, add2):deletes elements from 1 to address before 2
    count(2) : 1 or 0
    auto it = set1.find(3);     Returns an iterator that points to address of 3, if 3 not found, it returns set1.end()
    set.lower_bound(n) : returns the index s.t. arr[index] >= n, else size of array
    set.upper_bound(n) : retunrs

    Multiset : same as set, but duplicates also allowed
    erase(element) : erases all occurances of the element
    erase(address) : only1
    erase(starting address, last - 1)

    Unordered Set : same as set but order is random, all methods O(1),(rarely the worst case O(N)) lowerbound and upperbound don't work
    unordered set<int> set1;
 
    map : dictionary, unique keys in sorted order, pair of key and value, O(log N)
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.insert({2, 3});
    mpp.emplace({3, 4});  { {1, 2},  {2, 3}, {3, 4} }

    for (auto it: mpp){ it.first, it.second....}

    mpp.find(key)

    MultiMap : same as map, but can store duplicate keys

    Unorderedmap : same as map, but randomised order, O(1), worst case blue moon : O(N)

    int a[4] = ...
    sort(a.begin(), a.end())        : sorts the elements between these iterators
    sort(a.begin() + 2, a.end(), greater<int>);  : reverse sort (descending order)

    for custom sorting rules use self made comparator : comp : it's a boolean function
    sort(p, p+n, comp); if the rule was "sort acc to 2nd element of pair, if same:sort acc to first element in desceneding"
    comp takes two elements of container, returns true if correct order, returns false if the two elements need to be swapped.

    setbits : '1', unsetbtis '0'
    int count = __builtin_popcount(7); :binary of 7= 111; returns no. of setbits ('1') = 3
    int count = __builtin_popcount(6); :binary of 6= 110; returns no. of setbits ('1') = 2
    long long a= 65264198135;
    __builtin__popcountll()

    string s = "123"; no. of permutations = 3! = 6
    do{
    cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));   :after all permutations, it returns false
    
    next_permutation gives the next dictionary permutation untill the end of the dict, so to get all permutations, string must be sorted

    int max_i = *max_element( first iterator, last iterator + 1);
    int min_i = *min_element( first iterator, last iterator + 1);




*/
    
    return 0;                               
}

int fx_name1(std::string name, int age){
    std::cout << "Bla bla" << name << age;
    if (name == "Natsuki Subaru") {
        return 100000001;
    }
    else {
        return 1;
    }
}
void fx_2(int integer1){}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second){return true;}
    if (p1.second > p2.second){return false;}
    if (p1.first > p2.first){return true;}
    return false;   
}