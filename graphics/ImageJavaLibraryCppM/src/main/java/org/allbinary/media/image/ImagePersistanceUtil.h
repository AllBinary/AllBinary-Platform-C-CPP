
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H

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
        
class ImagePersistanceUtil
            : public Object
         {

    private: static ImagePersistanceUtil* instance() { static std::unique_ptr<ImagePersistanceUtil> value(new ImagePersistanceUtil()); return value.get(); }

    public: static ImagePersistanceUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void saveWithBatik(AbFile* file, BufferedImage* bufferedImage);

    public: void saveWithImageIO(std::string filePath, BufferedImage* bufferedImage);

    public: void saveWithImageIO(File* file, BufferedImage* bufferedImage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H
