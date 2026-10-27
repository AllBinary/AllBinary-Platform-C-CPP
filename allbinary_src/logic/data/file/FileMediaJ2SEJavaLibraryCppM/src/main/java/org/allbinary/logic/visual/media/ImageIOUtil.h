
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
class ImageIO;
class AbFile;
class AbFileNativeUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageIOUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static BufferedImage* read(AbFile* file);

                //@Throws(Exception.constructor)
            
    public: static bool write(RenderedImage* renderedImage, std::string name, AbFile* file);


            
    public: ImageIOUtil();
        
};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_IMAGEIOUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/awt/image/RenderedImage.h>)
#include <java/awt/image/RenderedImage.h>
#endif
#if __has_include(<javax/imageio/ImageIO.h>)
#include <javax/imageio/ImageIO.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileNativeUtil.h>)
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>
#endif

        #endif
    
