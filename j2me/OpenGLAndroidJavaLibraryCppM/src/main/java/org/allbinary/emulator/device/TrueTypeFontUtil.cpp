
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileOutputStream.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Paint.h>

      
#include <android/graphics/Rect.h>

      
#include <android/graphics/Typeface.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
#include <org/microemu/android/device/AndroidImmutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrueTypeFontUtilBase.h"
//TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil instance() { return TrueTypeFontUtil(); }

    public: static TrueTypeFontUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrueTypeFontUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();

    private: const int32_t realFontSize = 18;

    public: OpenGLESImage fontImage = OpenGLESImage::NULL_OPENGL_IMAGE;

private: TrueTypeFontUtil(){
            super(1);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void saveFontAtlasAsFile(){

        try {
            
    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    File file = ResourceUtil::getInstance().getContext().getFilesDir();;
    

    std::string path = file.getAbsolutePath() +CanvasStrings::getInstance().FONT_ATLAS;;
    
this->logUtil.putF(path, this, commonStrings.CONSTRUCTOR);
    

    FileOutputStream fos = FileOutputStream(path);;
    

    Bitmap bitmap = (getImage as AndroidImageInterface).getBitmap();;
    
bitmap.compress(Bitmap::CompressFormat.PNG, 100, fos);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.EXCEPTION, e);
    
}

}


    public: Image getFontBitmapGL(GL10 gl, std::string filename, int32_t cellSize, BasicColor basicColor){

                        if(this->fontImage == OpenGLESImage::NULL_OPENGL_IMAGE)
                        
                                    {
                                    
    int32_t cellsPerRow2 = this->CELLS_PER_ROW *2;;
    

    int32_t cellsPerRow3 = this->CELLS_PER_ROW *3;;
    

    int32_t cellsPerRow4 = this->CELLS_PER_ROW *4;;
    

    int32_t cellsPerRow5 = this->CELLS_PER_ROW *5;;
    

    int32_t cellsPerRow6 = this->CELLS_PER_ROW *6;;
    

    int32_t cellsPerRow7 = this->CELLS_PER_ROW *7;;
    

    Typeface typeface = Typeface::DEFAULT;;
    

    int32_t textureSize = this->getAsTextureSize(this->CELLS_PER_ROW *cellSize);;
    

    Bitmap bitmap = Bitmap::createBitmap(textureSize, textureSize, Bitmap::Config.ARGB_8888);;
    

    Canvas canvas = Canvas(bitmap);;
    

    Paint paint = Paint();;
    
paint.setTypeface(typeface);
    
paint.setTextSize(this->realFontSize);
    
paint.setAlpha(static_cast<int32_t>(basicColor.alpha));
    
paint.setColor(basicColor.intValue());
    

    int32_t biggestHeight = 0;;
    

    Rect bounds = Rect();;
    

    int32_t x= 0;;
    

    int32_t y= 0;;
    




                        for (
    int32_t index = 0;index < this->size; index++)
        {
this->characterArray[0]= this->pattern[index];
    
paint.getTextBounds(this->characterArray, 0, 1, bounds);
    
this->_characterWidth[index]= bounds.right;
    

                        if(bounds.bottom -bounds.top > biggestHeight)
                        
                                    {
                                    biggestHeight= bounds.bottom -bounds.top;
    

                                    }
                                
x= (index % this->CELLS_PER_ROW) *cellSize;
    
x += (cellSize>>1);
    
x -= (this->_characterWidth[index]>>1);
    
y= 0;
    

                        if(index >= this->CELLS_PER_ROW)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow2)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow3)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow4)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow5)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow6)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                

                        if(index >= cellsPerRow7)
                        
                                    {
                                    y += cellSize;
    

                                    }
                                
y += cellSize;
    
y -= (cellSize>>2);
    
canvas.drawText(this->characterArray, 0, 1, x -3, y -6, paint);
    
}

canvas.save();
    

    Image image = AndroidImmutableImage::create(bitmap);;
    
this->fontImage= this->preResourceImageUtil.encapsulate(image) as OpenGLESImage;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontImage;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontImage;
    

                        }
                            
}


    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize){

    Typeface typeface = Typeface::DEFAULT;;
    

    Paint paint = Paint();;
    
paint.setTypeface(typeface);
    
paint.setTextSize(fontSize);
    
paint.setARGB(255, 255, 255, 255);
    

    Rect bounds = Rect();;
    




                        for (
    int32_t index = 0;index < this->size; index++)
        {
this->characterArray[0]= this->pattern[index];
    
paint.getTextBounds(this->characterArray, 0, 1, bounds);
    

                        if(index < this->lastCapIndex)
                        
                                    {
                                    
                        if(this->characterArray[0] == '1')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +3;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'J' || this->characterArray[0] == 'V' || this->characterArray[0] == '2' || this->characterArray[0] == '9' || this->characterArray[0] == 'I' || this->characterArray[0] == 'N' || this->characterArray[0] == 'U')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +1;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == '4' || this->characterArray[0] == 'C' || this->characterArray[0] == 'E' || this->characterArray[0] == 'O')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -2;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'B' || this->characterArray[0] == 'D' || this->characterArray[0] == 'G' || this->characterArray[0] == 'H' || this->characterArray[0] == 'T' || this->characterArray[0] == 'W')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -3;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'A' || this->characterArray[0] == 'Q' || this->characterArray[0] == 'R')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -5;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'M')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -6;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'm')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -8;
    

                                    }
                                
                        else {
                            this->_characterWidth[index]= bounds.right;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->characterArray[0] == ' ')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +10;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'l' || this->characterArray[0] == 'i' || this->characterArray[0] == 'j' || this->characterArray[0] == '.' || this->characterArray[0] == '!' || this->characterArray[0] == '|')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +6;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'f' || this->characterArray[0] == 't' || this->characterArray[0] == 'u' || this->characterArray[0] == 'v')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +1;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'r')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right +2;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'a' || this->characterArray[0] == 'b' || this->characterArray[0] == 'g' || this->characterArray[0] == 'u')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -1;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'o' || this->characterArray[0] == 'e')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -2;
    

                                    }
                                
                             else 
                        if(this->characterArray[0] == 'm')
                        
                                    {
                                    this->_characterWidth[index]= bounds.right -7;
    

                                    }
                                
                        else {
                            this->_characterWidth[index]= bounds.right;
    

                        }
                            

                        }
                            
}

this->_characterWidth[0]= (fontSize>>1) -2;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->_characterWidth;
    
}


};

            

