
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
        



        #ifndef ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ChoiceGroupImageUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/ChoiceGroupImageFactory.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/PreResourceImageUtil.h"


ChoiceGroupImageUtil::ChoiceGroupImageUtil() {
        }
        auto ChoiceGroupImageUtil::instance_owner() -> ChoiceGroupImageUtil* { static std::unique_ptr<ChoiceGroupImageUtil> value(new ChoiceGroupImageUtil()); return value.get(); }
ChoiceGroupImageUtil* ChoiceGroupImageUtil::instance = ChoiceGroupImageUtil::instance_owner();

    auto ChoiceGroupImageUtil::getInstance() -> ChoiceGroupImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ChoiceGroupImageUtil::instance;
    
}


    auto ChoiceGroupImageUtil::init() -> void{

    Features* features = Features::getInstance();;
    

    ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image*> imageArray = choiceGroupFactory->getImageArray();;
    

                        if(features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
imageArray[index]= preResourceImageUtil->encapsulate(imageArray[index]);
    
}

choiceGroupFactory->init(imageArray);
    

                                    }
                                
}


    auto ChoiceGroupImageUtil::update(GL* gl) -> void{

    Features* features = Features::getInstance();;
    

    ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image*> imageArray = choiceGroupFactory->getImageArray();;
    

                        if(features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
preResourceImageUtil->updateGL(gl, imageArray[index]);
    
}


                                    }
                                
choiceGroupFactory->init(imageArray);
    
}


    auto ChoiceGroupImageUtil::update(Graphics* graphics) -> void{

    Features* features = Features::getInstance();;
    

    ChoiceGroupImageFactory* choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image*> imageArray = choiceGroupFactory->getImageArray();;
    

                        if(features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil* preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
preResourceImageUtil->update(graphics, imageArray[index]);
    
}


                                    }
                                
choiceGroupFactory->init(imageArray);
    
}




        #endif //ORG_ALLBINARY_IMAGE_CHOICEGROUPIMAGEUTIL_CPP
