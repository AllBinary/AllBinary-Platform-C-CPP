
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImagePersistanceUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <java/util/Iterator.h>

      
#include <javax/imageio/IIOImage.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <javax/imageio/ImageWriteParam.h>

      
#include <javax/imageio/ImageWriter.h>

      
#include <javax/imageio/stream/ImageOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/batik/ext/awt/image/codec/png/PNGImageWriter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImagePersistanceUtil::ImagePersistanceUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto ImagePersistanceUtil::instance_owner() -> ImagePersistanceUtil* { static std::unique_ptr<ImagePersistanceUtil> value(new ImagePersistanceUtil()); return value.get(); }
ImagePersistanceUtil* ImagePersistanceUtil::instance = ImagePersistanceUtil::instance_owner();

    auto ImagePersistanceUtil::getInstance() -> ImagePersistanceUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImagePersistanceUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto ImagePersistanceUtil::saveWithBatik(AbFile* file, BufferedImage* bufferedImage) -> void{

    PNGImageWriter* batikPNGImageWriter = new PNGImageWriter();;
    

    AbFileOutputStream* fileOutputStream = AbFileOutputStream::createFromAbFile(file);;
    

        {
        
        auto finallyFunction_N66301 = [&]() {
            fileOutputStream->flush();
    
StreamUtil::getInstance()->close(fileOutputStream);
    

        };
        
        struct FinallyGuard_N66301 { decltype(finallyFunction_N66301)& function; ~FinallyGuard_N66301() { function(); } } finallyGuard_N66301{finallyFunction_N66301};
        
        {
            batikPNGImageWriter->writeImage(bufferedImage, fileOutputStream);
    

        }

        }

this->logUtil->putF(JavaString::valueOf("Wrote Image: ") +JavaString::valueOf(file->getAbsolutePath()), this, this->commonStrings->SAVE);
    
}


    auto ImagePersistanceUtil::saveWithImageIO(std::string filePath, BufferedImage* bufferedImage) -> void{
this->saveWithImageIO(new File(filePath), bufferedImage);
    
}


    auto ImagePersistanceUtil::saveWithImageIO(File* file, BufferedImage* bufferedImage) -> void{

    ImageWriter* writer = 
                nullptr
            ;;
    

    ImageOutputStream* ios = 
                nullptr
            ;;
    

        {
        
        auto finallyFunction_N66766 = [&]() {
            
        try {
            
                        if(ios != 
                                    nullptr
                                )
                        
                                    {
                                    ios->flush();
    

        try {
            
                        if(ios != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(ios), ios, this->commonStrings->CLOSE);
    
ios->close();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, ios, commonStrings->CLOSE, &e);
    
}


                                    }
                                

                        if(writer != 
                                    nullptr
                                )
                        
                                    {
                                    writer->dispose();
    

                                    }
                                

                //: 
} catch(IOException& e2) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, &e2);
    
}


        };
        
        struct FinallyGuard_N66766 { decltype(finallyFunction_N66766)& function; ~FinallyGuard_N66766() { function(); } } finallyGuard_N66766{finallyFunction_N66766};
        
        try {
            
    Iterator* iter = ImageIO::getImageWritersByFormatName("jpeg");;
    

                        if(!iter->hasNext())
                        
                                    {
                                    this->logUtil->putF("Unable to save image to jpeg file type.", this, this->commonStrings->SAVE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
writer= dynamic_cast<ImageWriter*>(iter->next());
    
ios= ImageIO::createImageOutputStream(file);
    
writer->setOutput(ios);
    

    ImageWriteParam* iwp = writer->getDefaultWriteParam();;
    
iwp->setCompressionMode(ImageWriteParam::MODE_EXPLICIT);
    
iwp->setCompressionQuality(0.95);
    
writer->write(
                            nullptr, new IIOImage(bufferedImage, 
                            nullptr, 
                            nullptr), iwp);
    
this->logUtil->putF(JavaString::valueOf("Wrote Image: ") +JavaString::valueOf(file->getAbsolutePath()), this, this->commonStrings->SAVE);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, &e);
    
}

        }

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_CPP
