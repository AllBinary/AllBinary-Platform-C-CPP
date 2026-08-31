
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
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonResult
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const bufferedImages: std::vector<BufferedImage> = new Array(2);

    public const name: string;

    public const isSameHeight: bool= false;

    public const isSameWidth: bool= false;

    public const imageHeight: int32_t;

    public const imageWidth: int32_t;

    private: const nonMatchingPixelVector: Vector;

    private: const frameOne: Long;

    private: const frameTwo: Long;

    public pixelsThatMatch: int32_t= 0;

    public pixelsIgnored: int32_t= 0;

    private: tolerance: int32_t= 0;

    private: matchingPercent: float =  -1;

public constructor (string name, BufferedImage bufferedImage, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance){

            super();
        this.name= name;
    
this.nonMatchingPixelVector= new Vector();
    
this.bufferedImages[0]= bufferedImage;
    
this.bufferedImages[1]= bufferedImage2;
    
this.frameOne= frameOne;
    
this.frameTwo= frameTwo;
    
this.setTolerance(0);
    

    imageHeight: int32_t = bufferedImage!.getHeight()!;;
    

    imageWidth: int32_t = bufferedImage!.getWidth()!;;
    

                        if(bufferedImage!.getHeight() != bufferedImage2!.getHeight())
                        
                                    {
                                    this.isSameHeight= false;
    

                        if(imageHeight > bufferedImage2!.getHeight())
                        
                                    {
                                    imageHeight= bufferedImage2!.getHeight();
    

                                    }
                                

                                    }
                                
                        else {
                            this.isSameHeight= true;
    

                        }
                            

                        if(bufferedImage!.getWidth() != bufferedImage2!.getWidth())
                        
                                    {
                                    this.isSameWidth= false;
    

                        if(imageWidth > bufferedImage2!.getWidth())
                        
                                    {
                                    imageWidth= bufferedImage2!.getWidth();
    

                                    }
                                

                                    }
                                
                        else {
                            this.isSameWidth= true;
    

                        }
                            
this.imageWidth= imageWidth;
    
this.imageHeight= imageHeight;
    

                        if(!this.isSameWidth || !this.isSameHeight)
                        
                                    {
                                    
    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    
this.logUtil!.putF("Images were not the same size? Most likely a resolution change.", this, this.commonStrings!.CONSTRUCTOR);
    
this.logUtil!.putF("1: " +imageUtil!.toString(bufferedImage), this, this.commonStrings!.CONSTRUCTOR);
    
this.logUtil!.putF("2: " +imageUtil!.toString(bufferedImage2), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


    public float getMatchingPercent(){

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
                        return new StringMaker().append("ImageComparisonInfo: ")!.append(this.name)!.append(" Number Of Matching Pixels: ")!.appendint(this.pixelsThatMatch)!.append("\nNumber Of Non-Matching Pixels: ")!.appendint(this.getNonMatchingPixelVector()!.size())!.append("\nNumber Of Pixels Ignored: ")!.appendint(this.pixelsIgnored)!.append("\nMatching Percentage: ")!.appendfloat(this.getMatchingPercent())!.toString();;
    
}


    public std::vector<BufferedImage> getBufferedImages(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bufferedImages;
    
}


    public int32_t getTolerance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tolerance;
    
}


    setTolerance(int32_t tolerance){
this.tolerance= tolerance;
    
}


    public Long getFrameOne(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frameOne;
    
}


    public Long getFrameTwo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frameTwo;
    
}


};

            

