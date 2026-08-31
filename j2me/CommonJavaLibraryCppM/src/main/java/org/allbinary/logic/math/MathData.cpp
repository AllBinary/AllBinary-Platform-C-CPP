
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MathData
            : public Object
         {

    private: static MathData instance() { return MathData(); }

    public: static MathData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MathData::instance();
    
}


    public: std::string EQUALS;

    public: const std::string PLUS = "+";

    public: const std::string GREATER_THAN = ">";

    public: std::string MINUS;

    public: std::string DIVIDE;

    public: std::string MULTIPLY;

private: MathData(){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
this->EQUALS= commonSeps.EQUALS;
    
this->MINUS= commonSeps.DASH;
    
this->DIVIDE= commonSeps.FORWARD_SLASH;
    
this->MULTIPLY= CommonPhoneStrings::getInstance().STAR;
    
}


};

            

