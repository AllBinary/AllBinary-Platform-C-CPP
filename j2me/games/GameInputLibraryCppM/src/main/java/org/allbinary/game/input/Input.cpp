
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Input
            : public Object
         {

    private: int32_t id= 0;

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

public: Input(int32_t id, std::string name){
this->setId(id);
    
this->setName(name);
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    private: void setId(int32_t key){
this->id= key;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    private: void setName(std::string keyName){
this->name= keyName;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Name: ");
    
stringBuffer.append(this->getName());
    
stringBuffer.append(" Id: ");
    
stringBuffer.appendint(this->getId());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

