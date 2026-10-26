
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
        
            #include "java/lang/Throwable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <playn/core/PlayN.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName){

    std::string className = PreLogUtil::getClassName(anyType);;
    

                        if(false)
                        
                                    {
                                    className= CommonStrings::getInstance().EMPTY;
    

                                    }
                                
className= StringMaker().append(className).append(CommonSeps::getInstance().FORWARD_SLASH).append(StringUtil::getInstance().toString(anyType)).toString();
    

    std::string message = LogFormatUtil::getInstance().getS(className, functionName, specialMessage);;
    
PlayN::getInstance().log().debug(PreLogUtil::LOG_SUCCESS +message);
    
}


    private: static const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = PreLogUtil::getClassName(anyType);;
    

                        if(false)
                        
                                    {
                                    className= CommonStrings::getInstance().EMPTY;
    

                                    }
                                
className= StringMaker().append(className).append(CommonSeps::getInstance().FORWARD_SLASH).append(StringUtil::getInstance().toString(anyType)).toString();
    

    std::string message = LogFormatUtil::getInstance().get(className, functionName, specialMessage, exception);;
    
PlayN::getInstance().log().error(PreLogUtil::LOG_SUCCESS +message, *dynamic_cast<Throwable*>(exception));
    
}


    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName){

    std::string message = LogFormatUtil::getInstance().getS(className, functionName, specialMessage);;
    
PlayN::getInstance().log().debug(PreLogUtil::LOG_SUCCESS +message);
    
}


    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception){

    std::string message = LogFormatUtil::getInstance().get(className, functionName, specialMessage, exception);;
    
PlayN::getInstance().log().error(PreLogUtil::LOG_SUCCESS +message, *dynamic_cast<Throwable*>(exception));
    
}


    /*actual*/ public: static std::string getClassName(Object* anyType)
                //native - START
                {
                    
                }



                //native - END
                

public: PreLogUtil(){
}


};

            

