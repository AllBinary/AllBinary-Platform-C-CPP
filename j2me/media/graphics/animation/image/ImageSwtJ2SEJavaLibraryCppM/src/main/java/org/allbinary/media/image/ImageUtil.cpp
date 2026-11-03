
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageUtil.h"
        

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

auto ImageUtil::instance_owner() -> ImageUtil* { static std::unique_ptr<ImageUtil> value(new ImageUtil()); return value.get(); }
ImageUtil* ImageUtil::instance = ImageUtil::instance_owner();

    auto ImageUtil::getInstance() -> ImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageUtil::instance;
    
}


ImageUtil::ImageUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()){

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


    auto ImageUtil::create(int32_t width, int32_t height) -> org::eclipse::swt::graphics::Image*{

    Display* display = BareMain::shell->getDisplay();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new org::eclipse::swt::graphics::Image(display, width, height);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t percent, bool scale) -> std::vector<org::eclipse::swt::graphics::Image*>{

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
            
    auto ImageUtil::createBufferedImage2(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, float percent, bool scale) -> std::vector<org::eclipse::swt::graphics::Image*>{

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
            
    auto ImageUtil::createBufferedImage3(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray, int32_t width, int32_t height, bool scale) -> std::vector<org::eclipse::swt::graphics::Image*>{

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
            
    auto ImageUtil::createBufferedImage4(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight) -> org::eclipse::swt::graphics::Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createBufferedImage5(bufferedImage, newWidth, newHeight, true);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage5(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale) -> org::eclipse::swt::graphics::Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createBufferedImage6(bufferedImage, newWidth, newHeight, scale, false);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageUtil::createBufferedImage6(org::eclipse::swt::graphics::Image* bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate) -> org::eclipse::swt::graphics::Image*{

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
                                

    org::eclipse::swt::graphics::Image* newBufferedImage = new org::eclipse::swt::graphics::Image(BareMain::shell->getDisplay(), newWidth, newHeight);;
    

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


    auto ImageUtil::drawTransformedImage(org::eclipse::swt::graphics::Image* image, Composite* parent, int32_t dx, int32_t dy, int32_t width, int32_t height) -> Canvas*{

    Canvas* imageCanvas = new Canvas(parent, SWT::NONE);;
    
imageCanvas->addPaintListener([&]() {
    static thread_local ImageUtil* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    static thread_local org::eclipse::swt::graphics::Image* anonymous0_image{};
    anonymous0_image = image;
    static thread_local int32_t anonymous0_dx{};
    anonymous0_dx = dx;
    static thread_local int32_t anonymous0_dy{};
    anonymous0_dy = dy;
    static thread_local int32_t anonymous0_width{};
    anonymous0_width = width;
    static thread_local int32_t anonymous0_height{};
    anonymous0_height = height;
    class Anonymous0 : public PaintListener {
    public:
    using PaintListener::PaintListener;
    ImageUtil* outer = anonymousOuter0;
    org::eclipse::swt::graphics::Image* image = anonymous0_image;
    int32_t dx = anonymous0_dx;
    int32_t dy = anonymous0_dy;
    int32_t width = anonymous0_width;
    int32_t height = anonymous0_height;

    public: void paintControl(PaintEvent* event){

    GC* gc = event->gc;;
    

    Transform* affineTransform = new Transform(gc->getDevice());;
    
affineTransform->translate(dx, dy);
    
gc->setAntialias(SWT::ON);
    
gc->setInterpolation(SWT::HIGH);
    
gc->drawImage(image, 0, 0, image->getBounds()->width, image->getBounds()->height, 0, 0, width, height);
    
}

    };
    return new Anonymous0();
}());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageCanvas;
    
}


    auto ImageUtil::toString(org::eclipse::swt::graphics::Image* bufferedImage) -> std::string{

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




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_CPP
