
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpData
            : public Object
         {

    private: static HttpData* instance() { static std::unique_ptr<HttpData> value(new HttpData()); return value.get(); }

    public: static HttpData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpData::instance();
    
}


    public: std::string EQUALS;

    public: std::string PARAM_SEP;

    public: std::string URL_PARAM_SEP;

    public: const std::string URL_LABEL = "Url: ";

private: HttpData(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
this->EQUALS= commonSeps->EQUALS;
    
this->PARAM_SEP= commonSeps->AMPERSAND;
    
this->URL_PARAM_SEP= commonSeps->QUESTION;
    
}


};

            

