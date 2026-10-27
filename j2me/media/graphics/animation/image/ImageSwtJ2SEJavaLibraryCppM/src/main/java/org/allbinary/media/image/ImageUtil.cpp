
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/widgets/Canvas.h>

      
#include <org/eclipse/swt/widgets/Composite.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/eclipse/swt/events/PaintEvent.h>

      
#include <org/eclipse/swt/events/PaintListener.h>

      
#include <org/eclipse/swt/graphics/Transform.h>

      
#include <org/eclipse/swt/widgets/Display.h>

      
#include <org/microemu/app/BareMain.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/Image.h"

class ImageUtil
            : public Object
         {

    private: static ImageUtil* instance() { static std::unique_ptr<ImageUtil> value(new ImageUtil()); return value.get(); }

    public: static ImageUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: std::string IIOIMAGE_POOL_NAME = "IIOIMAGE_POOL_NAME";

    private: const std::string CREATE_BUFFERED_IMAGE = "createBufferedImage";

private: ImageUtil(){

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


    public: org::eclipse::swt::graphics::Image* create(int32_t width, int32_t height){

    Display* display = BareMain::shell.getDisplay();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new org::eclipse::swt::graphics::Image(display, width, height);
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t percent, bool scale){

    int32_t size = bufferedImageArray.size();;
    

    std::vector<org::eclipse::swt::graphics::Image*> scaledBufferedImageArray = std::vector<org::eclipse::swt::graphics::Image*>(size);;
    

    org::eclipse::swt::graphics::Image* bufferedImage;;
    

    ImageData* imageData;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    
imageData= bufferedImage->getImageData();
    

    int32_t newWidth = static_cast<int32_t>((imageData->width *percent /100));;
    

    int32_t newHeight = static_cast<int32_t>((imageData->height *percent /100));;
    
scaledBufferedImageArray[index]= this->createBufferedImage5(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage2(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, float percent, bool scale){

    int32_t size = bufferedImageArray.size();;
    

    std::vector<org::eclipse::swt::graphics::Image*> scaledBufferedImageArray = std::vector<org::eclipse::swt::graphics::Image*>(size);;
    

    org::eclipse::swt::graphics::Image* bufferedImage;;
    

    ImageData* imageData;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    
imageData= bufferedImage->getImageData();
    

    int32_t newWidth = static_cast<int32_t>((imageData->width *percent));;
    

    int32_t newHeight = static_cast<int32_t>((imageData->height *percent));;
    
scaledBufferedImageArray[index]= this->createBufferedImage5(bufferedImage, newWidth, newHeight, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<org::eclipse::swt::graphics::Image*> createBufferedImage3(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t width, int32_t height, bool scale){

    int32_t size = bufferedImageArray.size();;
    

    std::vector<org::eclipse::swt::graphics::Image*> scaledBufferedImageArray = std::vector<org::eclipse::swt::graphics::Image*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scaledBufferedImageArray[index]= this->createBufferedImage5(bufferedImageArray[index], width, height, scale);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledBufferedImageArray;
    
}


                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage4(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createBufferedImage5(bufferedImage, newWidth, newHeight, true);;
    
}


                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage5(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createBufferedImage6(bufferedImage, newWidth, newHeight, scale, false);;
    
}


                //@Throws(Exception.constructor)
            
    public: org::eclipse::swt::graphics::Image* createBufferedImage6(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate){

    ImageData* imageData = bufferedImage->getImageData();;
    

    float width = imageData->width;;
    

    float height = imageData->height;;
    

    float d_newWidth = newWidth;;
    

    float d_newHeight = newHeight;;
    

    float widthRatio = d_newWidth /width;;
    

    float heightRatio = d_newHeight /height;;
    

    float ratioX = 1.0;;
    

    float ratioY = 1.0;;
    

                        if(scale)
                        
                                    {
                                    ratioX= widthRatio;
    
ratioY= heightRatio;
    

                                    }
                                
this->logUtil->putF((new StringMaker())->appendfloat(width)->append(this->commonSeps->FORWARD_SLASH)->appendfloat(height)->append(this->commonSeps->COLON)->appendint(newWidth)->append(this->commonSeps->FORWARD_SLASH)->appendint(newHeight)->append(this->commonSeps->COLON)->appendfloat(widthRatio)->append(this->commonSeps->FORWARD_SLASH)->appendfloat(heightRatio)->toString(), this, this->CREATE_BUFFERED_IMAGE);
    

    float dx = 0;;
    

    float dy = 0;;
    

                        if(!scale && allowTranslate)
                        
                                    {
                                    dx= (newWidth -width) /2;
    
dy= (newHeight -height) /2;
    
this->logUtil->putF((new StringMaker())->append("Translate dx: ")->appendfloat(dx)->append(" dy: ")->appendfloat(dy)->toString(), this, this->CREATE_BUFFERED_IMAGE);
    

                                    }
                                

    org::eclipse::swt::graphics::Image* newBufferedImage = new org::eclipse::swt::graphics::Image(BareMain::shell.getDisplay(), newWidth, newHeight);;
    

    GC* gc = new GC(newBufferedImage);;
    

    Transform* affineTransform = new Transform(gc->getDevice());;
    
affineTransform->scale(ratioX, ratioY);
    
affineTransform->translate(dx, dy);
    
gc->setTransform(affineTransform);
    
gc->setAntialias(SWT::ON);
    
gc->setInterpolation(SWT::HIGH);
    
gc->drawImage(bufferedImage, 0, 0, bufferedImage->getBounds()->width, bufferedImage->getBounds()->height, 0, 0, newWidth, newHeight);
    
gc->dispose();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newBufferedImage;
    
}


    public: Canvas* drawTransformedImage(org::eclipse::swt::graphics::Image* image, Composite* parent, int32_t dx, int32_t dy, int32_t width, int32_t height){

    Canvas* imageCanvas = new Canvas(parent, SWT::NONE);;
    
imageCanvas->addPaintListener(class extends PaintListener
                                {
                                
    public: void paintControl(PaintEvent* event){

    GC* gc = event->gc;;
    

    Transform* affineTransform = new Transform(gc->getDevice());;
    
affineTransform->translate(dx, dy);
    
gc->setAntialias(SWT::ON);
    
gc->setInterpolation(SWT::HIGH);
    
gc->drawImage(image, 0, 0, image->getBounds()->width, image->getBounds()->height, 0, 0, width, height);
    
}

                                }
                            );
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageCanvas;
    
}


    public: std::string toString(org::eclipse::swt::graphics::Image* bufferedImage){

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    ImageData* imageData = bufferedImage->getImageData();;
    
stringBuffer->append(" org.eclipse.swt.graphics.Image: ");
    
stringBuffer->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(imageData->width);
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(imageData->height);
    
stringBuffer->append(" Type: ");
    
stringBuffer->appendint(imageData->type);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

