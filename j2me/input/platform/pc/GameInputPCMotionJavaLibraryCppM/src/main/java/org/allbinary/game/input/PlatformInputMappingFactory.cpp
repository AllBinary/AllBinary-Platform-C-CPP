
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/MotionLaptopGameInputMapping.h"

class PlatformInputMappingFactory
            : public Object
         {

    private: static PlatformInputMappingFactory* instance() { static std::unique_ptr<PlatformInputMappingFactory> value(new PlatformInputMappingFactory()); return value.get(); }

    public: static PlatformInputMappingFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformInputMappingFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: PersistentInputMapping* inputToGameKeyMapping = PersistentInputMapping::getNullInstance();

    public: PersistentInputMapping* getPersistentInputMappingInstance(){

        try {
            
                        if(this->inputToGameKeyMapping == PersistentInputMapping::getNullInstance())
                        
                                    {
                                    this->inputToGameKeyMapping= new MotionLaptopGameInputMapping();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputToGameKeyMapping;
    
}


};

            

