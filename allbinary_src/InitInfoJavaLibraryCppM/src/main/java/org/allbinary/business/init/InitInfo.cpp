
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/InitInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/InitInfoEntity.h"

auto InitInfo::instance_owner() -> InitInfo* { static std::unique_ptr<InitInfo> value(new InitInfo()); return value.get(); }
InitInfo* InitInfo::instance = InitInfo::instance_owner();

    auto InitInfo::getInstance() -> InitInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo::instance;
    
}


InitInfo::InitInfo(){
}


                //@Throws(InitException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitInfo::set() -> void{

        try {
            
    InitInfoEntity* initInfoEntity = new InitInfoEntity();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("created entity", "InitInfo", "set()");
    

                                    }
                                

                        if(!initInfoEntity->is())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("adding", "InitInfo", "set()");
    

                                    }
                                
initInfoEntity->add();
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("update", "InitInfo", "set()");
    

                                    }
                                
initInfoEntity->update();
    

                        }
                            
this->hasRead= false;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("error", "InitInfo", "set()", &e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitInfo::set(HashMap<Object*, Object*>* hashMap) -> void{

        try {
            this->testing= hashMap->get(this->TESTING);
    
this->mainPath= new AbPath(hashMap->get(this->MAINPATH), StringUtil::getInstance()->EMPTY_STRING);
    
this->testHtmlPath= new AbPath(hashMap->get(this->TESTHTMLPATH), StringUtil::getInstance()->EMPTY_STRING);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("error", "InitInfo", "set()", &e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitInfo::get() -> void{

        try {
            this->testing= 
                                        nullptr
                                    ;
    
this->mainPath= 
                                        nullptr
                                    ;
    
this->testHtmlPath= 
                                        nullptr
                                    ;
    

    InitInfoEntity* initInfoEntity = new InitInfoEntity();;
    
initInfoEntity->get();
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("error", "InitInfo", "set()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitInfo::setHasRead(bool value) -> void{
this->hasRead= value;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InitInfo::updateIfNeeded() -> void{

        try {
            
                        if(!this->hasRead)
                        
                                    {
                                    this->hasRead= true;
    
this->get();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("error", "InitInfo", "updateIfNeeded()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}

}


    auto InitInfo::isTesting() -> bool{

        try {
            this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil::getInstance()->getFromString(this->testing);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("error", "InitInfo", "updateIfNeeded()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    auto InitInfo::getTesting() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testing;
    
}


    auto InitInfo::getTestHtmlPath() -> std::string{
this->updateIfNeeded();
    

                        if(this->testHtmlPath != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHtmlPath->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto InitInfo::getMainPath() -> std::string{
this->updateIfNeeded();
    

                        if(this->mainPath != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mainPath->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto InitInfo::setTesting(std::string value) -> void{
this->testing= value;
    
}


    auto InitInfo::setTestHtmlPath(AbPath* value) -> void{
this->testHtmlPath= value;
    
}


    auto InitInfo::setMainPath(AbPath* value) -> void{
this->mainPath= value;
    
}


    auto InitInfo::isMainPathValid(AbPath* abPath) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto InitInfo::isTestHtmlPathValid(AbPath* abPath) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto InitInfo::isTestingValid(std::string testing) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil::getInstance()->isStringBoolean(testing);;
    
}


    auto InitInfo::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(this->TESTING, this->getTesting());
    
hashMap->put(this->MAINPATH, this->getMainPath());
    
hashMap->put(this->TESTHTMLPATH, this->getTestHtmlPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO_CPP
