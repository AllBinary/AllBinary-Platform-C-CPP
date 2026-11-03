
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"


TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory::TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory() : TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory("OpenGL TouchButton Animations"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory::init(int32_t level) -> void{
TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory::initImageCache(OpenGLImageCacheFactory::getInstance(), level);
    
}


    auto TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory::isFeature() -> bool{

                        if(Features::getInstance()->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
