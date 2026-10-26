
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/ChoiceGroupImageFactory.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PreResourceImageUtil.h"

class ChoiceGroupImageUtil
            : public Object
         {

    private: static ChoiceGroupImageUtil instance() { return ChoiceGroupImageUtil(); }

    public: static ChoiceGroupImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ChoiceGroupImageUtil::instance();
    
}


    public: void init(){

    Features features = Features::getInstance();;
    

    ChoiceGroupImageFactory choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image> imageArray = choiceGroupFactory.getImageArray();;
    

                        if(features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
imageArray[index]= preResourceImageUtil.encapsulate(imageArray[index]);
    
}

choiceGroupFactory.init(imageArray);
    

                                    }
                                
}


    public: void update(GL gl){

    Features features = Features::getInstance();;
    

    ChoiceGroupImageFactory choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image> imageArray = choiceGroupFactory.getImageArray();;
    

                        if(features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
preResourceImageUtil.updateGL(gl, imageArray[index]);
    
}


                                    }
                                
choiceGroupFactory.init(imageArray);
    
}


    public: void update(Graphics graphics){

    Features features = Features::getInstance();;
    

    ChoiceGroupImageFactory choiceGroupFactory = ChoiceGroupImageFactory::getInstance();;
    

    std::vector<Image> imageArray = choiceGroupFactory.getImageArray();;
    

                        if(features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    
    PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();;
    

    int32_t size = imageArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
preResourceImageUtil.update(graphics, imageArray[index]);
    
}


                                    }
                                
choiceGroupFactory.init(imageArray);
    
}


};

            

