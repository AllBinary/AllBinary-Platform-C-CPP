
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ImageIO;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MediaIOUtil
            : public virtual Object
         {

    private: static MediaIOUtil* instance_owner();
    private: static MediaIOUtil* instance;

    public: static MediaIOUtil* getInstance();


            
    public: MediaIOUtil();
        
    public: std::vector<std::string> getReaderFormatNames();

    public: std::vector<std::string> getWriterFormatNames();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAIOUTIL_H_COMPLETE
        #if __has_include(<javax/imageio/ImageIO.h>)
#include <javax/imageio/ImageIO.h>
#endif

        #endif
    
