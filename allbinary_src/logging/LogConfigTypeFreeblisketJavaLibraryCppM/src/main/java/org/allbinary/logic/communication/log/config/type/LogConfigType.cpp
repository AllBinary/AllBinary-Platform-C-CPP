
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogConfigType
            : public Object
         {

    public: static BasicArrayList availableLogConfigTypes = BasicArrayListD();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name;

    private: std::string description;

public: LogConfigType(std::string name, std::string description){
this->name= name;
    
this->description= description;
    
LogConfigType::availableLogConfigTypes.add(this);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setDescription(std::string value){
this->description= value;
    
}


};

            

