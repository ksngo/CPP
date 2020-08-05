#include <iostream>
#include <string>
#include <array>

using namespace std;

class Date{
    public:
        Date() = default;
        explicit Date(string input);

    
        unsigned year = 1970;
        unsigned month = 1;
        unsigned day =1;

        void Print();

    private:

        array<string,12> mth_array{"Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        unsigned MthConvert(string mth_extract);



};

Date::Date(string input){
    auto mth_delimit_index = input.find_first_of(",/");
    string mth_extract = input.substr(0,mth_delimit_index);

    month = MthConvert(mth_extract);

    auto day_delimit_index = input.find_first_of(",/", mth_delimit_index+1);
    string day_extract = input.substr(mth_delimit_index+1, day_delimit_index);
    day = stoi(day_extract);

    string year_extract = input.substr(day_delimit_index+1);
    year = stoi(year_extract);


}

unsigned Date::MthConvert(string mth_extract){


    if(isdigit(mth_extract[0])){
        
        return stoi(mth_extract);
    } 
    for(size_t i =0; i!= 12; ++i){
        if(mth_extract == mth_array[i]){
            return i+1;
        }
    }
    return 0;
}

void Date::Print(){
    cout<<"year: "<<year<<" Month: "<<month<<" day: "<<day<<endl;
}