
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Constructor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#include "org/allbinary/logic/system/loader/AbeClassLoader.h"

class AbeFactory
            : public Object
         {

    private: static AbeFactory* instance() { static std::unique_ptr<AbeFactory> value(new AbeFactory()); return value.get(); }

    public: static AbeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: bool useCustomLoader = false;

private: AbeFactory(){
}


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string className){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new (this->getClass() as any)();;
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("Failure for: " +className, this, "getInstance(classname)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("Failure for: " +className, this, "getInstance(classname)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string className, std::vector<Class*> classes, std::vector<Object*> params){

    Constructor* constructor = 
                null
            ;;
    

        try {
            
    ClassLoader* parent = WebappClassLoaderInfo::getLoader();;
    

                        if(this->useCustomLoader)
                        
                                    {
                                    
    ClassLoader* loader = new AbeClassLoader(parent, AbKeys::getInstance()->getKey(abeClientInformation, className));;
    

    Class* myClass = loader->loadClass(className);;
    
constructor= myClass->getConstructor(classes);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return constructor->newInstance(params);;
    

                                    }
                                
                        else {
                            
    Class* myClass = parent->loadClass(className);;
    
constructor= myClass->getConstructor(classes);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return constructor->newInstance(params);;
    

                        }
                            

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failure for: ");
    
stringBuffer->append(className);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(ConstructorUtil::view(constructor, CommonSeps::getInstance()->NEW_LINE));
    
this->logUtil->put(stringBuffer->toString(), this, "getInstance(className,params)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failure for: ");
    
stringBuffer->append(className);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(ConstructorUtil::view(constructor, CommonSeps::getInstance()->NEW_LINE));
    
this->logUtil->put(stringBuffer->toString(), this, "getInstance(className,params)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* getClass()(AbeClientInformationInterface* abeClientInformation, std::string className){

        try {
            
    ClassLoader* parent = WebappClassLoaderInfo::getLoader();;
    

                        if(this->useCustomLoader)
                        
                                    {
                                    
    ClassLoader* loader = new AbeClassLoader(parent, AbKeys::getInstance()->getKey(abeClientInformation, className));;
    

    Class* c = loader->loadClass(className);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return c;
    

                                    }
                                
                        else {
                            
    Class* c = parent->loadClass(className);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return c;
    

                        }
                            

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("Failure for: " +className, this, "getClass(className)", &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("Failure for: " +className, this, "getClass(className)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

