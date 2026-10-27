
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
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"

class TransformInfoHttpContext: public TransformInfoHttp {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: TransformInfoHttpContext(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfoHttp(databaseHashMap, propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Database HashMap: ");
    
stringBuffer->append(databaseHashMap->toString());
    
stringBuffer->append("\nProperties HashMap: ");
    
stringBuffer->append(propertiesHashMap->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setStoreName(StringUtil::getInstance()->EMPTY_STRING);
    
}


public: TransformInfoHttpContext(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : TransformInfoHttp(propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Properties HashMap: " +propertiesHashMap->toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setStoreName(StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    private: std::string getPath(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->INSTALLPATH);
    
stringBuffer->append(this->getStoreName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath* getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this->getPath(), this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath* getObjectConfigFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this->getPath(), this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath* getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this->getPath(), this->getDataFile());
    
}


};

            

