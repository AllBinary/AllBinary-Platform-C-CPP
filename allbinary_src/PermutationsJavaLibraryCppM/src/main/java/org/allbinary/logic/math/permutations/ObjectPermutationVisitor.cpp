
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ObjectPermutationVisitor: public Visitor {

    protected: std::vector<Object*> data;

public: ObjectPermutationVisitor(std::vector<Object*> data){
this->data= data;
    
}


    private: StringMaker stringBuilder = StringMaker();

    public: Object* visit(Object* anyType){
this->stringBuilder.delete(0, stringBuilder.length());
    
this->print(this->data, stringBuilder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


    public: void print(std::vector<Object*> data){

    StringMaker stringBuilder = StringMaker();;
    
this->print(data, stringBuilder);
    
}


    public: void print(std::vector<Object*> data, StringMaker stringBuilder){

    TsUtil tsUtil = TsUtil::getInstance();;
    

    int32_t size = data.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
stringBuilder.appendint(tsUtil.hashCode(data[i]!));
    
stringBuilder.append(CommonSeps::getInstance().SPACE);
    
}

console.log(stringBuilder.toString());
    
}


};

            

