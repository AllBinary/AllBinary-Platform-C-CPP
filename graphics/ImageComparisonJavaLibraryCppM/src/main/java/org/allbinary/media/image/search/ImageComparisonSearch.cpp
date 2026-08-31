
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonSearch
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public isSameHeight: bool= false;

    public isSameWidth: bool= false;

    public pixelsThatMatch: int32_t= 0;

    public pixelsIgnored: int32_t= 0;

    public imageHeight: int32_t;

    public imageWidth: int32_t;

    private: tolerance: int32_t= 0;

    private: nonMatchingPixelVector: Vector;

    private: bufferedImages: std::vector<BufferedImage>;

    private: matchingPercent: float =  -1;

public constructor (BufferedImage bufferedImage, BufferedImage bufferedImage2, int32_t tolerance){

            super();
        this.nonMatchingPixelVector= new Vector();
    
this.setBufferedImages(new Array(2));
    
this.getBufferedImages()[0]= bufferedImage;
    
this.getBufferedImages()[1]= bufferedImage2;
    
this.imageHeight= bufferedImage!.getHeight();
    
this.imageWidth= bufferedImage!.getWidth();
    

                        if(bufferedImage!.getHeight() != bufferedImage2!.getHeight())
                        
                                    {
                                    this.isSameHeight= false;
    

                        if(this.imageHeight > bufferedImage2!.getHeight())
                        
                                    {
                                    this.imageHeight= bufferedImage2!.getHeight();
    

                                    }
                                

                                    }
                                
                        else {
                            this.isSameHeight= true;
    

                        }
                            

                        if(bufferedImage!.getWidth() != bufferedImage2!.getWidth())
                        
                                    {
                                    this.isSameWidth= false;
    

                        if(this.imageWidth > bufferedImage2!.getWidth())
                        
                                    {
                                    this.imageWidth= bufferedImage2!.getWidth();
    

                                    }
                                

                                    }
                                
                        else {
                            this.isSameWidth= true;
    

                        }
                            

                        if(!this.isSameWidth || !this.isSameHeight)
                        
                                    {
                                    
    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    
this.logUtil!.putF("Images were not the same size? Most likely a resolution change.", this, this.commonStrings!.CONSTRUCTOR);
    
this.logUtil!.putF("1: " +imageUtil!.toString(bufferedImage), this, this.commonStrings!.CONSTRUCTOR);
    
this.logUtil!.putF("2: " +imageUtil!.toString(bufferedImage2), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


    float getMatchingPercent(){

                        if(this.matchingPercent ==  -1)
                        
                                    {
                                    this.matchingPercent= this.pixelsThatMatch /(this.imageWidth *this.imageHeight);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.matchingPercent;
    
}


    public add(PixelDelta pixel){
this.nonMatchingPixelVector!.add(pixel);
    
}


    public Vector getNonMatchingPixelVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.nonMatchingPixelVector;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "ImageComparisonInfo: " +" Number Of Matching Pixels: " +this.pixelsThatMatch +"\nNumber Of Non-Matching Pixels: " +this.getNonMatchingPixelVector()!.size() +"\nNumber Of Pixels Ignored: " +this.pixelsIgnored +"\nMatching Percentage: " +this.getMatchingPercent();
    
}


    public std::vector<BufferedImage> getBufferedImages(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bufferedImages;
    
}


    setBufferedImages(std::vector<BufferedImage> bufferedImages){
this.bufferedImages= bufferedImages;
    
}


    public int32_t getTolerance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tolerance;
    
}


    public setTolerance(int32_t tolerance){
this.tolerance= tolerance;
    
}


};

            

