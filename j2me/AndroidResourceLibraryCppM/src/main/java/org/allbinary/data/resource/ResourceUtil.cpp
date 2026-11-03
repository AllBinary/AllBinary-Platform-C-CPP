
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
        



        #ifndef ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP
        #define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/resource/ResourceUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/InputStream.h>

      
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/content/res/Resources.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Android
auto ResourceUtil::instance_owner() -> ResourceUtil* { static std::unique_ptr<ResourceUtil> value(new ResourceUtil()); return value.get(); }
ResourceUtil* ResourceUtil::instance = ResourceUtil::instance_owner();

    auto ResourceUtil::getInstance() -> ResourceUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ResourceUtil::instance;
    
}


ResourceUtil::ResourceUtil() : logUtil(LogUtil::getInstance()), context(NullUtil::getInstance()->NULL_OBJECT), resources(NullUtil::getInstance()->NULL_OBJECT), hashMap(StdUtil::getInstance()->createHashtable()){
}


    auto ResourceUtil::setLoadingPaths(std::string path, std::string ext) -> void{
this->logUtil->putF(CommonStrings::getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    auto ResourceUtil::getContext() -> Context*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Context*>(this->context);
    
}


    auto ResourceUtil::setContextFromActivity(Activity* activity) -> void{
this->context= activity;
    
}


    auto ResourceUtil::setContext(Context* aContext) -> void{
this->context= aContext;
    
}


    auto ResourceUtil::getResourceId(std::string resource) -> int32_t{

    int32_t value = JavaBoxes::unbox<int32_t>(this->hashMap->get(resource));;
    

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(resource)->append(CommonSeps::getInstance()->COLON)->append(JavaString::valueOf(value))->toString(), this, "getResourceId");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return value;
    
}


    auto ResourceUtil::addResource(std::string resource, int32_t value) -> void{

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(resource)->append(CommonSeps::getInstance()->COLON)->append(JavaString::valueOf(value))->toString(), this, "addResource");
    

                        if(this->containsDuplicate(resource, value))
                        
                                    {
                                    ForcedLogUtil::log((new StringMaker())->append("Found Duplicate Resource: ")->append(resource)->toString(), this);
    

                                    }
                                

                                    }
                                
this->hashMap->put(resource, value);
    
}


    auto ResourceUtil::containsDuplicate(std::string resource, int32_t value) -> bool{

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(this->hashMap);;
    




                        for (
    int32_t index = objectArray.size();--index >= 0; )
        {

    int32_t integer = JavaBoxes::unbox<int32_t>(this->hashMap->get(objectArray[index]));;
    

                        if(resource != objectArray[index])
                        
                                    {
                                    
                        if(value != integer)
                        
                                    {
                                    
                        if(value == integer)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto ResourceUtil::setResources(Resources* resources) -> void{
this->logUtil->putF((new StringMaker())->append("Resource Loader: ")->append(resources->getClass()->getName())->toString(), this, "setResources");
    
this->resources= resources;
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceUtil::getResourceAsStream(std::string resource) -> InputStream*{

    int32_t integer = JavaBoxes::unbox<int32_t>(this->hashMap->get(resource));;
    

    int32_t id = integer;;
    

    Resources* resources = (dynamic_cast<Resources*>(this->resources));;
    

    InputStream* inputStream = resources->openRawResource(id);;
    

                        if(inputStream != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}




        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP
