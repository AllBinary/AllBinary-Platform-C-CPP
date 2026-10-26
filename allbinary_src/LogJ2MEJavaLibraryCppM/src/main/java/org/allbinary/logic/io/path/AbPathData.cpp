
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
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbPathData
            : public Object
         {

    private: static AbPathData instance() { return AbPathData(); }

    public: static AbPathData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathData::instance();
    
}


    public: const std::string EXTENSION_SEP = CommonSeps::getInstance().PERIOD;

    public: const char SEPARATORCHAR = '/';

    public: const std::string SEPARATOR = CommonSeps::getInstance().FORWARD_SLASH;

private: AbPathData(){
}


};

            

