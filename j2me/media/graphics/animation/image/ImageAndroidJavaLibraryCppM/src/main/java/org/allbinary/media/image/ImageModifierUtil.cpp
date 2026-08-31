
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
        
#include <android/graphics/Paint.h>

      
#include <android/graphics/PorterDuff.h>

      
#include <android/graphics/PorterDuffColorFilter.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageModifierUtil
            : public Object
         {
        

    public static ImageModifierUtil getInstanceOrCreate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageModifierUtil();
    
}


    public const paint: Paint = new Paint(Paint.ANTI_ALIAS_FLAG);

    public setColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
this.paint.setColorFilter(new PorterDuffColorFilter(basicColor!.intValue(), PorterDuff.Mode.SRC_IN));
    
}


    public changeColor(Image unusedOriginalImage, Image image, int32_t imageIndex, BasicColor basicColor){
this.paint.setColorFilter(new PorterDuffColorFilter(basicColor!.intValue(), PorterDuff.Mode.SRC_IN));
    
}


    public setAlpha(Image originalImage, Image image, int32_t imageIndex, int32_t alphaInt){

                        if(alphaInt != this.paint.getAlpha())
                        
                                    {
                                    this.paint.setAlpha(alphaInt);
    

                                    }
                                
}


    public std::vector<Image> getImageArray(std::vector<Image> originalImageArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return originalImageArray;
    
}


    public handleImage(std::vector<Image> imageArray, int32_t index, Image image){
}


    public reset(){
}


};

            

