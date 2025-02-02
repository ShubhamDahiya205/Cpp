#include <iostream>                             // includes input-output fxs header file
#include <vector>
#include <string>                               // for std::getline()
#include <cmath>
#include <ctime>                                // for srand(time(NULL))
#include <iomanip>                              // for std::setprecision(decimal places) << std::fixed << var
#include <limits>                               // for std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '/n')

/* Namespace allows identically named entities as long as their namespaces are different */ 
namespace first_ns{
    using namespace std;                        // cout instead of std::cout
    using std::cout;                            // same
    int z = 1;                                  
}

void fx_name1();
typedef std::vector<std::pair<std::string, int>> pairlist_t;//alias for datatype,ease&readability 
using text_t = std::string;                     // like typedef but works better w/ template

int main(){                                     // main fx()
    using namespace first_ns;                   // this or namespace1::var1
    int x, y;                                   // declaration
    x = 1;                                      // assignment                   
    y = 2;                                      //x (+ - * / %) 1, x += 1, x++
    int sum = x + y;                            // decimal places are truncated in int
    double price = (int) 1.23;                  //double = float, int/int is converted to int
    char initial = 'S';                         // single char only     
    char d = 100;                               //ascii value                     
    bool t_false = true;                        // boolean
    std::string first_name = "Bum";             // object that stores multiple char, in double quotes
    const double PI = 3.14159;                  // read only, can't be modified
    int percentage = (x / (double)y) * 100;     // int/int will be int

    std::cout << "Hi" << z << '\n';   /* stndard char output, >> output, namespace1::var1 ; line terminator */
    std::cout <<"What's you first Name" << std::endl;     // \n is better, endl flushes output buffer
    
    int age;
    std::string full_name;           
    std::cin >> age;           // input and extraction operator >>, cin stops reading at space, 
//cin gives a \n in inner input buffer, getline accepts \n as input, to prevent, add >> std::ws to getline
    std::cout << "Full name : ";
    std::getline(std::cin >> std::ws, full_name); // reads space too, 
    std::cout << full_name;

/* fail > clear > ignore()     \\fail may not be necessary
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
    
    sizeof(var/data_type)                           : returns size in bytes
    sizeof(array1) / sizeof(data_type of array)     : gives length of array 

    for (data_type_of_array element_var : array1 ){}    : iterating over array using for each
    for (int i = 0; !array[i].empty() ; i++)            : loop continues till array[i] gives an empty element

    when array is passed to a fx, it decays to a pointer, that points to the address, where array begins. It doesn't know size of array
    so, pass size of array as another parameter to the fx

    fill( array1, array1 + SIZE/2, element)             : fills the array1 0 to SIZE/2 - 1 index with the same element1
    fill( array1 + SIZE/2, array1 + SIZE, element2)     : fills the rest with the element2

    int array_2d[ row size ][ column size ]             : matrix, row size not neccessary

    
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