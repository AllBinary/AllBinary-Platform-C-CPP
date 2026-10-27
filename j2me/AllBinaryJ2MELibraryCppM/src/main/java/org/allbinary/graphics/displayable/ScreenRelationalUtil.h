
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DisplayInfoSingleton;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenRelationalUtil
            : public virtual Object
         {

    private: static ScreenRelationalUtil* instance_owner();
    private: static ScreenRelationalUtil* instance;

    public: static ScreenRelationalUtil* getInstance();


            
    public: ScreenRelationalUtil();
        
    public: float getScaleImage(Image* image);

    public: float getScaleWH(int32_t aWidth, int32_t aHeight);

    public: float getScaleWHA(int32_t aWidth, int32_t aHeight, int32_t add);

    public: int32_t getScaledHeight(int32_t aWidth, int32_t aHeight);

    public: int32_t getScaledHeightAdd(int32_t aWidth, int32_t aHeight, int32_t add);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif

        #endif
    
