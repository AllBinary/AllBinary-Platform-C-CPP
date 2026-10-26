
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"

class TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory: public TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory {

public: TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory() : TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory("OpenGL TouchButton Animations"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){
super.initImageCache(OpenGLImageCacheFactory::getInstance(), level);
    
}


    public: bool isFeature(){

                        if(Features::getInstance().isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

