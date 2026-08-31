
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Float.h"
        
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Matrix.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageScaleUtil
            : public Object
         {
        

    private: static const instance: ImageScaleUtil = new ImageScaleUtil();

    public static ImageScaleUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageScaleUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: const imageBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaledImageBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaleXBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaleYBasicArrayList: BasicArrayList = new BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage3(imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable){

    scaleX: float = scaleNominatorX /scaleDenominatorX;;
    

    scaleY: float = scaleNominatorY /scaleDenominatorY;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createImage(imageCache, originalImage, scaleX, scaleY, cached);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, bool cached){

    originalAndroidImage: AndroidImageInterface = originalImage as AndroidImageInterface;;
    

    originalBitmap: Bitmap = originalAndroidImage!.getBitmap()!;;
    

    width: int32_t = static_cast<int32_t>((originalBitmap!.getWidth() *scaleX));;
    

    height: int32_t = static_cast<int32_t>((originalBitmap!.getHeight() *scaleY));;
    

    index: int32_t = this.imageBasicArrayList!.indexOf(originalImage)!;;
    

    alreadyAvailable: bool = false;;
    

                        if(index >= 0)
                        
                                    {
                                    
    scaleX2Float: number = this.scaleXBasicArrayList!.get(index);;
    

    scaleX2: float = scaleX2Float!!;;
    

    scaleY2Float: number = this.scaleYBasicArrayList!.get(index);;
    

    scaleY2: float = scaleY2Float!!;;
    

                        if(scaleX2 == scaleX && scaleY2 == scaleY)
                        
                                    {
                                    alreadyAvailable= true;
    

                                    }
                                

                                    }
                                

                        if(alreadyAvailable)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scaledImageBasicArrayList!.get(index) as Image;
    

                                    }
                                
                        else {
                            
    scaledImage: Image = this.getScaledImage(imageCache, originalImage, scaleX, scaleY, width, height, cached)!;;
    
this.imageBasicArrayList!.add(originalImage);
    
this.scaledImageBasicArrayList!.add(scaledImage);
    
this.scaleXBasicArrayList!.add(scaleX);
    
this.scaleYBasicArrayList!.add(scaleY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    Image getScaledImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached){

    image: Image = NullImage.NULL_IMAGE;;
    

                        if(cached)
                        
                                    {
                                    image= imageCache!.get(this.constructor.name.toString()!, width, height);
    

                                    }
                                
                        else {
                            image= imageCache!.get(this.commonStrings!.CREATE_IMAGE, width, height);
    

                        }
                            

                        if(image.isMutable())
                        
                                    {
                                    
    matrix: Matrix = new Matrix();;
    
this.scale(image, matrix, scaleX, scaleY);
    
image.getGraphics()!.drawImage(originalImage, 0, 0, this.anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Not Mutable");
                    

                        }
                            
}


    scale(Image image, Matrix matrix, float scaleX, float scaleY){
matrix.setScale(scaleX, scaleY);
    

    canvas: Canvas = (image as AndroidImageInterface).getCanvas()!;;
    
canvas.concat(matrix);
    
}


};

            

