
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
        



            #include "../../../java/lang/Object.h"
        
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
        

    private: static const instance: ChoiceGroupImageUtil = new ChoiceGroupImageUtil();

    public static ChoiceGroupImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ChoiceGroupImageUtil.instance;
    
}


    public init(){

    features: Features = Features.getInstance()!;;
    

    choiceGroupFactory: ChoiceGroupImageFactory = ChoiceGroupImageFactory.getInstance()!;;
    

    imageArray: std::vector<Image> = choiceGroupFactory!.getImageArray()!;;
    

                        if(features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    
    preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;;
    

    size: int32_t = imageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
imageArray[index]= preResourceImageUtil!.encapsulate(imageArray[index]!);
    
}

choiceGroupFactory!.init(imageArray);
    

                                    }
                                
}


    public update(GL gl){

    features: Features = Features.getInstance()!;;
    

    choiceGroupFactory: ChoiceGroupImageFactory = ChoiceGroupImageFactory.getInstance()!;;
    

    imageArray: std::vector<Image> = choiceGroupFactory!.getImageArray()!;;
    

                        if(features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    
    preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;;
    

    size: int32_t = imageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
preResourceImageUtil!.updateGL(gl, imageArray[index]!);
    
}


                                    }
                                
choiceGroupFactory!.init(imageArray);
    
}


    public update(Graphics graphics){

    features: Features = Features.getInstance()!;;
    

    choiceGroupFactory: ChoiceGroupImageFactory = ChoiceGroupImageFactory.getInstance()!;;
    

    imageArray: std::vector<Image> = choiceGroupFactory!.getImageArray()!;;
    

                        if(features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    
    preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;;
    

    size: int32_t = imageArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
preResourceImageUtil!.update(graphics, imageArray[index]!);
    
}


                                    }
                                
choiceGroupFactory!.init(imageArray);
    
}


};

            

