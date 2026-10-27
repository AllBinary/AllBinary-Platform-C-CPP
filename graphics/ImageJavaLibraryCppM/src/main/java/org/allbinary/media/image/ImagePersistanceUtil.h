
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class IIOImage;
class ImageIO;
class ImageWriteParam;
class ImageWriter;
class ImageOutputStream;
class LogUtil;
class AbFileOutputStream;
class StreamUtil;
class AbFile;
class CommonStrings;
class PNGImageWriter;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImagePersistanceUtil
            : public virtual Object
         {

    private: static ImagePersistanceUtil* instance_owner();
    private: static ImagePersistanceUtil* instance;

    public: static ImagePersistanceUtil* getInstance();


            
    public: ImagePersistanceUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: void saveWithBatik(AbFile* file, BufferedImage* bufferedImage);

    public: void saveWithImageIO(std::string filePath, BufferedImage* bufferedImage);

    public: void saveWithImageIO(File* file, BufferedImage* bufferedImage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEPERSISTANCEUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/util/Iterator.h>)
#include <java/util/Iterator.h>
#endif
#if __has_include(<javax/imageio/IIOImage.h>)
#include <javax/imageio/IIOImage.h>
#endif
#if __has_include(<javax/imageio/ImageIO.h>)
#include <javax/imageio/ImageIO.h>
#endif
#if __has_include(<javax/imageio/ImageWriteParam.h>)
#include <javax/imageio/ImageWriteParam.h>
#endif
#if __has_include(<javax/imageio/ImageWriter.h>)
#include <javax/imageio/ImageWriter.h>
#endif
#if __has_include(<javax/imageio/stream/ImageOutputStream.h>)
#include <javax/imageio/stream/ImageOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileOutputStream.h>)
#include <org/allbinary/logic/io/AbFileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/batik/ext/awt/image/codec/png/PNGImageWriter.h>)
#include <org/apache/batik/ext/awt/image/codec/png/PNGImageWriter.h>
#endif

        #endif
    
