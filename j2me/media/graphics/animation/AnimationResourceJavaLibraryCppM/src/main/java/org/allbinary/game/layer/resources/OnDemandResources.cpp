
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
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OnDemandResources
            : public Object
         {

    public: static OnDemandResources* NULL_ON_DEMAND_RESOURCES() { static std::unique_ptr<OnDemandResources> value(new OnDemandResources()); return value.get(); }

    protected: LogUtil* logUtil = LogUtil::getInstance();

protected: OnDemandResources(){
}


                //@Throws(Exception.constructor)
            
    public: void waitFor(){
}


                //@Throws(Exception.constructor)
            
    public: void init(){
}


                //@Throws(Exception.constructor)
            
    public: int32_t initAt(ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, std::string loadingString, int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

