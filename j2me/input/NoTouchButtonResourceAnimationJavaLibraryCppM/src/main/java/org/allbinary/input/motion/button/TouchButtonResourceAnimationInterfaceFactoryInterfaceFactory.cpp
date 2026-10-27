
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::createFactory() -> TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory("TouchButton Animations");
    
}


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory(std::string name) : BaseResourceAnimationInterfaceFactoryInterfaceFactory(name, StdUtil::getInstance()->createHashtable(), StdUtil::getInstance()->createHashtable(), StdUtil::getInstance()->createHashtable()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::init(int32_t level) -> void{
this->initImageCache(ImageCacheFactory::getInstance(), level);
    
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::initImageCache(ImageCache* imageCache, int32_t level) -> void{

                        if(this->isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
BaseResourceAnimationInterfaceFactoryInterfaceFactory::init(level);
    
}


    auto TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::isLoadingLevel(int32_t level) -> bool{

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory->LOAD_TOUCH->getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BaseResourceAnimationInterfaceFactoryInterfaceFactory::isLoadingLevel(level);;
    

                        }
                            
}


    auto TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::isFeature() -> bool{

                        if(!Features::getInstance()->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
