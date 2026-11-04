
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
        



        #ifndef ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_CPP
        #define ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/CustomLoaderHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CustomLoaderHelper::CustomLoaderHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


CustomLoaderHelper::CustomLoaderHelper() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto CustomLoaderHelper::getWebappPath() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return URLGLOBALS::getWebappPath();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    auto CustomLoaderHelper::setWebappPath(std::string path) -> void{

        try {
            
    AppUrlGlobals* urlGlobals = new AppUrlGlobals();;
    
urlGlobals->setWebappPath(path);
    
URLGLOBALS::init(urlGlobals);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setWebappPath()", &e);
    

                                    }
                                
}

}




        #endif //ADMIN_TAGHELPERS_CUSTOMLOADERHELPER_CPP
