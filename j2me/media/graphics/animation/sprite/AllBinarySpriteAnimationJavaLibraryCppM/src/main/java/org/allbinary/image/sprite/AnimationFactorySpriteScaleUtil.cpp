
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/game/layer/SpriteFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/J2SEMath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationFactorySpriteScaleUtil
            : public Object
         {

    private: static AnimationFactorySpriteScaleUtil instance() { return AnimationFactorySpriteScaleUtil(); }

    public: static AnimationFactorySpriteScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationFactorySpriteScaleUtil::instance();
    
}


    private: const ImageCache imageCache = ImageCacheFactory::getInstance();

    private: const ImageScaleUtil imageScaleUtil = ImageScaleUtil::getInstance();

    private: const OpenGLUtil openGLUtil = OpenGLUtil::getInstance();

    private: const J2SEMath j2seMath = J2SEMath::getInstance();

    private: const OpenGLESImageExclusionUtil openGLESImageExclusionUtil = OpenGLESImageExclusionUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: Sprite createImage(Image image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight){

    SpriteFactory spriteFactory = SpriteFactory::getInstance();;
    

    Sprite sprite;;
    

    Image scaledImage;;
    

                        if(scaleWidth != 0 && scaleHeight != 0)
                        
                                    {
                                    
    float scaleX = (scaleWidth) /(width);;
    

    float scaleY = (scaleHeight) /(height);;
    

                        if((scaleX == 1.0 && scaleY == 1.0) || (scaleX == 0.0 || scaleY == 0.0))
                        
                                    {
                                    scaledImage= this->openGLUtil.addImage(image);
    
sprite= spriteFactory.createSprite(scaledImage, width, height);
    

                                    }
                                
                        else {
                            
                        if(this->openGLESImageExclusionUtil.isCustomScaling(image))
                        
                                    {
                                    
    int32_t width2 = this->j2seMath.round((scaleWidth) -0.5);;
    

    int32_t height2 = this->j2seMath.round((scaleHeight) -0.5);;
    

    int32_t multiplesOf16Width = width2 /16;;
    

    int32_t by16Width = multiplesOf16Width *16;;
    
scaleX= (by16Width) /width;
    

    int32_t multiplesOf16Height = height2 /16;;
    

    int32_t by16Height = multiplesOf16Height *16;;
    
scaleY= (by16Height) /height;
    

                        if(scaleWidth < width)
                        
                                    {
                                    scaleX= scaleX *2.35;
    

                                    }
                                

                        if(scaleHeight < height)
                        
                                    {
                                    scaleY= scaleY *2.35;
    

                                    }
                                

                                    }
                                
scaledImage= this->imageScaleUtil.createImage2(this->imageCache, image, scaleX, 1.0, scaleY, 1.0, true);
    
sprite= spriteFactory.createSprite(scaledImage, static_cast<int32_t>((width *scaleX)), static_cast<int32_t>((height *scaleY)));
    

                        }
                            

                                    }
                                
                        else {
                            scaledImage= this->openGLUtil.addImage(image);
    
sprite= spriteFactory.createSprite(scaledImage, width, height);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return sprite;
    
}


};

            

