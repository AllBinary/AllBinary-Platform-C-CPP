
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CacheType
            : public Object
         {

    private: std::string vendor;

    private: std::string type;

public: CacheType(std::string vendor, std::string type){
this->vendor= vendor;
    
this->type= type;
    
}


    public: std::string getVendor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vendor;
    
}


    public: std::string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("CacheType: Vendor: ");
    
stringBuffer.append(this->getVendor());
    
stringBuffer.append(" Type: ");
    
stringBuffer.append(this->getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

