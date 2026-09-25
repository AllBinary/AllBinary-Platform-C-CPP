
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
        
            #include "../../../../../java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonSearch
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: bool isSameHeight= false;

    public: bool isSameWidth= false;

    public: int32_t pixelsThatMatch= 0;

    public: int32_t pixelsIgnored= 0;

    public: int32_t imageHeight;

    public: int32_t imageWidth;

    private: int32_t tolerance= 0;

    private: BasicArrayList nonMatchingPixelVector;

    private: std::vector<BufferedImage> bufferedImages;

    private: float matchingPercent =  -1;

public: ImageComparisonSearch(BufferedImage bufferedImage, BufferedImage bufferedImage2, int32_t tolerance){
this->nonMatchingPixelVector= BasicArrayListD();
    
this->setBufferedImages(new Array(2));
    
this->getBufferedImages()[0]= bufferedImage;
    
this->getBufferedImages()[1]= bufferedImage2;
    
this->imageHeight= bufferedImage.getHeight();
    
this->imageWidth= bufferedImage.getWidth();
    

                        if(bufferedImage.getHeight() != bufferedImage2.getHeight())
                        
                                    {
                                    this->isSameHeight= false;
    

                        if(this->imageHeight > bufferedImage2.getHeight())
                        
                                    {
                                    this->imageHeight= bufferedImage2.getHeight();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameHeight= true;
    

                        }
                            

                        if(bufferedImage.getWidth() != bufferedImage2.getWidth())
                        
                                    {
                                    this->isSameWidth= false;
    

                        if(this->imageWidth > bufferedImage2.getWidth())
                        
                                    {
                                    this->imageWidth= bufferedImage2.getWidth();
    

                                    }
                                

                                    }
                                
                        else {
                            this->isSameWidth= true;
    

                        }
                            

                        if(!this->isSameWidth || !this->isSameHeight)
                        
                                    {
                                    
    ImageUtil imageUtil = ImageUtil::getInstance();;
    
this->logUtil.putF("Images were not the same size? Most likely a resolution change.", this, this->commonStrings.CONSTRUCTOR);
    
this->logUtil.putF("1: " +imageUtil.toString(bufferedImage), this, this->commonStrings.CONSTRUCTOR);
    
this->logUtil.putF("2: " +imageUtil.toString(bufferedImage2), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


    private: float getMatchingPercent(){

                        if(this->matchingPercent ==  -1)
                        
                                    {
                                    this->matchingPercent= this->pixelsThatMatch /(this->imageWidth *this->imageHeight);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->matchingPercent;
    
}


    public: void add(PixelDelta pixel){
this->nonMatchingPixelVector.add(pixel);
    
}


    public: BasicArrayList getNonMatchingPixelVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nonMatchingPixelVector;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "ImageComparisonInfo: " +" Number Of Matching Pixels: " +this->pixelsThatMatch +"\nNumber Of Non-Matching Pixels: " +this->getNonMatchingPixelVector().size() +"\nNumber Of Pixels Ignored: " +this->pixelsIgnored +"\nMatching Percentage: " +this->getMatchingPercent();
    
}


    public: std::vector<BufferedImage> getBufferedImages(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImages;
    
}


    private: void setBufferedImages(std::vector<BufferedImage> bufferedImages){
this->bufferedImages= bufferedImages;
    
}


    public: int32_t getTolerance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tolerance;
    
}


    public: void setTolerance(int32_t tolerance){
this->tolerance= tolerance;
    
}


};

            

