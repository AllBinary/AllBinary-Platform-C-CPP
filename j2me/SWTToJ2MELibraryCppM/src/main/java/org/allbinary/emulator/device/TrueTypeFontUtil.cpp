
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/emulator/device/TrueTypeFontUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/eclipse/swt/graphics/ImageLoader.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
#include <org/allbinary/AvianUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/opengles/OpenGLCapabilities.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"
//TTF
auto TrueTypeFontUtil::instance_owner() -> TrueTypeFontUtil* { static std::unique_ptr<TrueTypeFontUtil> value(new TrueTypeFontUtil()); return value.get(); }
TrueTypeFontUtil* TrueTypeFontUtil::instance = TrueTypeFontUtil::instance_owner();

    auto TrueTypeFontUtil::getInstance() -> TrueTypeFontUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrueTypeFontUtil::instance;
    
}


TrueTypeFontUtil::TrueTypeFontUtil() : TrueTypeFontUtilBase(2), preResourceImageUtil(PreResourceImageUtil::getInstance()), fontImage(OpenGLESImage::NULL_OPENGL_IMAGE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(AvianUtil::isAvian())
                        
                                    {
                                    this->widthFloatArray= {
                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr
};
    

                                    }
                                
                        else {
                            this->widthFloatArray= {
                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr

                                //Otherwise - values - DoubleLiteralExpr
};
    

                        }
                            
this->widthScale= (this->scale == 2)
                        ?       
                                
                                        //Otherwise - thenExpr - DoubleLiteralExpr

                                :

                            
                                        //Otherwise - expression - elseExpr - DoubleLiteralExpr
;

    ;
    
}


    auto TrueTypeFontUtil::getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor) -> Image*{

        try {
            
                        if(this->fontImage == OpenGLESImage::NULL_OPENGL_IMAGE)
                        
                                    {
                                    
    CanvasStrings* canvasStrings = CanvasStrings::getInstance();;
    

    OpenGLCapabilities* openGLCapabilities = OpenGLCapabilities::getInstance();;
    

                        if(openGLCapabilities->isTextureSizeValid(1024) && this->scale == 2)
                        
                                    {
                                    
    std::string FONT_ATLAS_1024 = "/font_1024.png";;
    

    Image* image = Image::createImage(ResourceUtil::getInstance()->getResourceAsStream(FONT_ATLAS_1024));;
    
image->setName(canvasStrings->FONT_ATLAS);
    
this->fontImage= dynamic_cast<OpenGLESImage*>(this->preResourceImageUtil->encapsulate(image));
    

                                    }
                                
                             else 
                        if(openGLCapabilities->isTextureSizeValid(512))
                        
                                    {
                                    
    std::string FONT_ATLAS_512 = "/font_512.png";;
    

    Image* image = Image::createImage(ResourceUtil::getInstance()->getResourceAsStream(FONT_ATLAS_512));;
    
image->setName(canvasStrings->FONT_ATLAS);
    
this->fontImage= dynamic_cast<OpenGLESImage*>(this->preResourceImageUtil->encapsulate(image));
    

                                    }
                                
                        else {
                            
    std::string FONT_ATLAS_512 = "/font_512.png";;
    

    Image* image = Image::createImage(ResourceUtil::getInstance()->getResourceAsStream(FONT_ATLAS_512));;
    
image->setName(canvasStrings->FONT_ATLAS);
    
this->fontImage= dynamic_cast<OpenGLESImage*>(this->preResourceImageUtil->encapsulate(image));
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontImage;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontImage;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, commonStrings->EXCEPTION, &e);
    



                            throw RuntimeException();
                    
}

}


    auto TrueTypeFontUtil::saveFontAtlasAsFile() -> void{

    Image* image = this->getFontBitmap(
                            nullptr, cellSize, BasicColorFactory::getInstance()->WHITE);;
    

    ImageLoader* imageLoader = new ImageLoader();;
    

    ImageData* imageData = image = dynamic_cast<SwtMutableImage*>(imageimage)
image.
                    image->getImageData();;
    
imageData->transparentPixel= imageData->getPixel(0, 0);
    
imageLoader->data= 
                                                {
                                                    imageData
                                                };
    
imageLoader->save(CommonSeps::getInstance()->PERIOD +CanvasStrings::getInstance()->FONT_ATLAS, SWT::IMAGE_PNG);
    
}


    auto TrueTypeFontUtil::getFontBitmap(std::string filename, int32_t cellSize, BasicColor* basicColor) -> Image*{

    int32_t cellsPerRow2 = this->CELLS_PER_ROW *2;;
    

    int32_t cellsPerRow3 = this->CELLS_PER_ROW *3;;
    

    int32_t cellsPerRow4 = this->CELLS_PER_ROW *4;;
    

    int32_t cellsPerRow5 = this->CELLS_PER_ROW *5;;
    

    int32_t cellsPerRow6 = this->CELLS_PER_ROW *6;;
    

    int32_t cellsPerRow7 = this->CELLS_PER_ROW *7;;
    

    Image* image = Image::createImage(textureSize, textureSize);;
    

    Graphics* graphics = image->getGraphics();;
    
graphics->setColor(basicColor->intValue());
    

    int32_t biggestHeight = 0;;
    

    Rectangle* bounds = new Rectangle(PointFactory::getInstance()->createXY(0, 0), cellSize, cellSize);;
    

    int32_t x= 0;;
    

    int32_t y= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->characterArray[0]= pattern[index];
    
_characterWidth[index]= bounds->getMaxX();
    

                        if(bounds->getMaxY() -bounds->getPoint()->getX() > biggestHeight)
                        biggestHeight= bounds->getMaxY() -bounds->getPoint()->getX();
                                
x= (index % this->CELLS_PER_ROW) *cellSize;
    
x += (cellSize>>1);
    
x -= (_characterWidth[index]>>1);
    
y=  -(cellSize>>1);
    

                        if(index >= this->CELLS_PER_ROW)
                        y += cellSize;
                                

                        if(index >= cellsPerRow2)
                        y += cellSize;
                                

                        if(index >= cellsPerRow3)
                        y += cellSize;
                                

                        if(index >= cellsPerRow4)
                        y += cellSize;
                                

                        if(index >= cellsPerRow5)
                        y += cellSize;
                                

                        if(index >= cellsPerRow6)
                        y += cellSize;
                                

                        if(index >= cellsPerRow7)
                        y += cellSize;
                                
y += cellSize;
    
y -= (cellSize>>2);
    
graphics->drawChar(this->characterArray[0], x, y, 0);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    auto TrueTypeFontUtil::getFontWidths(std::string filename, int32_t fontSize) -> std::vector<int32_t>{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->characterArray[0]= pattern[index];
    

                        if(this->characterArray[0] == ' ')
                        
                                    {
                                    _characterWidth[index]= (fontSize /4);
    

                                    }
                                
                        else {
                            
    int32_t shortPatternIndex = this->shortPattern->indexOf(this->characterArray[0]);;
    

    int32_t w = static_cast<int32_t>((this->widthFloatArray[shortPatternIndex] /75)) +19;;
    
_characterWidth[index]= static_cast<int32_t>(w);
    

                        if(this->characterArray[0] == '.' || this->characterArray[0] == '1')
                        _characterWidth[index] += 4;
                                

                        if(this->characterArray[0] >= 'a' && this->characterArray[0] < 'k')
                        _characterWidth[index] -= 2;
                                

                        if(this->characterArray[0] >= 'k' && this->characterArray[0] < 'v')
                        _characterWidth[index] -= 4;
                                

                        if(this->characterArray[0] >= 'v' && this->characterArray[0] < 'z')
                        _characterWidth[index] -= 8;
                                

                        if(this->characterArray[0] == 'D')
                        _characterWidth[index] -= 4;
                                

                        if(this->characterArray[0] >= 'A' && this->characterArray[0] <= 'Z')
                        _characterWidth[index] -= 2;
                                

                        }
                            
_characterWidth[index] *= this->widthScale;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return _characterWidth;
    
}




        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_CPP
