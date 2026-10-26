
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
        
            #include "java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AppUrlGlobals.h"
#include "URLGLOBALS.h"

class Globals
            : public Object
         {

    private: static Globals instance() { return Globals(); }

    public: static Globals getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Globals::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: Globals(){
}


    public: void init(ClassLoader classLoader, std::string pathString){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    AppUrlGlobals appUrlGlobals = AppUrlGlobals();;
    
appUrlGlobals.setWebappPath(pathString);
    
URLGLOBALS::init(appUrlGlobals);
    
WebappClassLoaderInfo::setLoader(classLoader);
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Setting Up AllBinary System Configuration Args: ");
    
stringBuffer.append(pathString);
    
stringBuffer.append(" ClassLoader: ");
    
stringBuffer.append(classLoader.constructor.name.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, commonStrings.INIT);
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil.isEmpty(pathString))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("No Path Provided. Using Process Path: ");
    
stringBuffer.append(pathString);
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(CommonSeps::getInstance().EQUALS);
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
this->logUtil.putF(stringBuffer.toString(), this, commonStrings.INIT);
    

                                    }
                                
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("Webapp Path Set To: ");
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
this->logUtil.putF(stringBuffer.toString(), this, commonStrings.INIT);
    
}


};

            

