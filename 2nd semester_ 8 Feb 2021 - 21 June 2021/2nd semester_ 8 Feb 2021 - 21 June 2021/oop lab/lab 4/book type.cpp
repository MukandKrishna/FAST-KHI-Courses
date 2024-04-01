#include <iostream>
#include <string>
using namespace std;

class BookType
{
	private:
    string Title;

    string Authors[4];
    string publisher;

    int ISBN;

    double price;

    int NumOfCopies;
    int AotherMember;
public:
    void setTitle(string t);
021
    string getTitle();
022
    void showTitle();

    void setAuthors(string A[4]);
025
    string getAuthors();
026
    void showAuthors();
    void setpublisher(string p);
029
    string getpublisher();
030
    void showpublisher();

    void setISBN(int I);
033
    int getISBN();
034
    void showISBN();

    void setprice(double r);

    double getprice();
039
    void showprice();
    void setNumOfCopies(int N);
043
    int getNumOfCopies();
044
    void showNumOfCopies();
    void setAotherMember( int M);
047
    int getAotherMember();
048
    void showAotherMember();

    BookType(string t="",string A[4]=("","","",""),string p="",int I=0, double r=0, int N=0, int M=0);

    ~BookType();

};
054
 
055
void BookType::setTitle(string t){
056
     
057
    Title=t;
058
}
059
 
060
string BookType::getTitle(){
061
    return Title;
062
}
063
 
064
void BookType::showTitle(){
065
 
066
    cout<<"Title"<<Title<<endl;
067
 
068
}
069
void BookType::setAuthors(string A[4]){
070
 
071
    for(int i=0;i<4;i++)
072
        Authors=A[i];
073
}
074
string BookType::getAuthors(){
075
 
076
    return Authors;
077
}
078
 
079
void BookType::showAuthors(){
080
 
081
    cout<<"Authors "<<Authors<<endl;
082
 
083
}
084
 
085
void BookType::setpublisher(string p){
086
 
087
    publisher=p;
088
 
089
 
090
}
091
 
092
string BookType::getpublisher(){
093
 
094
    return publisher;
095
 
096
}
097
 
098
void BookType::showpublisher(){
099
 
100
    cout<<"publisher"<<publisher<<endl;
101
 
102
}
103
void BookType::setISBN(int I){
104
    ISBN=I;
105
}
106
int BookType::getISBN(){
107
 
108
    return ISBN;
109
 
110
}
111
 
112
void BookType::showISBN(){
113
 
114
    cout<<"ISBN"<<ISBN<<endl;
115
}
116
 
117
void BookType::setprice(double r){
118
 
119
    price=r;
120
 
121
}
122
 
123
double BookType::getprice(){
124
 
125
    return price;
126
 
127
}
128
 
129
void BookType::showprice(){
130
 
131
    cout<<"price"<<price<<endl;
132
 
133
}
134
 
135
void BookType::setNumOfCopies(int N){
136
 
137
    NumOfCopies=N;
138
 
139
}
140
int BookType::getNumOfCopies(){
141
 
142
    return NumOfCopies;
143
}
144
void BookType::showNumOfCopies(){
145
 
146
    cout<<"NumOfCopies"<<NumOfCopies<<endl;
147
 
148
}
149
 
150
void BookType::setAotherMember(int M){
151
 
152
    AotherMember=M;
153
}
154
 
155
int BookType::getAotherMember(){
156
 
157
    return AotherMember;
158
}
159
 
160
void BookType::showAotherMember(){
161
 
162
    cout<<"AotherMember"<<AotherMember<<endl;
163
 
164
}
165
 
166
BookType::BookType(string t,string A[4],string p, int I, double r, int N, int M){
167
 
168
    Title=t;
169
    Authors=A[4];
170
    publisher=p;
171
    ISBN=I;
172
    price=r;
173
    NumOfCopies=N;
174
    AnotherMember=M;
175
}
176
BookType::~BookType(){
177
 
178
    cout<<"**************"<<endl;
179
}
180
 
181
int main()
{
    BookType  BOOK;

    BookType Book1();

    BookType Book2("Sweet",("lil,lool,lal,ln"),"ssss",2928830847,8,3,2);

    Book1.setTitle("Sweet");

    Book1.setAuthors("lil,lool,lal,ln");

    Book1.setpublisher("ssss");

    Book1.setISBN("2928830847");

    Book1.setprice("8");

    Book1.setNumOfCopies("3");

    Book1.setAnotherMember("2");

    Book1.showTitle();

    Book1.showAuthors();

    Book1.showpublisher();

    Book1.showISBN();

    Book1.showprice();

    Book1.showNumOfCopies();

    Book1.showAnotherMember();

    return 0;

}

