
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory: public BaseResourceAnimationInterfaceFactoryInterfaceFactory {

    public: static TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory createFactory();

public: TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory(std::string name);

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

                //@Throws(Exception.constructor)
            
    protected: void initImageCache(ImageCache imageCache, int32_t level);

    public: bool isLoadingLevel(int32_t level);

    public: bool isFeature();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
