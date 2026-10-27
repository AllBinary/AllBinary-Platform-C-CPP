
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

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseInitInfo
            : public Object
         {

    private: std::string id = StringUtil::getInstance()->EMPTY_STRING;

    private: BasicArrayList* serverList = new BasicArrayListD();

: LicenseInitInfo(){
}


    public: std::string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getServer(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverList->get(index);
    
}


    public: int32_t getNumberOfServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverList->size();;
    
}


    public: void setLicenseId(std::string value){
this->id= value;
    
}


    public: void clearServers(){
this->serverList->clear();
    
}


    public: void setServer(std::string value, int32_t index){
this->serverList->addAt(index, value);
    
}


    public: void addServer(std::string value){
this->serverList->add(value);
    
}


    public: BasicArrayList* getServerList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverList;
    
}


    public: void setServerList(BasicArrayList* servers){

                        if(DebugFactory::getInstance() == NoDebug::getInstance())
                        
                                    {
                                    this->serverList= servers;
    

                                    }
                                
}


};

            

