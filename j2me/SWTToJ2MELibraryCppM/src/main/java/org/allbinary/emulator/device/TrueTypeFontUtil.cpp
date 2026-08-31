
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
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
        #include "TrueTypeFontUtilBase.h"
//TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {
        

    private: static const instance: TrueTypeFontUtil = new TrueTypeFontUtil();

    public static TrueTypeFontUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrueTypeFontUtil.instance;
    
}


    private: const preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;

    private: const widthFloatArray: std::vector<float>;

    public fontImage: OpenGLESImage = OpenGLESImage.NULL_OPENGL_IMAGE;

    private: const widthScale: float;

private constructor (){
            super(2);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(AvianUtil.isAvian())
                        
                                    {
                                    this.widthFloatArray= new Array();
    

                                    }
                                
                        else {
                            this.widthFloatArray= new Array();
    

                        }
                            
this.widthScale= (this.scale == 2)
                        ?       
                                
                                        //Otherwise - thenExpr - DoubleLiteralExpr

                                :

                            
                                        //Otherwise - expression - elseExpr - DoubleLiteralExpr
;

    ;
    
}


    public Image getFontBitmapGL(GL10 gl, string filename, int32_t cellSize, BasicColor basicColor){

        try {
            
                        if(this.fontImage == OpenGLESImage.NULL_OPENGL_IMAGE)
                        
                                    {
                                    
    canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;;
    

    openGLCapabilities: OpenGLCapabilities = OpenGLCapabilities.getInstance()!;;
    

                        if(openGLCapabilities!.isTextureSizeValid(1024) && this.scale == 2)
                        
                                    {
                                    
    FONT_ATLAS_1024: string = "/font_1024.png";;
    

    image: Image = Image.createImage(ResourceUtil.getInstance()!.getResourceAsStream(FONT_ATLAS_1024))!;;
    
image.setName(canvasStrings!.FONT_ATLAS);
    
this.fontImage= this.preResourceImageUtil!.encapsulate(image) as OpenGLESImage;
    

                                    }
                                
                             else 
                        if(openGLCapabilities!.isTextureSizeValid(512))
                        
                                    {
                                    
    FONT_ATLAS_512: string = "/font_512.png";;
    

    image: Image = Image.createImage(ResourceUtil.getInstance()!.getResourceAsStream(FONT_ATLAS_512))!;;
    
image.setName(canvasStrings!.FONT_ATLAS);
    
this.fontImage= this.preResourceImageUtil!.encapsulate(image) as OpenGLESImage;
    

                                    }
                                
                        else {
                            
    FONT_ATLAS_512: string = "/font_512.png";;
    

    image: Image = Image.createImage(ResourceUtil.getInstance()!.getResourceAsStream(FONT_ATLAS_512))!;;
    
image.setName(canvasStrings!.FONT_ATLAS);
    
this.fontImage= this.preResourceImageUtil!.encapsulate(image) as OpenGLESImage;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fontImage;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fontImage;
    

                        }
                            

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, commonStrings!.EXCEPTION, e);
    



                            throw new RuntimeException();
                    
}

}


    public saveFontAtlasAsFile(){

    image: Image = this.getFontBitmap(
                            nullptr, cellSize, BasicColorFactory.getInstance()!.WHITE)!;;
    

    imageLoader: ImageLoader = new ImageLoader();;
    

    imageData: ImageData = image = imageimage as SwtMutableImage
image.
                    image.getImageData()!;;
    
imageData!.transparentPixel= imageData!.getPixel(0, 0);
    
imageLoader!.data= 
                                                [
                                                    imageData
                                                ];
    
imageLoader!.save(CommonSeps.getInstance()!.PERIOD +CanvasStrings.getInstance()!.FONT_ATLAS, SWT.IMAGE_PNG);
    
}


    public Image getFontBitmap(string filename, int32_t cellSize, BasicColor basicColor){

    cellsPerRow2: int32_t = this.CELLS_PER_ROW *2;;
    

    cellsPerRow3: int32_t = this.CELLS_PER_ROW *3;;
    

    cellsPerRow4: int32_t = this.CELLS_PER_ROW *4;;
    

    cellsPerRow5: int32_t = this.CELLS_PER_ROW *5;;
    

    cellsPerRow6: int32_t = this.CELLS_PER_ROW *6;;
    

    cellsPerRow7: int32_t = this.CELLS_PER_ROW *7;;
    

    image: Image = Image.createImage(textureSize, textureSize)!;;
    

    graphics: Graphics = image.getGraphics()!;;
    
graphics.setColor(basicColor!.intValue());
    

    biggestHeight: int32_t = 0;;
    

    bounds: Rectangle = new Rectangle(PointFactory.getInstance()!.createXY(0, 0), cellSize, cellSize);;
    

    x: int32_t= 0;;
    

    y: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.characterArray[0]= pattern[index];
    
_characterWidth[index]= bounds.getMaxX();
    

                        if(bounds.getMaxY() -bounds.getPoint()!.getX() > biggestHeight)
                        biggestHeight= bounds.getMaxY() -bounds.getPoint()!.getX()
x= (index % this.CELLS_PER_ROW) *cellSize;
    
x += (cellSize>>1);
    
x -= (_characterWidth[index]>>1);
    
y=  -(cellSize>>1);
    

                        if(index >= this.CELLS_PER_ROW)
                        y += cellSize

                        if(index >= cellsPerRow2)
                        y += cellSize

                        if(index >= cellsPerRow3)
                        y += cellSize

                        if(index >= cellsPerRow4)
                        y += cellSize

                        if(index >= cellsPerRow5)
                        y += cellSize

                        if(index >= cellsPerRow6)
                        y += cellSize

                        if(index >= cellsPerRow7)
                        y += cellSize
y += cellSize;
    
y -= (cellSize>>2);
    
graphics.drawChar(this.characterArray[0]!, x, y, 0);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public std::vector<int32_t> getFontWidths(string filename, int32_t fontSize){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.characterArray[0]= pattern[index];
    

                        if(this.characterArray[0] == ' ')
                        
                                    {
                                    _characterWidth[index]= (fontSize /4);
    

                                    }
                                
                        else {
                            
    shortPatternIndex: int32_t = this.shortPattern!.indexOf(this.characterArray[0]!)!;;
    

    w: int32_t = static_cast<int32_t>((this.widthFloatArray[shortPatternIndex] /75)) +19;;
    
_characterWidth[index]= static_cast<int32_t>(w);
    

                        if(this.characterArray[0] == '.' || this.characterArray[0] == '1')
                        _characterWidth[index] += 4

                        if(this.characterArray[0] >= 'a' && this.characterArray[0] < 'k')
                        _characterWidth[index] -= 2

                        if(this.characterArray[0] >= 'k' && this.characterArray[0] < 'v')
                        _characterWidth[index] -= 4

                        if(this.characterArray[0] >= 'v' && this.characterArray[0] < 'z')
                        _characterWidth[index] -= 8

                        if(this.characterArray[0] == 'D')
                        _characterWidth[index] -= 4

                        if(this.characterArray[0] >= 'A' && this.characterArray[0] <= 'Z')
                        _characterWidth[index] -= 2

                        }
                            
_characterWidth[index] *= this.widthScale;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return _characterWidth;
    
}


};

            

