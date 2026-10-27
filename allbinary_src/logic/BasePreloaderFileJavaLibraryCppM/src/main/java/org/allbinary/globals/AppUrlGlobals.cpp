
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsInterface.h"
//implements
class AppUrlGlobals: public UrlGlobalsInterface {

    public: static AppUrlGlobals* NULL_APP_URL_GLOBALS() { static std::unique_ptr<AppUrlGlobals> value(new AppUrlGlobals()); return value.get(); }

    private: std::string path = StringUtil::getInstance()->EMPTY_STRING;

    public: bool isTestingMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string getWebappPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setWebappPath(std::string path){
this->path= path;
    

                        if(!(this->path.endsWith("\\") || this->path.endsWith("/")))
                        
                                    {
                                    this->path= this->path +"\\";
    

                                    }
                                
}


    public: std::string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getMainPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}


};

            

