
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
class ResourceUtil
            : public Object
         {

    private: static ResourceUtil* instance() { static std::unique_ptr<ResourceUtil> value(new ResourceUtil()); return value.get(); }

    public: static ResourceUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Object* context = NullUtil::getInstance()->NULL_OBJECT;

    private: Object* resources = NullUtil::getInstance()->NULL_OBJECT;

    private: ABHashtable<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashtable();

private: ResourceUtil(){
}


    public: void setLoadingPaths(std::string path, std::string ext){
this->logUtil->putF(CommonStrings::getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    public: Context* getContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Context*>(this->context);
    
}


    public: void setContextFromActivity(Activity* activity){
this->context= activity;
    
}


    public: void setContext(Context* aContext){
this->context= aContext;
    
}


    public: int32_t getResourceId(std::string resource){

    int32_t value = this->hashMap->get(resource);;
    

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(resource)->append(CommonSeps::getInstance()->COLON)->append(value.toString())->toString(), this, "getResourceId");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public: void addResource(std::string resource, int32_t value){

                        if(DebugFactory::getInstance() != NoDebug::getInstance())
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append(resource)->append(CommonSeps::getInstance()->COLON)->append(value.toString())->toString(), this, "addResource");
    

                        if(this->containsDuplicate(resource, value))
                        
                                    {
                                    ForcedLogUtil::log((new StringMaker())->append("Found Duplicate Resource: ")->append(resource)->toString(), this);
    

                                    }
                                

                                    }
                                
this->hashMap->put(resource, value);
    
}


    private: bool containsDuplicate(std::string resource, int32_t value){

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(this->hashMap);;
    




                        for (
    int32_t index = objectArray.size();--index >= 0; )
        {

    int32_t integer = this->hashMap->get(objectArray[index]);;
    

                        if(resource != objectArray[index])
                        
                                    {
                                    
                        if(value != integer)
                        
                                    {
                                    
                        if(value.intValue() == integer.intValue())
                        
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


    public: void setResources(Resources* resources){
this->logUtil->putF((new StringMaker())->append("Resource Loader: ")->append(resources->getClass()->getName())->toString(), this, "setResources");
    
this->resources= resources;
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resource){

    int32_t integer = this->hashMap->get(resource);;
    

    int32_t id = integer.intValue();;
    

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


};

            

