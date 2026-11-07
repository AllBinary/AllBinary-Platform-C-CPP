
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCONTEXT_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCONTEXT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpContext.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"


TransformInfoHttpContext::TransformInfoHttpContext(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfoHttp(databaseHashMap, propertiesHashMap, pageContext), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Database HashMap: ");
    
stringBuffer->append(JavaString::valueOf(databaseHashMap));
    
stringBuffer->append("\nProperties HashMap: ");
    
stringBuffer->append(JavaString::valueOf(propertiesHashMap));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setStoreName(StringUtil::getInstance()->EMPTY_STRING);
    
}


TransformInfoHttpContext::TransformInfoHttpContext(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfoHttp(propertiesHashMap, pageContext), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(JavaString::valueOf(propertiesHashMap)), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setStoreName(StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpContext::getPath() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->INSTALLPATH);
    
stringBuffer->append(this->getStoreName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpContext::getTemplateFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpContext::getObjectConfigFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpContext::getDataFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getDataFile());
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCONTEXT_CPP
