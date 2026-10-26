
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OnDemandResources
            : public Object
         {

    public: static const OnDemandResources NULL_ON_DEMAND_RESOURCES = OnDemandResources();

    protected: const LogUtil logUtil = LogUtil::getInstance();

protected: OnDemandResources();

                //@Throws(Exception.constructor)
            
    public: void waitFor();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: int32_t initAt(ImageCache imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, std::string loadingString, int32_t index);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
