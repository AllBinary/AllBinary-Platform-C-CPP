
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntPermutationVisitor: public Visitor {

    protected: std::vector<int32_t> data;

public: IntPermutationVisitor(std::vector<int32_t> data){
this->data= data;
    
}


    private: StringMaker stringBuilder = StringMaker();

    public: Object* visit(Object* anyType){
this->stringBuilder.delete(0, stringBuilder.length());
    
this->print(this->data, stringBuilder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


    public: void print(std::vector<int32_t> data){

    StringMaker stringBuilder = StringMaker();;
    
this->print(data, stringBuilder);
    
}


    public: void print(std::vector<int32_t> data, StringMaker stringBuilder){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    int32_t size = data.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
stringBuilder.appendint(data[i]!);
    
stringBuilder.append(commonSeps.SPACE);
    
}

console.log(stringBuilder.toString());
    
}


};

            

