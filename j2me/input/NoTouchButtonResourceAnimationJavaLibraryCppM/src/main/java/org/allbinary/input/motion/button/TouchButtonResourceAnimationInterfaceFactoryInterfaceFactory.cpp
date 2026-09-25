
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory: public BaseResourceAnimationInterfaceFactoryInterfaceFactory {

    public: static TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory createFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory("TouchButton Animations");
    
}


public: TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory(std::string name){
            super(name, StdUtil::getInstance().createHashtable(), StdUtil::getInstance().createHashtable(), StdUtil::getInstance().createHashtable());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){
this->initImageCache(ImageCacheFactory::getInstance(), level);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initImageCache(ImageCache imageCache, int32_t level){

                        if(this->isInitialized())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
super.init(level);
    
}


    public: bool isLoadingLevel(int32_t level){

    ResourceLoadingLevelFactory resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory.LOAD_TOUCH.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isLoadingLevel(level);;
    

                        }
                            
}


    public: bool isFeature(){

                        if(!Features::getInstance().isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
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

            

